add_executable(write write.cpp)
target_link_libraries(write point ${ROOT_LIBRARIES})

add_executable(read read.cpp)
target_link_libraries(read point ${ROOT_LIBRARIES})
