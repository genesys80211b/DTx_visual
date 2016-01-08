function prm = init_v35()
% Constant Parameters
% USRP N210 Analog-to-Digital Conversion Rate: Fixed at 100 MHz
prm.ADCRate             = 100e6;
prm.DRxIPAddress        = '192.168.20.2';
% DRA: Last two octets of binary DRx IP Address
prm.DRA                 = [de2bi(20,8),de2bi(2,8)]';
prm.DTxIPAddress        = '192.168.10.2';
% DTA: Last two octets of binary DTx IP Address
prm.DTA                 = [de2bi(10,8),de2bi(2,8)]';
prm.DurationID          = zeros(8,1);
prm.FrameControlPV      = [0;0]; 
prm.FrameControlSTACK   = [1;1;0;1]; 
prm.FrameControlSTDATA  = [0;0;0;0]; 
prm.FrameControlTypeCtrl= [0;1]; 
prm.FrameControlTypeData= [1;0]; 
prm.NumBitsPerOctet     = 8;
% Number of Octets in MAC Frame Check Sequence (FCS): Fixed at 4 (32-bit CRC)
prm.NumFCSOctets        = 4;
% Number of Octets in MAC Header: Fixed at 8
prm.NumMACHeaderOctets  = 8;
% Number of Octets in Payload (a.k.a. MAC Body): Fixed at 2012
% Must be multiple of 8 plus 4 b/c last USRP frame is 1/2 payload, 1/2 FCS
prm.NumPayloadOctets    = 2012;
% Number of Octets in PHY Header: Fixed at 8 (for ease, this includes SFD)
prm.NumPHYHeaderOctets  = 8;
prm.NumSYNCOctets       = 16;
prm.NumSFDOctets        = 2;
prm.NumUSRPFrameOctets  = 8;
prm.SERVICE             = zeros(8, 1);
prm.SFD                 = [0;0;0;0;0;1;0;1;1;1;0;0;1;1;1;1]; 
prm.SIGNAL              = [0;1;0;1;0;0;0;0];
prm.USRPDecimation      = 500; % B/w 4 and 500 
prm.USRPInterpolation   = prm.USRPDecimation; 
% Tunable Parameters
prm.AGCDetectorMethod           = 'Rectifier';
prm.AGCLoopMethod               = 'Logarithmic';
prm.AGCMaximumGain              = 30;
prm.AGCStepSize                 = 1;
prm.AGCUpdatePeriod             = 1408;
prm.CFEAlgorithm                = 'FFT-based';
prm.CFEFrequencyResolution      = 1.0;
prm.CFEModulationOrder          = 2;
% Cyclic Redundancy Check (CRC) Parameters
prm.CRCPolynomial               = [16 12 5 0]; 
prm.CRCInitialConditions        = 1; 
prm.CRCFinalXOR                 = 1; 
prm.CRCChecksumsPerFrame        = 1;
% Designated Receiver (DRx) States
prm.DRxStateStart               = uint8(211);
prm.DRxStateRxDATA              = uint8(21);
prm.DRxStateRxSearchPreamble    = uint8(211);
prm.DRxStateRxDecodeHeader      = uint8(212);
prm.DRxStateRxGetPayload        = uint8(213);
prm.DRxStateRxGetPayloadFCS     = uint8(214);
prm.DRxStateTxACK               = uint8(22);
prm.DRxStateTxACKSendACK        = uint8(220);
prm.DRxStateDIFS                = uint8(23);
prm.DRxStateDIFSWaitDIFS        = uint8(230);
prm.DRxStateEOT                 = uint8(24);
prm.DRxStateEOTImageRecovered   = uint8(241);
prm.DRxStateEOTTimeout          = uint8(242);
% Designated Transmitter (DTx) States
prm.DTxStateStart               = uint8(121);
prm.DTxStateEnergyDet           = uint8(11);
prm.DTxStateEnergyDetDIFS       = uint8(111);
prm.DTxStateEnergyDetRandBO     = uint8(112);
prm.DTxStateEnergyDetFreeze     = uint8(113);
prm.DTxStateTransmitDATA        = uint8(12);
prm.DTxStateTransmitHeader      = uint8(121);
prm.DTxStateTransmitPayload     = uint8(122);
prm.DTxStateTransmitFCS         = uint8(123);
prm.DTxStateRxACK               = uint8(13);
prm.DTxStateRxACKSearchPLCP     = uint8(131);
prm.DTxStateRxACKDecodeHeader   = uint8(132);
prm.DTxStateEOT                 = uint8(140);
% Frame Check Sequence (FCS) CRC Parameters
prm.FCSPolynomial               = [32,26,23,22,16,12,11,10,8,7,5,4,2,1,0]; 
prm.FCSInitialConditions        = 1; 
prm.FCSFinalXOR                 = 1; 
prm.FCSChecksumsPerFrame        = 1;
% Frequency Offset Compensation (FOC) Parameters
prm.FOCPhaseOffset              = 0;
prm.FOCFrequencyOffsetSource    = 'Input port';
% Image Expected Parameters
prm.ImageExpectedDepth          = uint32(1);
prm.ImageExpectedHeight         = uint32(110);
prm.ImageExpectedWidth          = uint32(118);
prm.ImageExpectedNumHeaderBits  = uint32(24);
prm.ImageExpectedNumTotalBits   = ((prm.ImageExpectedDepth* ...
    prm.ImageExpectedHeight*prm.ImageExpectedWidth*prm.NumBitsPerOctet) ...
    +prm.ImageExpectedNumHeaderBits);
% Modulation / Demodulation Parameters
prm.ModulatorPhaseRotation      = 0;
prm.ModulatorOutputDataType     = 'double';
% Preamble Detection Parameters
prm.PreambleDetCorrThreshold    = double(0.3);
prm.PreambleDetDBWCWindow       = uint16(10);
savedDataStruct = coder.load('transceiverData.mat','ss','ds');
prm.PreambleDetScrambledSync    = savedDataStruct.ds;
prm.PreambleDetSyncSignal       = savedDataStruct.ss;
% Raised Cosine Filter (RCF) Parameters
prm.RCFDecimationFactor         = 2; 
prm.RCFDecimationOffset         = 0; 
prm.RCFFilterSpanInSymbols      = 8; 
prm.RCFGain                     = 1;
prm.RCFInputSamplesPerSymbol    = prm.RCFDecimationFactor;
prm.RCFInterpolationFactor      = prm.RCFDecimationFactor; 
prm.RCFOutputSamplesPerSymbol   = prm.RCFDecimationFactor;
prm.RCFRolloffFactor            = 0.3; 
prm.RCFShape                    = 'Square root';
% Scrambler / Descrambler Parameters
prm.ScramblerCalculationBase    = 2;
prm.ScramblerInitialConditions  = [0, 0, 0, 0, 0, 0, 0];
prm.ScramblerPolynomial         = [1, 0, 0, 0, 1, 0, 0, 1];
% Spreader / Despreader Parameters
prm.SpreadingCode               = [1; -1; 1; 1; -1; 1; 1; 1; -1; -1; -1];
prm.SpreadingRate               = 11; % length(prm.SpreadingCode)
prm.USRPCenterFrequency         = 1.85e9;
prm.USRPLOOffset                = 0;
prm.USRPRxGain                  = 35;
prm.USRPTxGain                  = 25;

% Derived Parameters
prm.FactorUpsampling    = prm.SpreadingRate*prm.RCFDecimationFactor;
prm.FrameControlACK     = [prm.FrameControlPV; prm.FrameControlTypeCtrl; ...
    prm.FrameControlSTACK];
prm.FrameControlDATA    = [prm.FrameControlPV; prm.FrameControlTypeData; ...
    prm.FrameControlSTDATA];
% Sampling Rate = ADC Rate / USRP Interpolation = 100MHz/500=200kHz
prm.Fs                  = prm.ADCRate / prm.USRPInterpolation;
% Coarse Freq Est Sampling Rate = Fs / RCF Decimation = 200kHz/2=100kHz
prm.CFESampleRate       = prm.Fs / prm.RCFDecimationFactor;
prm.FOCSampleRate       = prm.CFESampleRate;
prm.NumFCSBits          = prm.NumFCSOctets*prm.NumBitsPerOctet;
prm.NumHeaderOctets     = prm.NumPHYHeaderOctets+prm.NumMACHeaderOctets;
prm.NumHeaderBits       = prm.NumHeaderOctets*prm.NumBitsPerOctet;
prm.NumHeaderFrames     = ceil(prm.NumHeaderOctets/prm.NumUSRPFrameOctets);
prm.NumMACHeaderBits    = prm.NumMACHeaderOctets*prm.NumBitsPerOctet;
prm.NumPayloadBits      = prm.NumPayloadOctets*prm.NumBitsPerOctet;
prm.NumPayloadFrames    = ceil((prm.NumPayloadOctets-prm.NumFCSOctets)/prm.NumUSRPFrameOctets);
prm.NumPayloadFCSFrames = ceil(prm.NumFCSOctets/prm.NumUSRPFrameOctets);
prm.NumPHYHeaderBits    = prm.NumPHYHeaderOctets*prm.NumBitsPerOctet;
prm.NumSYNCBits         = prm.NumSYNCOctets*prm.NumBitsPerOctet;
prm.NumSYNCFrames       = ceil(prm.NumSYNCOctets/prm.NumUSRPFrameOctets);
prm.NumSYNCSamples      = prm.NumSYNCBits*prm.FactorUpsampling;
prm.NumSYNCSpreadBits   = prm.NumSYNCBits*prm.SpreadingRate;
prm.NumSFDBits          = prm.NumSFDOctets*prm.NumBitsPerOctet;
prm.NumUSRPFrameBits    = prm.NumUSRPFrameOctets*prm.NumBitsPerOctet;
prm.NumUSRPFrameSamples = prm.NumUSRPFrameBits*prm.FactorUpsampling;
prm.NumACKFrames        = prm.NumSYNCFrames + prm.NumHeaderFrames;
prm.NumMPDUBits         = prm.NumMACHeaderBits+prm.NumPayloadBits+prm.NumFCSBits;
% Receive Buffer Length must be twice the Preamble Length to fully detect
% the entire Preamble in one Cross-Correlation attempt
prm.ReceiveBufferLength = prm.NumSYNCSamples*2;
% Recovered Frame Length is Length of Received Data Array after Raised Cosine Receive Filter (RCRF)
prm.RecoveredFrameLength= prm.NumUSRPFrameBits*prm.SpreadingRate; %64*11=704
prm.SpreadedFrameLength = prm.RecoveredFrameLength; %64*11=704
prm.SYNC                = ones(prm.NumSYNCBits,1);    
% USRP Frame Length is Length of Data Array Retrieved Directly from USRP Rx
prm.USRPFrameLength     = prm.RecoveredFrameLength*prm.RCFDecimationFactor; %64*11*2=1408
end