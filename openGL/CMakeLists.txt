cmake_minimum_required(VERSION 3.20)
project(openGL)

set(CMAKE_CXX_STANDARD 14)

add_executable(openGL
        GLbasics/main.cpp GLbasics/opengl_tests.cpp)
