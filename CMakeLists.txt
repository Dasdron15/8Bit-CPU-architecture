cmake_minimum_required(VERSION 3.10)
project(VirtualMachine)

set(CMAKE_CXX_STANDARD 17)

add_executable(vm src/main.cpp src/cpu.cpp)