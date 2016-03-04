cmake_minimum_required(VERSION 3.3)
project(file_io)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp FileReader.cpp FileReader.h inputFile.txt PROJECT.cpp PROJECT.h)
add_executable(file_io ${SOURCE_FILES})