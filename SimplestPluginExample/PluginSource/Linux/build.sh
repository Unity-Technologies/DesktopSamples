#!/bin/bash
set -e
mkdir -p build build/bin build/obj

g++ -g -c -O2 -fPIC -o build/obj/Plugin.o ../Plugin.cpp
g++ -shared -o build/bin/ASimplePlugin.so build/obj/Plugin.o
objcopy --only-keep-debug build/bin/ASimplePlugin.so build/bin/ASimplePlugin.debug
strip --strip-debug build/bin/ASimplePlugin.so
cp -t "../../Unity Project/Assets/Linux/Plugins" build/bin/ASimplePlugin.so build/bin/ASimplePlugin.debug