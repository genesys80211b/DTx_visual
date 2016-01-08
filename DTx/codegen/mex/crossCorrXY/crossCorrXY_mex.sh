MATLAB="/usr/local/MATLAB/R2015b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ram/.matlab/R2015b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for crossCorrXY" > crossCorrXY_mex.mki
echo "CC=$CC" >> crossCorrXY_mex.mki
echo "CFLAGS=$CFLAGS" >> crossCorrXY_mex.mki
echo "CLIBS=$CLIBS" >> crossCorrXY_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> crossCorrXY_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> crossCorrXY_mex.mki
echo "CXX=$CXX" >> crossCorrXY_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> crossCorrXY_mex.mki
echo "CXXLIBS=$CXXLIBS" >> crossCorrXY_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> crossCorrXY_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> crossCorrXY_mex.mki
echo "LD=$LD" >> crossCorrXY_mex.mki
echo "LDFLAGS=$LDFLAGS" >> crossCorrXY_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> crossCorrXY_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> crossCorrXY_mex.mki
echo "Arch=$Arch" >> crossCorrXY_mex.mki
echo OMPFLAGS= >> crossCorrXY_mex.mki
echo OMPLINKFLAGS= >> crossCorrXY_mex.mki
echo "EMC_COMPILER=gcc" >> crossCorrXY_mex.mki
echo "EMC_CONFIG=optim" >> crossCorrXY_mex.mki
"/usr/local/MATLAB/R2015b/bin/glnxa64/gmake" -B -f crossCorrXY_mex.mk
