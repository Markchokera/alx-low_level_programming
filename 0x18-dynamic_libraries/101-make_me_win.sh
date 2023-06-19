#!/bin/bash
cp /path/to/your/custom_library.so .
export LD_PRELOAD=./custom_library.so
