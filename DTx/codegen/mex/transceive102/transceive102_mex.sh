MATLAB="/usr/local/MATLAB/R2015b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ram/.matlab/R2015b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for transceive102" > transceive102_mex.mki
echo "CC=$CC" >> transceive102_mex.mki
echo "CFLAGS=$CFLAGS" >> transceive102_mex.mki
echo "CLIBS=$CLIBS" >> transceive102_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> transceive102_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> transceive102_mex.mki
echo "CXX=$CXX" >> transceive102_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> transceive102_mex.mki
echo "CXXLIBS=$CXXLIBS" >> transceive102_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> transceive102_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> transceive102_mex.mki
echo "LD=$LD" >> transceive102_mex.mki
echo "LDFLAGS=$LDFLAGS" >> transceive102_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> transceive102_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> transceive102_mex.mki
echo "Arch=$Arch" >> transceive102_mex.mki
echo OMPFLAGS= >> transceive102_mex.mki
echo OMPLINKFLAGS= >> transceive102_mex.mki
echo "EMC_COMPILER=gcc" >> transceive102_mex.mki
echo "EMC_CONFIG=optim" >> transceive102_mex.mki
"/usr/local/MATLAB/R2015b/bin/glnxa64/gmake" -B -f transceive102_mex.mk
