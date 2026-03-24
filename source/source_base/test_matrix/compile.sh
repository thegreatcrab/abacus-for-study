#!/bin/bash

# Script to compile Matrix test program

echo "Compiling Matrix test program..."

# Compiler settings
CXX=g++
CXXFLAGS="-std=c++11 -Wall -Wextra -I../ -D__NORMAL"

# Source files
SRC_FILES="main.cpp ../matrix.cpp ../timer.cpp"

# Output executable
OUTPUT="matrix_test"

# Compile command
$CXX $CXXFLAGS $SRC_FILES -o $OUTPUT

if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    echo "Run the test program with: ./$OUTPUT"
else
    echo "Compilation failed!"
    exit 1
fi
