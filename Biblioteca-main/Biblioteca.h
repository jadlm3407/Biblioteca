//
// Created by jadel on 16/09/2026.
//

#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H
#include "Usuario.h"

#include <vector>

class Biblioteca {

private:
    ListaGenerica<Libro>* catalogoLibros;
    int cantidadLibros;

    ListaGenerica<Usuario>* listaUsuarios;
    int cantidadUsuarios;

public:

    Biblioteca();

    void cargarUsuarios();
    void cargarLibros();

    void cargarDisponibles();
    void cargarRegistroUsuarios();


    void asignarLibro(Libro* libro,Usuario* usuario);
    void designarLibro(Libro* libro,Usuario* usuario);


    void usuarioTieneLibro(std::string dni, std::string isbn);

    void getUsuarioAsignado(Libro* libro);
};


#endif //BIBLIOTECA_BIBLIOTECA_H
