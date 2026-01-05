cmake_minimum_required(VERSION 4.1)
project(Algorithm)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 3.0.2 COMPONENTS Network Graphics Window Audio System CONFIG REQUIRED)
find_package(fmt 12.1.0 CONFIG REQUIRED)

add_executable(Algorithm main.cpp
        Sort/SortBase.h
        Sort/BubbleSort/BubbleSort.cpp
        Sort/BubbleSort/BubbleSort.h
        UI/Shape/BarArray.cpp
        UI/Shape/BarArray.h
        UI/Animator.cpp
        UI/Animator.h
        Sort/SortDefine.h)

target_link_libraries(Algorithm PRIVATE
        SFML::Network
        SFML::Graphics
        SFML::Window
        SFML::Audio SFML::System
        fmt::fmt
)