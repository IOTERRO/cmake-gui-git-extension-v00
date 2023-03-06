cmake_minimum_required(VERSION 3.10)

project(Project1)

set(CMAKE_CXX_STANDARD 11)

#set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ ${CMAKE_CXX_STANDARD_LIBRARIES}")


# Include all module CMake files
file(GLOB_RECURSE MODULE_CMAKES ${CMAKE_CURRENT_SOURCE_DIR}/modules/**/*.cmake)

foreach(MODULE_CMAKE ${MODULE_CMAKES})
    include(${MODULE_CMAKE})
	# Add this module's target to the list of all module targets
    get_filename_component(MODULE_NAME ${MODULE_CMAKE} NAME_WE)

    list(APPEND ALL_MODULE_TARGETS ${MODULE_NAME})
endforeach()

add_executable(myexe app/main.cpp)

target_link_libraries(myexe ${ALL_MODULE_TARGETS})

