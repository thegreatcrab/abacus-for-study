#!/bin/bash

# Script to compile ComplexArray test program

echo "Compiling ComplexArray test program..."

# Compiler settings
CXX=g++
CXXFLAGS="-std=c++11 -Wall -Wextra -I../"

# Source files
SRC_FILES="main.cpp ../complexarray.cpp"

# Output executable
OUTPUT="complexarray_test"

# Compile command
$CXX $CXXFLAGS $SRC_FILES -o $OUTPUT

if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    echo "Run the test program with: ./$OUTPUT"
else
    echo "Compilation failed!"
    exit 1
fi
