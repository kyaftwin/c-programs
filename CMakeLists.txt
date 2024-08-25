cmake_minimum_required(VERSION 3.30.0)
project(int_to_string_example)

set(CMAKE_C_STANDARD 23)

add_executable(main main.c int_to_string.c)
