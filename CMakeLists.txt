cmake_minimum_required(VERSION 3.24)
project(queue C)

set(CMAKE_C_STANDARD 23)

add_executable(queue main.c book.c book.h queue.c queue.h)
