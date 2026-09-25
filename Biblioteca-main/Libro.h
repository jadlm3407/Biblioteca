//
// Created by rodri on 18/09/2026.
//

#ifndef BIBLIOTECADEMO_LIBRO_H
#define BIBLIOTECADEMO_LIBRO_H

#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string categoria;
    string ISBN;
    bool estado;
    string dniUsuarioActual;  // DNI de quien lo tiene prestado; vacio si esta disponible

public:
    //Constructores
    Libro();
    Libro( string titulo,  string autor,  string categoria,  string ISBN);


    // Getters

    string getTitulo();
    string getAutor();
    string getCategoria();
    string getISBN();
    bool getEstado();
    string getDniUsuarioActual();

    // Setters
    void setEstado(bool Estado);
    void setDniUsuarioActual(const string dni);


};

#endif