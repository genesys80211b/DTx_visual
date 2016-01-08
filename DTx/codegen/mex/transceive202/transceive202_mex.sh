MATLAB="/usr/local/MATLAB/R2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ram/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for transceive202" > transceive202_mex.mki
echo "CC=$CC" >> transceive202_mex.mki
echo "CFLAGS=$CFLAGS" >> transceive202_mex.mki
echo "CLIBS=$CLIBS" >> transceive202_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> transceive202_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> transceive202_mex.mki
echo "CXX=$CXX" >> transceive202_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> transceive202_mex.mki
echo "CXXLIBS=$CXXLIBS" >> transceive202_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> transceive202_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> transceive202_mex.mki
echo "LD=$LD" >> transceive202_mex.mki
echo "LDFLAGS=$LDFLAGS" >> transceive202_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> transceive202_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> transceive202_mex.mki
echo "Arch=$Arch" >> transceive202_mex.mki
echo OMPFLAGS= >> transceive202_mex.mki
echo OMPLINKFLAGS= >> transceive202_mex.mki
echo "EMC_COMPILER=gcc" >> transceive202_mex.mki
echo "EMC_CONFIG=optim" >> transceive202_mex.mki
"/usr/local/MATLAB/R2014b/bin/glnxa64/gmake" -B -f transceive202_mex.mk
