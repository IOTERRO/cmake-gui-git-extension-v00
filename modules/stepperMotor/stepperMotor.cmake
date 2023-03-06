project(stepperMotor)

set(MOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/modules/stepperMotor)

file(GLOB MOTEUR_SRC ${MOT_DIR}/*.cpp)

add_library(stepperMotor STATIC ${MOTEUR_SRC})

target_include_directories(stepperMotor PUBLIC "${MOT_DIR}")

