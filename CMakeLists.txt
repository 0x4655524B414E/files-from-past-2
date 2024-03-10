cmake_minimum_required(VERSION 3.26)

project(midterm)

set(CMAKE_CXX_STANDARD 20)

add_executable(RUN TestWrappers.cpp Bool.h Bool.cpp Integer.h Integer.cpp PositiveInteger.h PositiveInteger.cpp Number.h)