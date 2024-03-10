cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 20)

project(inheritance)

add_executable(APP_Inherit main.cpp Employee.h Employee.cpp AIEngineer.h AIEngineer.cpp)