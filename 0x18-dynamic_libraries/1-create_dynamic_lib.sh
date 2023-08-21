#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -pedantic -c -fPIC *.c
gcc -shaed -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
