cmake_minimum_required(VERSION 4.3)
project(Biblioteca_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(Biblioteca-main)

add_executable(Biblioteca_main
        Biblioteca-main/Biblioteca.cpp
        Biblioteca-main/Biblioteca.h
        Biblioteca-main/Libro.cpp
        Biblioteca-main/Libro.h
        Biblioteca-main/ListaGenerica.cpp
        Biblioteca-main/ListaGenerica.h
        Biblioteca-main/main.cpp
        Biblioteca-main/Usuario.cpp
        Biblioteca-main/Usuario.h)
