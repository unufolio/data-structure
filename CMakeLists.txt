cmake_minimum_required(VERSION 3.17)
project(data_structure)

set(CMAKE_CXX_STANDARD 20)

add_executable(data_structure main.cpp list/List.h bag/Bag.cpp bag/Bag.h list/ArrayList.cpp list/ArrayList.h list/List.cpp)