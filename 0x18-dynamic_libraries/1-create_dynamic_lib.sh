#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c -c -fPIC
gcc -shared -o liball.so *.o
