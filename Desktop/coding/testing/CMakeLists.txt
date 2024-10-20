cmake_minimum_required(VERSION 3.0)

set(This Example)

# Use ${This} for project name
project(${This} C CXX)

# Set C and C++ standards
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Enable testing framework
enable_testing()

# Add GoogleTest
add_subdirectory(googletest)

# Define header and source files
set(Headers
    Example.hpp
)
set(Sources
    Example.cpp
)

# Create a static library from the source files
add_library(${This} STATIC ${Sources} ${Headers})

# Add test subdirectory
add_subdirectory(test)
