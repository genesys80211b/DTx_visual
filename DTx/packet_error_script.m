% script to run experiments
fix(clock)


txGain_all = [10,15,20,25,30,35]; 
numPayload_all = [500,1004,1500,2004];

% numRuns = size(txGain_all,2);
numRuns = size(numPayload_all,2);
%numRuns=1;

%initialize arrays of data
packetArray_all = cell(1,numRuns);
packet_number_all = zeros(1,numRuns);
packets_sent_all = zeros(1,numRuns);
packetError_all = zeros(1,numRuns);
latency_all = zeros(1,numRuns);
numRetransmits_all = zeros(1,numRuns);
i = 1;
save exp_output.mat i packetArray_all packet_number_all packets_sent_all...
    packetError_all latency_all numPayload_all txGain_all

for k=1:numRuns
    
    clear all; close all; clear classes; clc; clear mex; findsdru
    load exp_output.mat;
   
    disp(i)
    disp('Press any key!')
    pause;
    
    global l retransmit_counter packets_sent packet_number packet_array ...
    txGain rxGain centerFreqTx centerFreqRx numPayloadOctets

    diary('3node_dTx102_diffPayload.m')
    %packet counters
    retransmit_counter= 0;
    packets_sent = 0;
    packet_number = 0;
    %mex parameters
    %txGain = txGain_all(1,i);
    txGain = 30;
    rxGain = 15;
    centerFreqTx = 1.284e9;
    centerFreqRx = 1.284e9;
    numPayloadOctets = numPayload_all(1,i);
    %numPayloadOctets = 2004;
    %begin experiment
    start=clock;
    dtx_PHY_Layer_noExit
    stop=clock;
    %calculations
    b=packet_array(10:end)-1;
    p=sum(b);
    perror=p/packets_sent;
    totaltime=etime(stop,start);
    throughput=l/totaltime;
    latency=totaltime/(packets_sent-sum(packet_array(1:10)));
    numRetransmits=retransmit_counter;
    %packetError=numRetransmits/packets_sent;
    packetError = perror;
    %saving to arrays
    packetArray_all{1,i} = packet_array;
    packet_number_all(1,i) = packet_number;
    packets_sent_all(1,i) = packets_sent;
    packetError_all(1,i) = packetError;
    numPayload_all(1,i) = numPayloadOctets;
    latency_all(1,i) = latency;
    numRetransmits_all(1,i) = numRetransmits;
    
    %save and exit
    timestamp=clock;
    i = i+1;
    save exp_output.mat i packetArray_all packet_number_all...
        packets_sent_all packetError_all latency_all numPayload_all txGain_all
    diary off
    
end




