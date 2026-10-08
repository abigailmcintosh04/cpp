cmake_minimum_required(VERSION 3.20)

# Project name and language
project(section2 LANGUAGES CXX)

# Require modern C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Generates compile_commands.json for clangd

# Define the executable and its source files
add_executable(app
    src/section2.cpp
    src/second_file.cpp
)

# Tell the compiler where to find headers (#include "utils.h")
target_include_directories(app PRIVATE include)

# Turn on useful compiler warnings
target_compile_options(app PRIVATE -Wall -Wextra -Wpedantic)
