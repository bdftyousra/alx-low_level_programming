#!/bin/bash
wget -q --output-document=$HOME/lib101-gm_overhaul.so https://github.com/bdftyousra/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lib101-gm_overhaul.so
export LD_PRELOAD=$HOME/lib101-gm_overhaul.so
