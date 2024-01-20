#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Itzsammi/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
export LD-PRELOAD="$PWD/../libhack.so/
