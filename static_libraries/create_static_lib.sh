#!/bin/bash
# create_static_lib.sh

# Compile all .c files in the current directory
gcc -c *.c

# Create the static library liball.a from all the .o files
ar -rc liball.a *.o
