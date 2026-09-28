# set the min required version
cmake_minimum_required(VERSION 3.10)

# name the project and specify he programming language
project(MemPoolPractice LANGUAGES CXX)

# tell CMake to use c++ 17 (optional but required)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#list of  .cpp file. .h can be left out 
add_executable(mem_pool
		mem_pool_example.cpp
		macros.h
		mem_pool.h
)

