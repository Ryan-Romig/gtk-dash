cmake_minimum_required(VERSION 3.10)
project(gtk-demo)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

# Assuming your main.cpp file is in the src directory
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES})
add_subdirectory(src)
target_link_libraries(${PROJECT_NAME} commander)

