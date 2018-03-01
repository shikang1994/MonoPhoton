#!/bin/sh

if [ -d "$HOME/yuichi/working/MonoPhoton/myProcessors/build" ]; then
   rm -rf "$HOME/yuichi/working/MonoPhoton/myProcessors/build"
fi

mkdir "$HOME/yuichi/working/MonoPhoton/myProcessors/build"
cd "$HOME/yuichi/working/MonoPhoton/myProcessors/build/"
cmake -C $ILCSOFT/ILCSoft.cmake ..
make
make install
