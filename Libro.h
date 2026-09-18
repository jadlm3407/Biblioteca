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
    bool disponible;
    string dniUsuarioActual;  // DNI de quien lo tiene prestado; vacio si esta disponible

public:
    //Constructores
    Libro();
    Libro(const string titulo, const string autor, const string categoria, const string ISBN);


    // Getters
    string getTitulo() const;
    string getAutor() const ;
    string getCategoria() const ;
    string getISBN() const ;
    bool isDisponible() const;
    string getDniUsuarioActual() const;

    // Setters
    void setDisponible(bool disponible);
    void setDniUsuarioActual(const string dni);


};

#endif