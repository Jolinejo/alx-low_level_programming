#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Jolinejo/alx-low_level_programming/master/0x18-dynamic_libraries/printf.so
export LD_PRELOAD="$PWD/../printf.so"
