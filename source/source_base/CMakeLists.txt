cmake_minimum_required(VERSION 3.10)

project(abacus-mini LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add define for normal implementation (avoid BlasConnector)
add_definitions(-D__NORMAL)

# Add all source files
set(SOURCE_FILES
    main.cpp
    intarray.cpp
    complexarray.cpp
    matrix.cpp
    matrix3.cpp
    complexmatrix.cpp
    timer.cpp
)

# Add all header files (for IDE support)
set(HEADER_FILES
    intarray.h
    complexarray.h
    realarray.h
    ndarray.h
    matrix.h
    matrix3.h
    complexmatrix.h
    vector3.h
    formatter.h
    timer.h
    timer_wrapper.h
)

# Add executable
add_executable(abacus-mini ${SOURCE_FILES} ${HEADER_FILES})

# Set output directory
set_target_properties(abacus-mini PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
