#/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
# * Unauthorized copying of this file, via any medium is strictly prohibited
# * Proprietary and confidential
# * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
# */
cmake_minimum_required(VERSION 3.10)
project(WallboxTechnicalTest)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(gtest)