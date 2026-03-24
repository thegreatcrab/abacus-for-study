#!/bin/bash

# Script to compile realArray test program

echo "Compiling realArray test program..."

# Compiler settings
CXX=g++
CXXFLAGS="-std=c++11 -Wall -Wextra -I../"

# Source files
SRC_FILES="main.cpp ../realarray.cpp"

# Output executable
OUTPUT="realarray_test"

# Compile command
$CXX $CXXFLAGS $SRC_FILES -o $OUTPUT

if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    echo "Run the test program with: ./$OUTPUT"
else
    echo "Compilation failed!"
    exit 1
fi
