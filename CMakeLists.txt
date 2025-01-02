cmake_minimum_required(VERSION 3.26)
project(Algorithms)

set(CMAKE_CXX_STANDARD 23)

# Get all .cpp files in the "src" directory
file(GLOB CPP_FILES "*.cpp")

# Loop through each .cpp file and create an executable
foreach(CPP_FILE ${CPP_FILES})
    # Extract the file name without the path or extension
    get_filename_component(EXECUTABLE_NAME ${CPP_FILE} NAME_WE)

    # Create an executable for this file
    add_executable(${EXECUTABLE_NAME} ${CPP_FILE})
endforeach()
