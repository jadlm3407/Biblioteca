//
// Created by jadel on 16/09/2026.
//

#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H
#include "Usuario.h"

#include <vector>

class Biblioteca {

private:
    Libro* catalogoLibros[100];
    int cantidadLibros;

    Usuario* listaUsuarios[100];
    int cantidadUsuarios;

public:

    Biblioteca();

    void cargarUsuarios();
    void cargarLibros();

    void cargarDisponibles();



    void asignarLibro(Libro* libro,Usuario* usuario);
    void designarLibro(Libro* libro,Usuario* usuario);




    //   Ver el historial de libros de una persona
    //    Ver si una persona tiene un libro o no
    //    Sacar un libro (asignárselo a una persona)
    //    Devolver un libro (desasignárselo a dicha persona)
    bool getUsuarioAsignado(Libro* libro);
    void historialUsuario();

};


#endif //BIBLIOTECA_BIBLIOTECA_H
