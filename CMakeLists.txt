cmake_minimum_required(VERSION 4.1.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
message(STATUS "Toolchain: ${CMAKE_TOOLCHAIN_FILE}")

project(t)

find_package(wxWidgets REQUIRED COMPONENTS net core base)

if(wxWidgets_USE_FILE)
    include(${wxWidgets_USE_FILE})
endif()

add_executable(${PROJECT_NAME} WIN32 main.cpp files.h)
target_link_libraries(${PROJECT_NAME} PRIVATE ${wxWidgets_LIBRARIES})