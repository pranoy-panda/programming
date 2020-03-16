cmake_minimum_required(VERSION 3.4)

project(using_cmake)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS -std=c++14)

add_executable(
	target
	src/LogMessage.cpp
	src/main.cpp
)



