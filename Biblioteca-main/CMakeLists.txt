cmake_minimum_required(VERSION 4.3)
project(Biblioteca)

set(CMAKE_CXX_STANDARD 23)

add_executable(Biblioteca main.cpp
        Usuario.cpp
        Usuario.h
        Libro.cpp
        Libro.h
        Biblioteca.cpp
        Biblioteca.h)
