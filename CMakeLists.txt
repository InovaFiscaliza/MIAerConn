cmake_minimum_required(VERSION 3.5.0)

set(PRJ_NAME "CPPBP")

project(${PRJ_NAME} VERSION 0.1.0 LANGUAGES C CXX)

# Set default build type to Release if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

add_executable(${PRJ_NAME} main.cpp)

# Set compiler flags for different build types
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

# Custom target to generate debug script
add_custom_target(generate_debug_script
    COMMAND ${CMAKE_COMMAND} -E echo "set(CMAKE_BUILD_TYPE Debug)" > ${CMAKE_BINARY_DIR}/debug.cmake
    COMMAND ${CMAKE_COMMAND} -E echo "add_executable(${PRJ_NAME} main.cpp)" >> ${CMAKE_BINARY_DIR}/debug.cmake
    COMMAND ${CMAKE_COMMAND} -E echo "target_compile_options(${PRJ_NAME} PRIVATE -g)" >> ${CMAKE_BINARY_DIR}/debug.cmake
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)
