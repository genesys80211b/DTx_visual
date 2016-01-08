function dtx_v35_modified()
coder.extrinsic('getipa')
coder.extrinsic('sprintf')
% Designated Receiver Parameter Structure
%prm = init_v35();
% aip: IP Address for USRP attached to this machine as a 3-Digit uint8
%      (as of 2/19/15, valid values for N210's in Lab are 102, 103, or 202)
aip = getipa();
% c8f: Count of the Number of 802.11b Frames Sent
c8f = uint8(1);
% cai: Count #ACK Iterations: Counts #iter in which DTx is waiting for ACK
cai = uint16(0);
% cni: Count #No-ACK Iterations: Counts #iter in which no ACK Rx'd
cni = uint16(0);
% cti: Count Total #Iterations: Counts #iterations of main WHILE loop
cti = uint16(0);
% db:  Blank Data: For putting on Transmit Buffer while in a Rx Major State
db  = complex(zeros(1408,1));
% df:  This USRP Data frame: The most-recently-received frame from USRP Rx Buffer
df  = complex(zeros(1408,1));
% d2s: Data To Send: To put on Transmit Buffer while in a Tx Major State
d2s = complex(zeros(1408,1)); %#ok<NASGU>
% f8t: Flag 802.11b frame Transmitted; wait for ACK
f8t = logical(false(1)); %#ok<NASGU>
% fe:  Terminal Flag to Signal End-of-Transmission (EOT)
fe  = logical(false(1));
% fit: Flag Full Image Transmitted; program can exit after last ACK
fit = logical(false(1));
% frt: Flag Retransmit: On ACK timeout, retransmit last 802.11b frame again
frt = logical(false(1));
% ft:  Terminal Flag to release System objects
ft  = logical(false(1));
% st:  State for Designated Transmitter (DTx): 3 Digits, 1st Dig=1 for DTx
%      2nd Digit is 1 for Det Energy, 2 for Transmit DATA, or 3 for Rx ACK
st  = uint8(uint8(121)); %prm.DTxStateTransmitHeader
% smt: DTx Major State: Most Significant 2 Digits of Full DTx State
smt = uint8(0); %#ok<NASGU>
% to:  Timeout: The #iterations of the main loop to wait before exiting.
to  = uint32(8000);
% toa: Timeout ACK: #iterations to wait for an ACK before resending DATA
toa = uint32(4000);
% hft: Function Handle to transceive() function for this IP Address
trx = eval(sprintf('@transceive%3d_mex',aip));
% vm:  Verbose M    f.IPAddress(end-4:end)ode: Displays additional text describing DRx actions
vm  = logical(true(1));
tic;
while ~fe
    smt = st/uint8(10);
    if (smt==uint8(12)) %prm.DTxStateTransmitDATA
        [d2s,f8t,ft] = dtx_2TransmitDATA(frt,ft);
        trx(d2s,ft);
        frt = logical(false(1));
        if (f8t)
            if (vm), fprintf(1,'@%5.2f: 802.11B frame #%d transmitted.\n',toc,c8f);  end %*********Commented out for
            % now!!!!!!!!!*********
            st = uint8(131); %prm.DTxStateRxACKSearchPLCP
        end
    elseif (smt==uint8(13)) %prm.DTxStateRxACK
        df = trx(db,ft);
        [faf,st] = dtx_3ReceiveACK(df,ft,st);
        if (faf)
            % If ACK received, reset count of #iterations with no ACK
            cai = uint16(0); cni = uint16(0);
            %if (vm), fprintf(1,'@%5.2f: 802.11B ACK #%d received.\n',toc,c8f); end
            % Increment count of #802.11B frames sxsfully transceived
            c8f = c8f + uint8(1);
            %             fit = true(1); % Hard-coded to ensure exit after ACK #1
            if c8f==7
                fit=true(1);
                %******************************************Undo changes
            end
            if (fit)
                % If ACK rx'd for last DATA frame & full image was tx'd,
                % Change DTx State to Terminal State: no more Tx/Rx performed
                st = uint8(140); %prm.DTxStateEOT
                % Set exit flag
                fe = logical(true(1));
            else
                st = uint8(111); %prm.DTxStateEnergyDetDIFS
            end
        else
            % Increment count of #iterations with no ACK
            cai = (cai+uint16(1)); cni = (cni+uint16(1));
            % If no ACK received within TOA iterations, resend this DATA frame
            if (cni>=toa)
                % Reset no-ACK count
                cni = uint16(0);
                if (vm), fprintf(1,'@%5.2f: Timeout, No ACK rxd in %d iters, Retransmitting Frame #%d...\n',toc,toa,c8f); end
                st = uint8(121); %prm.DTxStateTransmitHeader
                % Set flag to retransmit DATA
                frt = logical(true);
            end
        end
    elseif (smt==uint8(11)) %prm.DTxStateEnergyDet
        st = dtx_1DetectEnergy(st);
    end % END IF DS
    cti = (cti+uint16(1));
    % If no response from DRx received in TO iterations, then exit
    if (cai>=to)
        if (vm), fprintf(1,'@%5.2f: Timeout, No ACK rxd in %d iters, Exiting...\n',toc,to); end
        % Change DTx State to Terminal State: no more Tx/Rx performed
        st = uint8(140); %prm.DTxStateEOT
        % Set exit flag
        fe  = logical(true(1));
    end % END IF CTI>TO
end % END WHILE ~FE
% Clear persistent data within all helper functions
ft = logical(true(1));
trx(db,ft);
dtx_2TransmitDATA(frt,ft);
dtx_3ReceiveACK(df,ft,st);
clear('ddd','dtx_2TransmitDATA','dtx_3ReceiveACK','preambleDet','rffe','sms');
clear(sprintf('transceive%3d_mex',aip));
return;
end % End Function DTX_V35

function [d2s,f8t,fit] = dtx_2TransmitDATA(frt,ft)
% DTX_2TRANSMITDATA: Transmits DATA 802.11b frame in consecutive USRP frames
% Function Arguments:
% d2s: Data To Send, frame data in 1408 samples to put on USRP Tx buffer
% f8t: Flag Full 802.11b Frame Transmitted: If true, specifies to change state to receive ACK
% fit: Flag Full Image Transmitted: If true, specifies to exit program after ACK
% frt: Flag to Retransmit Frame
% ft:  Flag Terminal: If true, specifies to release System objects

% Persistent Data: Maintained between function calls to drx_1ReceiveData
% c8f: 802.11b Frame Count: Counts #802.11b Frames transmitted
persistent c8f;
% c8s: 802.11b Frame Sample Count: Counts #802.11b Frame samples transmitted
persistent c8s;
% cib: Image Bit Count: Counts #Image Data Bits transmitted
persistent cib;
% cuf: USRP Frame Count: Counts #USRP frames transmitted
persistent cuf;
% d8b: Data 802.11b Frame Bits: Binary seq to partition into USRP frames
persistent d8b;
% d8s: Data 802.11b Frame Samples: Complex seq to partition into USRP frames
persistent d8s;
% dib: Data Image Bits: Binary sequence to be sent in payload segments
persistent dib;
% hcg: Handle to PHY PLCP CRC Generator
persistent hcg;
% hfg: Handle to MAC FCS Generator
persistent hfg;
% hrt: Handle to Raised Cosine Transmit Filter (RCTF) System object
persistent hrt;
% nbb: Number of MSDU/MAC Frame Body Bits per 802.11b Frame (def 16,096)
persistent nbb;
% nib: Number of Image Data Bits: Length of dib vector (def 103,864)
persistent nib;
% nmb: Number of MPDU/MAC Frame Bits per 802.11b Frame (def 16,192)
persistent nmb;
% n8b: Number of PPDU/802.11b Frame Bits: Length of d8b vector (def 16,384)
persistent n8b;
% n8f: Number of 802.11b Frames to send the entire binary image data seq
persistent n8f;
% n8s: Number of PPDU/802.11b Frame Spread Samples (def 180,224)
persistent n8s;
% nuf: Number of USRP Frames for this 802.11b Frame (def 256)
persistent nuf;
% Initialize Persistent Data: Only on first call to dtx_2TransmitDATA
if isempty(c8f),    c8f = uint32(0);        end
if isempty(c8s),    c8s = uint32(0);        end
if isempty(cib),    cib = uint32(0);        end
if isempty(cuf),    cuf = uint32(0);        end
if isempty(d8b),    d8b = zeros(16384,1);   end
if isempty(d8s),    d8s = complex(zeros(180224,1));  end
if isempty(dib) || isempty(nib)
    % Load Image Data with any size -- MPDU preparation
    fn  = 'membrane_color_smaller.jpg';  % fn: File Name
    ii  = imfinfo(fn);
    dib = im2bi(rgb2gray(imread(fn)));
    nib = uint32(ii.Width*ii.Height*8+24);
end
if isempty(hcg)
    hcg = comm.CRCGenerator('ChecksumsPerFrame',1,'FinalXOR',1, ...
        'InitialConditions',1,'Polynomial',[16,12,5,0]);
end
if isempty(hfg)
    hfg = comm.CRCGenerator('ChecksumsPerFrame',1,'FinalXOR',1, ...
        'InitialConditions',1,'Polynomial', ...
        [32,26,23,22,16,12,11,10,8,7,5,4,2,1,0]);
end
if isempty(hrt)
    hrt = comm.RaisedCosineTransmitFilter('FilterSpanInSymbols',8, ...
        'Gain',1,'OutputSamplesPerSymbol',2,'RolloffFactor',0.3, ...
        'Shape','Square root');
end % IF ISEMPTY(HRT)
% Initial MAC frame bodies have 2012 octets, or 16,096 bits
if isempty(nbb),    nbb = uint32(16096);        end
% Initial MAC frames have 2024 octets, or 16096+96=16,192 bits
if isempty(nmb),    nmb = nbb+uint32(96);       end
% Initial PHY frames have 2048 octets, or 16192+192=16,384 bits
if isempty(n8b),    n8b = nmb+uint32(192);      end
% Small image takes 103,864/16,096=6 802.11b Frames
if isempty(n8f),    n8f = uint32(ceil(double(nib)/double(nbb))); end
% Initial PHY frames have 16,384*11=180,224 spread samples
if isempty(n8s),    n8s = n8b*uint32(11);       end
% Initial 802.11b Frames take 16,384/64=256 USRP frames
if isempty(nuf),    nuf = uint32(ceil(double(n8b)/64)); end
% Local data preallocation
d2s = complex(zeros(1408,1));
dfi = complex(zeros(16384,1));
dfo = complex(zeros(180224,1));
dss = complex(zeros(704,1));
f8t = logical(false(1));
fit = logical(false(1));
if (ft)
    % Release System objects: only on final call to dtx_2TransmitDATA()
    release(hcg);
    release(hfg);
    release(hrt);
    % Release System objects created by SMS() function
    sms(d8b,ft,n8b);
    % clear('hcg','hfg','hrt'); % Not supported for code generation
    % Clear persistent data within SMS() function
    % clear('sms'); % Not supported for code generation
else
    % ONLY ON 1ST USRP FRAME IN THIS 802.11B FRAME, prepare PPDU samples
    if (cuf == uint32(0))
        if (frt)
            % If retransmit flag set, decrease count of image bits sent
            cib = (cib - nbb);
        else
            % Otherwise, update 802.11b Frame Count
            c8f = (c8f + 1);
        end
        % ONLY ON LAST 802.11B FRAME, recalculate NXX persistent variables
        if (c8f == n8f)
            % Recalculate MSDU/MAC frame body length from #remaining bits to send
            nbb = min((nib-cib), uint32(16096));
            % Recalculate MPDU/MAC frame length from MSDU length
            nmb = nbb + uint32(96);
            % Recalculate PPDU/802.11b frame length from MPDU length
            n8b = nmb + uint32(192);
            % Recalculate #PPDU samples from #PPDU bits
            n8s = n8b * uint32(11);
            % Recalculate #USRP frames per 802.11b frame
            nuf = uint32(ceil(double(n8b)/64));
        end
        % On 1st USRP frame, prepare this 802.11b frame
        % Send SYNC signal in 1st 128 bits
        d8b(001:128) = ones(128,1);
        % Send PHY SFD & PLCP Header in next 64 bits
        d8b(129:144) = [0;0;0;0;0;1;0;1;1;1;0;0;1;1;1;1];
        d8b(145:152) = [0;1;0;1;0;0;0;0];
        d8b(153:160) = zeros(8, 1);
        % LENGTH=MACHeader (64)+MSDU/MAC Frame Body(0)+MAC FCS (32)
        d8b(161:176) = de2bi(double(nmb), 16)';
        % Append 16-bit CRC to 32-bit PLCP Header: result is 48 bits
        d8b(145:192) = step(hcg, d8b(145:176));
        % Send MAC Header for DATA frame
        % DATA Frame Control (8 bits): Ver 00, Type 10, Subtype 0000
        d8b(193:200) = [0;0;1;0;0;0;0;0];
        % DATA Frame Duration/ID Slot (8 bits) holds Frame number in sequence
        d8b(201:208) = de2bi(double(c8f), 8)';
        % DATA Frame Address 1 is RA
        d8b(209:224) = [de2bi(20,8),de2bi(2,8)]';
        % DATA Frame Address 2 is TA
        d8b(225:240) = [de2bi(10,8),de2bi(2,8)]';
        d8b(241:256) = zeros(16,1);
        % DATA MSDU / MAC Frame Body: n8b bits
        d8b(257:(256+nbb)) = dib(cib+1:cib+nbb);
        % Append 32-bit FCS to MAC Header(64)+MSDU(16,096): res 16,192 bits
        d8b(193:288+nbb) = step(hfg, d8b(193:(256+nbb)));
        % Scramble, Modulate, and Spread this 802.11b Frame
        dfi(1:n8b) = d8b(1:n8b);
        dfo = sms(dfi,ft,n8b);
        d8s(1:n8s) = dfo(1:n8s);
        % Update Image Data Bit Count
        cib = cib + nbb;
    end % IF CUF==0
    dss(1:704)  = d8s(c8s+1:c8s+704);
    d2s(1:1408) = step(hrt,dss);
    c8s = c8s + uint32(704);
    cuf = cuf + uint32(1);
    if ((cuf>=nuf) || (c8s>=n8s))
        % Update 802.11 Frame Transmitted Flag to TRUE
        f8t = logical(true(1));
        if ((c8f>=n8f) || (cib>=nib))
            % Update Entire Image Transmitted Flag to TRUE
            fit = logical(true(1));
        end
        % Reset 802.11b sample count and USRP frame count
        c8s = uint32(0);
        cuf = uint32(0);
    end % IF CUF==NUF
end
end % End Function DTX_2TRANSMITDATA

function [faf,st] = dtx_3ReceiveACK(df,ft,st)
% DRX_1RECEIVEDATA: Gets 802.11b DATA frame in 256 consecutive USRP frames
% Function Arguments:
% df:  This Data Frame, Raw USRP frame data in 1408 samples
% dfl: Data Flagged: uint16 to accompany data, set when status flag is true
% flg: Status Flags: a 1x5 logical array, carrying the following flags:
% (1): fdf: Flag Detected Preamble: Set true if PLCP Preamble (SYNC) found
% (2): fph: Flag PLCP Header Found: Init false, set true if PHY Header rx'd
% (3): fec: Flag Error CRC: Init false, set true if PHY Header CRC in error
% (4): fmh: Flag MAC Header Found: Init false, set true if MAC Header rx'd
% (5): fpf: Flag All Payload Found: Init false, set true if all payload rxd
% (6): ffc: Flag Frame Control: Set true if FrameCtrl~=DATA (e.g. if ACK)
% ft:  Flag Terminal: If true, specifies to release System objects
% nrb: Number of Recovered (MAC) Bits: Zero if not returning any MAC bits
% rbs: Recovered Binary Sequence: Taken from MAC Hdr/Payload/FCS (64 bits)
% sr:  State of Designated Receiver (DRx), a 3-digit enumeration

% Persistent Data: Maintained between function calls to drx_1ReceiveData
% chf: Header Frame Count: Counts #USRP frames that have header info (0-2)
persistent chf;
% cp:  Payload Frame Count: Counts #USRP frames w/only payload data (0-251)
persistent cpf;
% dld: Data Last Decoded: Holds bits from last decoded USRP frame (len 64)
persistent dld;
% hcd: Handle to PHY PLCP CRC Detector
persistent hcd;
% i1b: Index of 1st bit in decoded USRP frame; found by SFD Detection
persistent i1b;
% i1s: Index of 1st sample in USRP frame (SYNC Delay+1): the sample# in Rx
%      buffer (rb) that marks start of frame; found by Preamble Detection
persistent i1s;
% n8f: Number in Sequence of MPDU 802.11b frame
persistent n8f;
% nmb: Number of MPDU Bits (from LENGTH in PLCP Header, def. 16192 bits)
persistent nmb;
% npf: Number of Payload & FCS Frames =ceil((nmb-64)/64), def. 252
persistent npf;
% rb: Receive Buffer: Twice Length of USRP frame for Preamble Det (2816 samples)
persistent rb;

% Setting global variables
global halfUsrpFrameLength usrpFrameLength numUsrpBits

faf=logical(false(1));
% CONSTANTS: For Construction of System objects
cas = double(0.5);
cau = double(704);
cef = double(100.0);
% Initialize Persistent Data: Only on first call to drx_1ReceiveData
if isempty(chf),    chf = uint8(0);                 end
if isempty(cpf),    cpf = uint8(0);                 end
if isempty(dld),    dld = real(zeros(64,1));        end
if isempty(n8f),    n8f = uint16(0);                end
if isempty(hcd)
    hcd = comm.CRCDetector('ChecksumsPerFrame',1,'FinalXOR',1, ...
        'InitialConditions',1,'Polynomial',[16,12,5,0]);
end % END IF ISEMPTY(HCD)
if isempty(i1b),    i1b = uint8(1);                 end
if isempty(i1s),    i1s = uint16(1);                end
if isempty(nmb),    nmb = uint16(16192);            end
if isempty(npf),    npf = uint8(252);               end
if isempty(rb),     rb  = complex(zeros(2816,1));   end
% Local Function Data: Overwritten on every call to drx_1ReceiveData
cra = zeros(41,1);
crm = zeros(2,2);
% dfb: This Frame + Last Frame Bits
dfb = zeros(128,1);
% dfd: This Frame Decoded: 1/11 the Length of this recovered USRP frame (64)
dfd = zeros(64,1);
dfl = uint16(0);
% dfr: This Frame Recovered: Half the Length of this USRP frame tf (704)
dfr = complex(zeros(704,1));
flg = logical(false(1,6));
flt = logical(false(1,1)); %#ok<NASGU>
ips = uint16(0); %#ok<NASGU>
nrb = uint16(0);
rbs = zeros(64,1);
if (ft)
    release(hcd);
    %clear('hcd'); % Not supported for code generation
    rffe(df,ft,cas,cau,cef);
    ddd(dfr,ft);
    % Clear persistent data within RFFE() and DDD() functions
    % clear('rffe','preambleDet','ddd'); % Not supported for code generation
else
    % RF Front End: AGC, Freq Offset Correction, and RCRF
    dfr(1:704) = rffe(df,ft,cas,cau,cef);
    % Shift left receive buffer data by one recovered frame length (704)
    rb(1:2112) = rb(705:2816);
    % Add this recovered frame to end (last 704 samples) of receive buffer
    rb(2113:2816) = dfr(1:704);
    if (st==uint8(131))     %prm.DRxStateRxSearchPreamble
        % Detect Preamble: Updates Synchronization Delay to Location of Max
        % Correlation with Expected Preamble; when correlation is above a
        % threshold, it updates DRx State to "DecodeHeader"
        [flt,ips] = preambleDet(rb);
        if (flt)
            % If detected PLCP Preamble, set flag #1: fdp
            flg(1,1) = logical(true(1));
            % Pass back this Synch Delay value in Flagged Data, dfl
            dfl = uint16(ips);
            % Add 1 USRP frame size to ips to get i1s: idx of 1st sample in frame
            i1s = ips + uint16(704);
            % Decode SYNC Data (for persistent vars in ddd function)
            dfr(1:704)  = rb(ips:(ips+uint16(703)));
            ddd(dfr,ft);
            dfr(1:704)  = rb(i1s:(i1s+uint16(703)));
            dld(1:64)   = ddd(dfr,ft);
            st  = uint8(132); %prm.DRxStateRxDecodeHeader;
        end
    else
        % Prepare only the 1st 704 frame bits starting at the synch delay
        dfr(1:704)  = rb(i1s:(i1s+uint16(703)));
        % Despread, Demodulate, and Descramble Samples to make bitstream
        dfd(1:64)   = ddd(dfr,ft);
        % Combine decoded 64 bits with 64 bits from last decoded frame
        dfb(1:64)   = dld(1:64);
        dfb(65:128) = dfd(1:64);
        if (st==uint8(132)) %prm.DRxStateRxDecodeHeader
            chf = chf+uint8(1);
            if (chf==uint8(1))
                i1b = uint8(65);
                % Lvl 3 Fine SFD Correlation: Find exact PLCP SFD start
                if ~isequal(dfb(i1b:(i1b+15)),[0;0;0;0;0;1;0;1;1;1;0;0;1;1;1;1])
                    fprintf('SFD_SFD');
                    % If demodulated sequence is not the same as scrambled Sync,
                    % perform a fine-tuned Correlation to find the index at
                    % which data is closest to start of sequence & readjust sd
                    iab(1:113) = (i1b-64):(i1b+48);
                    for ib = 1:113
%                         crm(1:2,1:2) = abs(corrcoef(dfb(iab(ib):(iab(ib)+15)), ...
%                             [0;0;0;0;0;1;0;1;1;1;0;0;1;1;1;1]));
%                         cra(ib) = crm(2,1);
                        cra(ib) = isequal(dfb(iab(ib):(iab(ib)+15)), ...
                            [0;0;0;0;0;1;0;1;1;1;0;0;1;1;1;1]);
                        
                    end % FOR SDI=1:WINLEN
                    [mcra,imb] = max(cra);
                    i1b = iab(imb);
%                     fprintf('Start of PLCP Header found!\n');
%                     fprintf(1,'@%5.2f: Read PHY Header:\n',toc);
%                     fprintf(1,'%d ',dfb);
%                     fprintf(1,'\n');
                end
                if (i1b<=uint8(65))
                    flg(1,2) = logical(true(1));
                    % Get MPDU (MAC Hdr+Payload+FCS) Length from PLCP Header
                    nmb = uint16(bi2de(dfb((i1b+32):(i1b+47)).'));
                    % Pass back this Payload length value in dfl
                    dfl = uint16(nmb);
                    % Check CRC in PLCP Header
                    [~,flt] = step(hcd, dfb((i1b+16):(i1b+63)));
                    if (flt)
                        % If CRC check fails, set flag #3: fec to true
                        flg(1,3) = logical(true(1)); % **********************************Rameez set this to false to debug. Set back to true when debugging over!!!!!!!!!!!!!!!
                        % Use default MPDU length: 16,192 bits
                        nmb = uint16(16192); dfl = nmb;
                    end
                else
                    % If index of 1st bit>65, wait until next USRP frame is
                    % decoded, then take
                    chf = chf-uint8(1);
                end
                % Calculate number of Payload Frames from MPDU length
                npf = ceil((nmb-64)/64);
            elseif (chf==uint8(2)) %prm.NumHeaderFrames
%                 Process frame control in MAC Header
%                 	if isequal(dfb(i1b:(i1b+7),1),[0;0;1;0;0;0;0;0])||isequal(dfb(i1b:(i1b+7),1),[1;1;1;1;1;1;1;1])
                fprintf(1,'Frame control:');%%%%************Checking frame control at DRx
                fprintf(1,'%d',dfb(i1b:(i1b+7),1));
                fprintf(1,'\n');
                if 1% Pass back all MAC bits, Header+Payload+FCS
                    rbs(1:64) = dfb(i1b:(i1b+63));
                    nrb = uint16(64);
                    % Get Number in Sequence of 802.11b Frame from MAC Header
                    n8f = uint16(bi2de(dfb((i1b+8):(i1b+15)).'));
                    % Set flag #4: fmh true when MAC Header is found
                    flg(1,4) = logical(true(1));
                    % Pass back Sequence Number in Flagged Data, dfl
                    dfl = uint16(n8f);
                    faf=logical(true(1));
                    chf = uint8(0);
                    st  = uint8(111); %prm.DRxStateRxGetPayload
                else
                    % Set flag #6: ffc true when MAC Frame Control ~DATA
                    flg(1,6) = logical(true(1));
                    % Send back the Frame Control Received in dfl
                    dfl = uint16(bi2de(dfb(i1b:(i1b+7),1).'));
                    % Return to Search for Preamble
                    sr  = uint8(211); %prm.DRxStateRxSearchPreamble
                    % Reset all count variables internal to function
                    chf = uint8(0);
                    cpf = uint8(0);
                    rb(1:2816) = complex(zeros(2816,1));
                end
            end % END IF CH==#
%             
%         elseif (sr==uint8(213)) %prm.DRxStateRxGetPayload
%             % Update Payload Frame Count
%             cpf = cpf+uint8(1);
%             if (cpf<npf) %prm.NumPayloadFrames
%                 % Store All Payload Bits in rbs and update bit count nrb
%                 nrb = uint16(64);
%                 rbs(1:64) = dfb(i1b:(i1b+63));
%             else  % On last payload frame for this 802.11b frame,
%                 % Calculate #bits to return from remainder after division
%                 % of #MPDU bits by 64 bits/USRPframe
%                 nrb = uint16(rem(nmb,uint16(64)));
%                 if (nrb==uint16(0)), nrb=uint16(64); end
%                 % Pass back all bits, even FCS used to verify no error
%                 rbs(uint8(1):uint8(nrb)) = dfb(i1b:(i1b+uint8(nrb)-uint8(1)));
%                 % Set flag #5 true to signify all payload data recovered
%                 flg(1,5) = logical(true(1));
%                 % Pass back total #payload frames in flagged data, dfl
%                 dfl = uint16(npf);
%                 % Change Major State from Rx DATA to Tx ACK
%                 sr = uint8(220); %prm.DRxStateTxACKSendACK
%                 % Reset all count variables internal to function
%                 cpf = uint8(0);
%                 rb(1:2816) = complex(zeros(2816,1));
%             end
        end % END IF SR==#
        % Store bits from this frame for use in next frame's processing
        dld(1:64) = dfd(1:64);
    end % END IF SR==211U
end % END IF FT
end % END FUNCTION DRX_1RECEIVEDATA

function st = dtx_1DetectEnergy(st)
% DTX_1DETECTENERGY Wait DIFS between rx of ACK and tx of next DATA frame
% persistent cd;
% persistent nd;
% if isempty(cd), cd = uint8(0); end
% if isempty(nd), nd = uint8(10); end
% cd = cd + uint8(1);
% if (cd>=nd)

%%%*********!!!!!Added 3rd June '15**********!!!!!
global hrx;

%Parameter Settings
%DIFS = 5 millisec for each Frame
DIFS=5e-3;
%Freeze Time
tfreeze=2e-3;
%Random Backoff time
%to scale up when rand(1)~0
trb = 0.7692*(rand(1)+0.3)*5e-3;

%Energy Threshold to be set using AGC's output
%Fixed for now
Energy_Threshold=100;

%Frame Ready; Start Timer for DIFS
fprintf('Entering DIFS state..\n')

tic; t = 0;
DIFSFlag = false;

%Wait for DIFS
while t < DIFS
    t=toc;
    %         disp(toc)
    % aip: IP Address for USRP attached to this machine as a 3-Digit uint8
    %      (as of 2/19/15, valid values for N210's in Lab are 102, 103, or 202)
    aip = getipa();
    % hft: Function Handle to transceive() function for this IP Address
    trx = eval(sprintf('@transceive%3d_mex',aip));
    % ft:  Terminal Flag to release System objects
    ft  = logical(false(1));
    % db:  Blank Data: For putting on Transmit Buffer while in a Rx Major State
    db  = complex(zeros(1408,1));
    df = trx(db,ft);
    if (sum(abs(df).^2)> Energy_Threshold)
        fprintf('Energy detected in DIFS state, Backing off!!\n')
        DIFSFlag = true;
        t1=0; tic;
        while t1 <= tfreeze
            t1=toc;
        end
        tic; t = 0;
        DIFSFlag = false;
    end
end
fprintf('...DIFS ends.\n')

%Reset Timer for Random Backoff
fprintf('Entering Random Backoff state..\n')
tic; t = 0;
BackoffFlag = false;

%Random Backoff
tstop_rb = 0; %Backoff epoch
while t < trb
    t=toc;
    %         disp(toc)
    % db:  Blank Data: For putting on Transmit Buffer while in a Rx Major State
    db  = complex(zeros(1408,1));
    df = trx(db,ft);
    if (sum(abs(df).^2)> Energy_Threshold)
        fprintf('Energy detected in Random Backoff state, Backing off!!\n')
        tstop_rb=toc;
        BackoffFlag = true;
        t2=0; tic;
        while t2 <= tfreeze
            t2=toc;
        end
        tic; t=0;
        trb=trb-tstop_rb;
        BackoffFlag = false;
    end
end
fprintf('...Random Backoff ends.\n')

st = uint8(121); %prm.DTxStateTransmitHeader;
%     cd = uint8(0);
% end % END IF CD==DIFS
end % End Function DTX_1ENERGYDET
