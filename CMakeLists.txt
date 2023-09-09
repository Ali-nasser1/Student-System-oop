cmake_minimum_required(VERSION 3.24)
project(Student_System_oop)

set(CMAKE_CXX_STANDARD 14)

add_executable(Student_System_oop
        model/BaseEntity.cpp
        model/Student.cpp
        model/Teacher.cpp
        start.cpp)
