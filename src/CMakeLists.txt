cmake_minimum_required(VERSION 3.5.0)

set(PRJ_NAME "MIAerConn")

project(${PRJ_NAME} VERSION 0.1.0 LANGUAGES C CXX)

# Set default build type to Release if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

add_executable(${PRJ_NAME} main.cpp)

# Set compiler flags for different build types
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

# Set the output directory for binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# Include directories
include_directories(
    "${CMAKE_SOURCE_DIR}"  # Assuming ${workspaceFolder} is the source directory
    "C:/Program Files (x86)/TCI/Scorpio API/Release/Common"
    "C:/Program Files (x86)/TCI/Scorpio API/Release/GShared/IO"
    "C:/Program Files (x86)/TCI/Scorpio API/Release/GShared/Monitoring System/Shared Include"
    "C:/Program Files (x86)/TCI/Scorpio API/Release/lib"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/include"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/include/cvt"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/include/msclr"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/crt/src"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/crt/src/x64"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/crt/src/concrt"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/crt/src/linkopts"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/crt/src/stl"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/crt/src/vccorlib"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/crt/src/vcruntime"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/atlmfc/src/mfc"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/atlmfc/src/atl"
    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/atlmfc/include"
    "C:/Program Files (x86)/Windows Kits/10/Include/10.0.22621.0/ucrt"
    "C:/Program Files (x86)/Windows Kits/10/Include/10.0.22621.0/shared"
    "C:/Program Files (x86)/Windows Kits/10/Include/10.0.22621.0/um",
    "C:/Program Files (x86)/Windows Kits/10/Include/10.0.22621.0/winrt"
)

# Custom target to generate debug script
add_custom_target(generate_debug_script
    COMMAND ${CMAKE_COMMAND} -E echo "set(CMAKE_BUILD_TYPE Debug)" > ${CMAKE_BINARY_DIR}/debug.cmake
    COMMAND ${CMAKE_COMMAND} -E echo "add_executable(${PRJ_NAME} main.cpp)" >> ${CMAKE_BINARY_DIR}/debug.cmake
    COMMAND ${CMAKE_COMMAND} -E echo "target_compile_options(${PRJ_NAME} PRIVATE -g)" >> ${CMAKE_BINARY_DIR}/debug.cmake
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)
