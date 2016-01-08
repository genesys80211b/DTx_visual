% script to run experiments

i=0;
save icounter.mat i;


fix(clock)

for j=1:5

load icounter.mat

global l retransmit_counter packets_sent packet_number packet_array ...
    txGain rxGain centerFreqTx centerFreqRx decFactor 

switch i
        case 0
        diary('experiment_diary_gain30.m')
        %packet counters
        retransmit_counter= 0;
        packets_sent = 0;
        packet_number = 0;
        %mex parameters
        decFactor = 500;
        txGain = 30
        rxGain = 15
        centerFreqTx = 1.284e9
        centerFreqRx = 1.284e9
        %begin experiment
        start=clock;
        dtx_PHY_Layer_noExit
        stop=clock;
        %calculations
        b=packet_array(packet_array>1);
        c=b-1;
        p=sum(c);
        perror=p/packets_sent;
        totaltime=etime(stop,start);
        throughput=l/totaltime;
        latency=totaltime/packets_sent;
        numRetransmits=retransmit_counter;
        packetError=numRetransmits/packets_sent;
        %save and exit
        timestamp=clock;
        save gain30.mat
        diary off

%     case 1
%         diary('experiment_diary_gain25.m')
%         %packet counters
%         retransmit_counter= 0;
%         packets_sent = 0;
%         packet_number = 0;
%         %mex parameters
%         decFactor = 500;
%         txGain = 25
%         rxGain = 15
%         centerFreqTx = 1.285e9
%         centerFreqRx = 1.385e9
%         %begin experiment
%         start=clock;
%         dtx_PHY_Layer
%         stop=clock;
%         %calculations
%         b=packet_array(packet_array>1);
%         c=b-1;
%         p=sum(c);
%         perror=p/packets_sent;
%         totaltime=etime(stop,start);
%         throughput=l/totaltime;
%         latency=totaltime/packets_sent;
%         numRetransmits=retransmit_counter;
%         packetError=numRetransmits/packets_sent;
%         %save and exit
%         timestamp=clock;
%         save gain25.mat
%         diary off
% 
%     case 2
%         diary('experiment_diary_gain20.m')
%         %packet counters
%         retransmit_counter= 0;
%         packets_sent = 0;
%         packet_number = 0;
%         %mex parameters
%         decFactor = 500;
%         txGain = 20
%         rxGain = 15
%         centerFreqTx = 1.285e9
%         centerFreqRx = 1.385e9
%         %begin experiment
%         start=clock;
%         dtx_PHY_Layer
%         stop=clock;
%         %calculations
%         b=packet_array(packet_array>1);
%         c=b-1;
%         p=sum(c);
%         perror=p/packets_sent;
%         totaltime=etime(stop,start);
%         throughput=l/totaltime;
%         latency=totaltime/packets_sent;
%         numRetransmits=retransmit_counter;
%         packetError=numRetransmits/packets_sent;
%         %save and exit
%         timestamp=clock;
%         save gain20.mat
%         diary off
% 
%     case 3
%         diary('experiment_diary_gain15.m')
%         %packet counters
%         retransmit_counter= 0;
%         packets_sent = 0;
%         packet_number = 0;
%         %mex parameters
%         decFactor = 500;
%         txGain = 15
%         rxGain = 15
%         centerFreqTx = 1.285e9
%         centerFreqRx = 1.385e9
%         %begin experiment
%         start=clock;
%         dtx_PHY_Layer
%         stop=clock;
%         %calculations
%         b=packet_array(packet_array>1);
%         c=b-1;
%         p=sum(c);
%         perror=p/packets_sent;
%         totaltime=etime(stop,start);
%         throughput=l/totaltime;
%         latency=totaltime/packets_sent;
%         numRetransmits=retransmit_counter;
%         packetError=numRetransmits/packets_sent;
%         %save and exit
%         timestamp=clock;
%         save gain15.mat
%         diary off
%         
%         case 4
%         diary('experiment_diary_gain10.m')
%         %packet counters
%         retransmit_counter= 0;
%         packets_sent = 0;
%         packet_number = 0;
%         %mex parameters
%         decFactor = 500;
%         txGain = 10;
%         rxGain = 15;
%         centerFreqTx = 1.285e9;
%         centerFreqRx = 1.385e9;
%         %begin experiment
%         start=clock;
%         dtx_PHY_Layer
%         stop=clock;
%         %calculations
%         b=packet_array(packet_array>1);
%         c=b-1;
%         p=sum(c);
%         perror=p/packets_sent;
%         totaltime=etime(stop,start);
%         throughput=l/totaltime;
%         latency=totaltime/packets_sent;
%         numRetransmits=retransmit_counter;
%         packetError=numRetransmits/packets_sent;
%         %save and exit
%         timestamp=clock;
%         save gain10.mat
%         diary off
end

i=i+1;
save icounter.mat i;

clear all; close all; clear classes; clc; clear mex; findsdru

end
