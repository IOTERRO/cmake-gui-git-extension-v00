project(moteur)

set(MOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/modules/moteur)

file(GLOB MOTEUR_SRC ${MOT_DIR}/*.cpp)

add_library(moteur STATIC ${MOTEUR_SRC})

target_link_libraries(moteur sensor)

target_include_directories(moteur PUBLIC "${MOT_DIR}")

