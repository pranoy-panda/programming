cmake_minimum_required(VERSION 3.4)

project(compilation_process)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS -std=c++14)

add_executable(
	target
	src/main.c
	src/data_structures.c
	src/algorithms.c
)



