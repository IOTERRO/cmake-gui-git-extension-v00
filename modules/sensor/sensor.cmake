project(sensor)

set(MOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/modules/sensor)

file(GLOB MOTEUR_SRC ${MOT_DIR}/*.cpp)

add_library(sensor STATIC ${MOTEUR_SRC})

target_include_directories(sensor PUBLIC "${MOT_DIR}")

