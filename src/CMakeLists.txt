cmake_minimum_required (VERSION 2.8)
project (PierwszyProgram)
add_executable(Laborka main.cpp)
option (USE_TRIGONOMETRY_DEGREE "Czy argumentami funkcji trygonometrycznych maja byc stopnie" ON)
if (USE_TRIGONOMETRY_DEGREE)
include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory(Trygonometria)
target_link_libraries (Laborka Trygonometria)
endif (USE_TRIGONOMETRY_DEGREE)
configure_file (
"${PROJECT_SOURCE_DIR}/LaborkaConfig.h.in"
"${PROJECT_BINARY_DIR}/LaborkaConfig.h"
)
include_directories("${PROJECT_BINARY_DIR}")
option (BUILD_TESTS "Czy budować testy" ON)
if (BUILD_TESTS)
enable_testing()
add_test (LaborkaPodstawowyTest Laborka)
add_test (LaborkaWynikSin30 Laborka 30)
set_tests_properties (LaborkaWynikSin30
PROPERTIES PASS_REGULAR_EXPRESSION "0[.,]5")
add_test (Laborka3sek Laborka)
set_tests_properties (Laborka3sek
PROPERTIES TIMEOUT 3)
endif (BUILD_TESTS)