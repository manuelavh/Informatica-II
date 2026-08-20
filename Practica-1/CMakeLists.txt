cmake_minimum_required(VERSION 3.16)

project(Practica-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Practica-1 ejercicio5.cpp)

include(GNUInstallDirs)
install(TARGETS Practica-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
