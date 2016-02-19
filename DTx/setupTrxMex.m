% Setup Script for trx MEX file.
% run to generate proper MEX file with corresponding IP address

[ipa, ipString] = getipa;

codegen transceive -args {complex(zeros(1408,1)), ipString, true,txGain,rxGain,centerFreqTx,centerFreqRx,intFactor,decFactor,0}
