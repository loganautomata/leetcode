cmake_minimum_required(VERSION 3.25.1)
project(leetcode VERSION 0.1.0 LANGUAGES C CXX)

message(STATUS PROJECT_NAME=${PROJECT_NAME})
message(STATUS CMAKE_SOURCE_DIR=${CMAKE_SOURCE_DIR})
message(STATUS CMAKE_CURRENT_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR})
message(STATUS PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(CMAKE_C_FLAGS_DEBUG " -std=c99 -g -ggdb -O0 -Wall -Wno-unused-function -fpic -fPIC -D_DEBUG")
set(CMAKE_CXX_FLAGS_DEBUG " -std=c++17 -g -ggdb -O0 -Wall -Wno-unused-function -fpic -fPIC -D_DEBUG")

set(CMAKE_C_FLAGS_RELEASE " -std=c99 -O3 -Wall -Wno-unused-function -fpic -fPIC")
set(CMAKE_CXX_FLAGS_RELEASE " -std=c++17 -O3 -Wall -Wno-unused-function -fpic -fPIC")

SET(CMAKE_BUILD_TYPE "Debug")

set(SOLUTION_FOLDER "src/test/1")

include_directories(
    include
    )
include_directories(
    ${PROJECT_SOURCE_DIR}/${SOLUTION_FOLDER}
    )
link_directories(
    lib
    )

aux_source_directory(src/debug SRC_LIST)
add_executable(${PROJECT_NAME}
    ${SRC_LIST}
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    )

target_link_libraries(${PROJECT_NAME}
    pthread
    )

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
