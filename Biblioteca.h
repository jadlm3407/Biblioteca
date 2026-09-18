//
// Created by jadel on 16/09/2026.
//

#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H
#include "Usuario.h"


class Biblioteca {




public:
//    Comprobar qué libros hay disponibles
//   Ver el historial de libros de una persona
//    Ver si una persona tiene un libro o no
//    Sacar un libro (asignárselo a una persona)
//    Devolver un libro (desasignárselo a dicha persona)
    Biblioteca();

    void librosDisponibles();
    bool tieneLibro(Usuario usuario);
    void asignarLibro(Usuario usuario);
    void designarLibro(Usuario usuario);

};


#endif //BIBLIOTECA_BIBLIOTECA_H
