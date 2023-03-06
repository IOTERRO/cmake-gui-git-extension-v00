project(libraries)

set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/modules/libraries)

add_library(libraries STATIC ${LIB_DIR}/library.cpp)

target_include_directories(libraries PUBLIC "${LIB_DIR}")
