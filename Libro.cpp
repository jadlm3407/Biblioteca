//
// Created by rodri on 16/09/2026.
//

#include "Libro.h"

#include <iostream>
using namespace std;

Libro::Libro() {
    titulo = "";
    autor = "";
    categoria = "";
    ISBN = "";
    isDisponible = true;
    dniUsuarioActual = "";
}

Libro::Libro(string titulo,string autor,string categoria,string ISBN) {
    this->titulo = titulo;
    this->autor = autor;
    this->categoria = categoria;
    this->ISBN = ISBN;
    this->isDisponible = true;       // un libro nuevo entra siempre como disponible
    this->dniUsuarioActual = "";
}

string Libro::getTitulo(){
    return titulo;
}

string Libro::getAutor(){
    return autor;
}

string Libro::getCategoria(){
    return categoria;
}

string Libro::getISBN(){
    return ISBN;
}

bool Libro::getIsDisponible(){
    return isDisponible;
}

string Libro::getDniUsuarioActual(){
    return dniUsuarioActual;
}

void Libro::setDisponible(bool disponible) {
    this->isDisponible = disponible;
}

void Libro::setDniUsuarioActual(string dni) {
    this->dniUsuarioActual = dni;
}