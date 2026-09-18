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
    disponible = true;
    dniUsuarioActual = "";
}

Libro::Libro(const string titulo, const string autor, const string categoria, const string ISBN) {
    this->titulo = titulo;
    this->autor = autor;
    this->categoria = categoria;
    this->ISBN = ISBN;
    this->disponible = true;       // un libro nuevo entra siempre como disponible
    this->dniUsuarioActual = "";
}

string Libro::getTitulo() const {
    return titulo;
}

string Libro::getAutor() const {
    return autor;
}

string Libro::getCategoria() const {
    return categoria;
}

string Libro::getISBN() const {
    return ISBN;
}

bool Libro::isDisponible() const {
    return disponible;
}

string Libro::getDniUsuarioActual() const {
    return dniUsuarioActual;
}

void Libro::setDisponible(bool disponible) {
    this->disponible = disponible;
}

void Libro::setDniUsuarioActual(const string dni) {
    this->dniUsuarioActual = dni;
}