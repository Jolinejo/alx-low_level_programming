#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/Jolinejo/alx-low_level_programming/master/0x18-dynamic_libraries/printf.so
LD_PRELOAD=/tmp/printf.so
