#!/bin/bash
gcc -c *.c
gcc -fPIC -shared *.o -o liball.so
