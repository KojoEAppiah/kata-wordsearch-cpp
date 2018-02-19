cmake_minimum_required(VERSION 3.9)
project(kata_wordsearch_cpp)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googletmock/include)

add_executable(kata_wordsearch_cpp main.cpp src/WordSearch.cpp src/WordSearch.h test/WordSearchTest.cpp)
target_link_libraries(kata_wordsearch_cpp gtest gtest_main)
target_link_libraries(kata_wordsearch_cpp gmock gmock_main)