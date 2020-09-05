cmake_minimum_required(VERSION 3.17)
project(test)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. DIR_SRCS)

add_subdirectory(utility)
add_subdirectory(160)
add_subdirectory(891)
add_subdirectory(812)
add_subdirectory(486)
add_subdirectory(1604)
add_subdirectory(206)
add_subdirectory(51&52)

add_executable(test main.cpp)

target_link_libraries(test UTIL)
target_link_libraries(test _160)
target_link_libraries(test _891)
target_link_libraries(test _812)
target_link_libraries(test _486)
target_link_libraries(test _1604)
target_link_libraries(test _206)
target_link_libraries(test _51N52)