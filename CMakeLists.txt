cmake_minimum_required(VERSION 3.9)
project(LearnC)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        LearnC
        main.cpp
        LeetCode/MyVector.cpp
        LeetCode/MyVector.h
        LeetCode/LeetCodeMain.cpp LeetCode/BinarySearch/main.cpp Test.cpp Test.h man.cpp man.h)