cmake_minimum_required(VERSION 4.1)
project(C_Learning C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Learning
        Aula23_2DArray.c
)
target_link_libraries(C_Learning m)