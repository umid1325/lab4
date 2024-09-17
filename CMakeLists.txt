cmake_minimum_required(VERSION 3.29)
project(lab4)

set(CMAKE_C_STANDARD 11)
set(SOURCE_FILES ./main.cpp
        main.cpp
        example1.cpp
        cmake-build-debug/example2.cpp
        problem4.cpp
        cmake-build-debug/problem5.cpp
        problem6.cpp
        problem7.cpp
        problem8.cpp
        problem9.cpp
        problem10.cpp
        problem11.cpp)

include_directories(.)
add_executable(simple_example ${SOURCE_FILES})
add_executable(example1 example1.cpp)
add_executable(example2 cmake-build-debug/example2.cpp)
add_executable(problem4 problem4.cpp)
add_executable(problem5 cmake-build-debug/problem5.cpp)
add_executable(problem6 problem6.cpp)
add_executable(problem7 problem7.cpp)
add_executable(problem8 problem8.cpp)
add_executable(problem9 problem9.cpp)
add_executable(problem10 problem10.cpp)
add_executable(problem11 problem11.cpp)
