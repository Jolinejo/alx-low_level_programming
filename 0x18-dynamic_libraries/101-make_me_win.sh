#!/bin/bash
gcc -fpic -shared printf.c -o printf.so
LD_PRELOAD=./printf.so
