#!/bin/bash

directory="."  
c_files=$(find "$directory" -type f -name "*.c")
gcc -c $c_files
ar rcs liball.a *.o
rm -f *.o
ar -t liball.a

