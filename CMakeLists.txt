cmake_minimum_required(VERSION 2.8)
project(root_dict_cmake)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")


include_directories("include")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -O2")

find_package(ROOT 6 REQUIRED)
include(${ROOT_USE_FILE})


add_subdirectory(src)
add_subdirectory(prog)
