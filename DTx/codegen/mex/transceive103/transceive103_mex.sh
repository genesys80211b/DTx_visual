MATLAB="/usr/local/MATLAB/R2015b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ram/.matlab/R2015b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for transceive103" > transceive103_mex.mki
echo "CC=$CC" >> transceive103_mex.mki
echo "CFLAGS=$CFLAGS" >> transceive103_mex.mki
echo "CLIBS=$CLIBS" >> transceive103_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> transceive103_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> transceive103_mex.mki
echo "CXX=$CXX" >> transceive103_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> transceive103_mex.mki
echo "CXXLIBS=$CXXLIBS" >> transceive103_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> transceive103_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> transceive103_mex.mki
echo "LD=$LD" >> transceive103_mex.mki
echo "LDFLAGS=$LDFLAGS" >> transceive103_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> transceive103_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> transceive103_mex.mki
echo "Arch=$Arch" >> transceive103_mex.mki
echo OMPFLAGS= >> transceive103_mex.mki
echo OMPLINKFLAGS= >> transceive103_mex.mki
echo "EMC_COMPILER=gcc" >> transceive103_mex.mki
echo "EMC_CONFIG=optim" >> transceive103_mex.mki
"/usr/local/MATLAB/R2015b/bin/glnxa64/gmake" -B -f transceive103_mex.mk
