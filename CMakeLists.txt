cmake_minimum_required(VERSION 3.17)
project(poo2_unit1_week_1_2020_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(poo2_unit1_week_1_2020_2
        main.cpp
        number.h number.cpp
        search_odds.h search_odds.cpp
        calculate_pentagon.h calculate_pentagon.cpp
        quick_sort.h quick_sort.cpp)