export ILCSOFT=/opt/ilcsoft/v01-19-04

# -------------------------------------------------------------------- ---

# ---  Use the same compiler and python as used for the installation   ---

# -------------------------------------------------------------------- ---
export PATH=/usr/local/bin:/usr/bin:${PATH}
export LD_LIBRARY_PATH=/usr/local/lib64:/usr/local/lib:/usr/lib:${LD_LIBRARY_PATH}

export CXX=g++
export CC=gcc


#--------------------------------------------------------------------------------
#     LCCD
#--------------------------------------------------------------------------------
export LCCD="/opt/ilcsoft/v01-19-04/lccd/v01-04"


#--------------------------------------------------------------------------------
#     CondDBMySQL
#--------------------------------------------------------------------------------
export COND_DB_DEBUGLOG="/dev/stdout"
export CondDBMySQL="/opt/ilcsoft/v01-19-04/CondDBMySQL/CondDBMySQL_ILC-0-9-6"
export LD_LIBRARY_PATH="$CondDBMySQL/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     LCIO
#--------------------------------------------------------------------------------
export LCIO="/opt/ilcsoft/v01-19-04/lcio/v02-09"
export PYTHONPATH="$LCIO/python:$LCIO/python/examples:$PYTHONPATH"
export PATH="$LCIO/tools:$LCIO/bin:$PATH"
export LD_LIBRARY_PATH="$LCIO/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     ROOT
#--------------------------------------------------------------------------------
export ROOTSYS="/opt/ilcsoft/v01-19-04/root/6.08.02"
export PYTHONPATH="$ROOTSYS/lib:$PYTHONPATH"
export PATH="$ROOTSYS/bin:$PATH"
export LD_LIBRARY_PATH="$ROOTSYS/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     Marlin
#--------------------------------------------------------------------------------
export MARLIN="/opt/ilcsoft/v01-19-04/Marlin/v01-12"
export PATH="$MARLIN/bin:$PATH"
export MARLIN_DLL="/opt/ilcsoft/v01-19-04/MarlinDD4hep/v00-05/lib/libMarlinDD4hep.so:/opt/ilcsoft/v01-19-04/DDMarlinPandora/v00-07/lib/libDDMarlinPandora.so:/opt/ilcsoft/v01-19-04/MarlinReco/v01-19-01/lib/libMarlinReco.so:/opt/ilcsoft/v01-19-04/PandoraAnalysis/v01-02-01/lib/libPandoraAnalysis.so:/opt/ilcsoft/v01-19-04/LCFIVertex/v00-07-04/lib/libLCFIVertexProcessors.so:/opt/ilcsoft/v01-19-04/CEDViewer/v01-14-01/lib/libCEDViewer.so:/opt/ilcsoft/v01-19-04/Overlay/v00-18/lib/libOverlay.so:/opt/ilcsoft/v01-19-04/MarlinFastJet/v00-05/lib/libMarlinFastJet.so:/opt/ilcsoft/v01-19-04/LCTuple/v01-08/lib/libLCTuple.so:/opt/ilcsoft/v01-19-04/MarlinKinfit/v00-05/lib/libMarlinKinfit.so:/opt/ilcsoft/v01-19-04/MarlinTrkProcessors/v02-08-01/lib/libMarlinTrkProcessors.so:/opt/ilcsoft/v01-19-04/MarlinKinfitProcessors/v00-03/lib/libMarlinKinfitProcessors.so:/opt/ilcsoft/v01-19-04/ILDPerformance/v01-03/lib/libILDPerformance.so:/opt/ilcsoft/v01-19-04/Clupatra/v01-01/lib/libClupatra.so:/opt/ilcsoft/v01-19-04/Physsim/v00-04/lib/libPhyssim.so:/opt/ilcsoft/v01-19-04/LCFIPlus/v00-06-06/lib/libLCFIPlus.so:/opt/ilcsoft/v01-19-04/ForwardTracking/v01-12/lib/libForwardTracking.so:/opt/ilcsoft/v01-19-04/ConformalTracking/v01-03/lib/libConformalTracking.so:/opt/ilcsoft/v01-19-04/LICH/v00-01/lib/libLICH.so:/opt/ilcsoft/v01-19-04/MarlinTPC/v01-03/lib/libMarlinTPC.so:/opt/ilcsoft/v01-19-04/Garlic/v3.0.4/lib/libGarlic.so:$MARLIN_DLL"
export MARLIN_DLL="$HOME/work/MonoPhoton/myProcessors/lib/libmymarlin.so:$MARLIN_DLL"


#--------------------------------------------------------------------------------
#     CLHEP
#--------------------------------------------------------------------------------
export CLHEP="/opt/ilcsoft/v01-19-04/CLHEP/2.3.1.1"
export CLHEP_BASE_DIR="$CLHEP"
export CLHEP_INCLUDE_DIR="$CLHEP/include"
export PATH="$CLHEP_BASE_DIR/bin:$PATH"
export LD_LIBRARY_PATH="$CLHEP_BASE_DIR/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     RAIDA
#--------------------------------------------------------------------------------
export RAIDA_HOME="/opt/ilcsoft/v01-19-04/RAIDA/v01-08"
export PATH="$RAIDA_HOME/bin:$PATH"


#--------------------------------------------------------------------------------
#     GEAR
#--------------------------------------------------------------------------------
export GEAR="/opt/ilcsoft/v01-19-04/gear/v01-07"
export PATH="$GEAR/tools:$GEAR/bin:$PATH"
export LD_LIBRARY_PATH="$GEAR/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     DD4hep
#--------------------------------------------------------------------------------
export DD4hep_ROOT="/opt/ilcsoft/v01-19-04/DD4hep/v01-01-01"
export DD4hepINSTALL="/opt/ilcsoft/v01-19-04/DD4hep/v01-01-01"
export DD4HEP="/opt/ilcsoft/v01-19-04/DD4hep/v01-01-01"
export DD4hep_DIR="/opt/ilcsoft/v01-19-04/DD4hep/v01-01-01"
export PYTHONPATH="$DD4HEP/python:$DD4HEP/DDCore/python:$PYTHONPATH"
export PATH="$DD4HEP/bin:$PATH"
export LD_LIBRARY_PATH="$DD4HEP/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     Geant4
#--------------------------------------------------------------------------------
export G4INSTALL="/opt/ilcsoft/v01-19-04/geant4/10.02.p02"
export G4ENV_INIT="$G4INSTALL/bin/geant4.sh"
export G4SYSTEM="Linux-g++"


#--------------------------------------------------------------------------------
#     QT
#--------------------------------------------------------------------------------
export QTDIR="/opt/ilcsoft/v01-19-04/QT/4.7.4"
export QMAKESPEC="$QTDIR/mkspecs/linux-g++"
export PATH="$QTDIR/bin:$PATH"
export LD_LIBRARY_PATH="$QTDIR/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     XercesC
#--------------------------------------------------------------------------------
export XercesC_HOME="/opt/ilcsoft/v01-19-04/xercesc/3.2.0"
export PATH="$XercesC_HOME/bin:$PATH"
export LD_LIBRARY_PATH="$XercesC_HOME/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     Boost
#--------------------------------------------------------------------------------
export BOOST_ROOT="/usr"


#--------------------------------------------------------------------------------
#     KalTest
#--------------------------------------------------------------------------------
export KALTEST="/opt/ilcsoft/v01-19-04/KalTest/v02-03"
export LD_LIBRARY_PATH="$KALTEST/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     aidaTT
#--------------------------------------------------------------------------------
export AIDATT="/opt/ilcsoft/v01-19-04/aidaTT/v00-07"
export PATH="$AIDATT/bin:$PATH"
export LD_LIBRARY_PATH="$AIDATT/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     GSL
#--------------------------------------------------------------------------------
export GSL_HOME="/opt/ilcsoft/v01-19-04/gsl/2.1"
export PATH="$GSL_HOME/bin:$PATH"
export LD_LIBRARY_PATH="$GSL_HOME/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     GBL
#--------------------------------------------------------------------------------
export GBL="/opt/ilcsoft/v01-19-04/GBL/V02-01-01"
export LD_LIBRARY_PATH="$GBL/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     MarlinUtil
#--------------------------------------------------------------------------------
export LD_LIBRARY_PATH="/opt/ilcsoft/v01-19-04/MarlinUtil/v01-14/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     CED
#--------------------------------------------------------------------------------
export PATH="/opt/ilcsoft/v01-19-04/CED/v01-09-02/bin:$PATH"
export LD_LIBRARY_PATH="/opt/ilcsoft/v01-19-04/CED/v01-09-02/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     PandoraPFANew
#--------------------------------------------------------------------------------
export PANDORAPFANEW="/opt/ilcsoft/v01-19-04/PandoraPFANew/v03-01-02"
export LD_LIBRARY_PATH="$PANDORAPFANEW/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     PandoraAnalysis
#--------------------------------------------------------------------------------
export PANDORA_ANALYSIS_DIR="/opt/ilcsoft/v01-19-04/PandoraAnalysis/v01-02-01"
export PATH="$PANDORA_ANALYSIS_DIR/bin:$PATH"
export LD_LIBRARY_PATH="$PANDORA_ANALYSIS_DIR/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     LCFIVertex
#--------------------------------------------------------------------------------
export LD_LIBRARY_PATH="/opt/ilcsoft/v01-19-04/LCFIVertex/v00-07-04/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     CEDViewer
#--------------------------------------------------------------------------------
export PATH="/opt/ilcsoft/v01-19-04/CEDViewer/v01-14-01/bin:$PATH"
export LD_LIBRARY_PATH="/opt/ilcsoft/v01-19-04/CEDViewer/v01-14-01/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     FastJet
#--------------------------------------------------------------------------------
export FastJet_HOME="/opt/ilcsoft/v01-19-04/FastJet/3.2.0"
export PATH="$FastJet_HOME/bin:$PATH"
export LD_LIBRARY_PATH="$FastJet_HOME/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     MarlinTPC
#--------------------------------------------------------------------------------
export MARLINTPC="/opt/ilcsoft/v01-19-04/MarlinTPC/v01-03"
export PATH="$MARLINTPC/bin:$PATH"


#--------------------------------------------------------------------------------
#     lcgeo
#--------------------------------------------------------------------------------
export lcgeo_DIR="/opt/ilcsoft/v01-19-04/lcgeo/v00-13-04"
export PYTHONPATH="$lcgeo_DIR/lib/python:$PYTHONPATH"
export PATH="$lcgeo_DIR/bin:$PATH"
export LD_LIBRARY_PATH="$lcgeo_DIR/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     DD4hepExamples
#--------------------------------------------------------------------------------
export DD4hepExamples="/opt/ilcsoft/v01-19-04/DD4hepExamples/v01-01-01"
export PATH="$DD4hepExamples/bin:$PATH"
export LD_LIBRARY_PATH="$DD4hepExamples/lib:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     MySQL
#--------------------------------------------------------------------------------
export MYSQL_HOME="/usr"
export MYSQL_LIBDIR="$MYSQL_HOME/lib64/mysql"
export MYSQL_PATH="$MYSQL_HOME"
export MYSQL="$MYSQL_HOME"
export LD_LIBRARY_PATH="$MYSQL_HOME/lib64/mysql:$MYSQL_HOME/lib/mysql:$LD_LIBRARY_PATH"


#--------------------------------------------------------------------------------
#     CMake
#--------------------------------------------------------------------------------
export PATH="/opt/ilcsoft/v01-19-04/CMake/3.6.3/bin:$PATH"


#--------------------------------------------------------------------------------
#     ILCUTIL
#--------------------------------------------------------------------------------
export ilcutil="/opt/ilcsoft/v01-19-04/ilcutil/v01-03"
export LD_LIBRARY_PATH="$ilcutil/lib:$LD_LIBRARY_PATH"

# --- source GEANT4 INIT script ---
test -r ${G4ENV_INIT} && { cd $(dirname ${G4ENV_INIT}) ; . ./$(basename ${G4ENV_INIT}) ; cd $OLDPWD ; }

export MARLIN_DLL="/opt/ilcsoft/v01-19-04/FastJet/3.2.0/lib/libsiscone.so:/opt/ilcsoft/v01-19-04/FastJet/3.2.0/lib/libsiscone_spherical.so:$MARLIN_DLL"
