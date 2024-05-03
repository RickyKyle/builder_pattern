cmake_minimum_required(VERSION 3.22)
project(builder_pattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(builder_pattern main.cpp
                               house.cpp
                               house_director.cpp
                               glass_house_builder.cpp
                               brick_house_builder.cpp)
