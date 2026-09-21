//
// Created by jadel on 16/09/2026.
//

#include "Usuario.h"
#include "Libro.h"
#include <iostream>

Usuario::Usuario(std::string nombre, std::string apellido, std::string dni) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;
    cantidadReservados=0;
    cantidadHistorial=0;
}

void Usuario::reservarLibro(Libro libro) {
    Usuario::librosReservados[cantidadReservados++] = libro;
    Usuario::librosHistorial[cantidadHistorial++] = libro;
}

void Usuario::devolverLibro() {
    cantidadReservados--;
}

void Usuario::printReservas() {
    for (int i = 0; i < cantidadReservados; i++) {
        std::cout << i << ": " << Usuario::librosReservados[i].getTitulo() << std::endl; //Supongo que pondran getTitulo en Libro
    }
}

void Usuario::printHistorial() {
    for (int i = 0; i < cantidadHistorial; i++) {
        std::cout<< i << ": " << Usuario::librosHistorial[i].getTitulo() << std::endl; //Supongo que pondran getTitulo en Libro
    }
}

bool Usuario::verificarLibro(Libro libro) {
    int i=0;
    bool verificar = false;
    do {
        if (libro.getTitulo() == Usuario::librosReservados[i].getTitulo()) {
            verificar = true;
        }
        i++;
    } while (verificar == false && i<cantidadReservados);
    return verificar;
}

std::string Usuario::getNombre() {
    return nombre;
}

std::string Usuario::getApellido() {
    return apellido;
}

std::string Usuario::getDNI() {
    return dni;
}

int Usuario::getCantidadReservados() {
    return cantidadReservados;
}

int Usuario::getCantidadHistorial() {
    return cantidadHistorial;
}

Libro Usuario::atReservado(int posicion) {
    return Usuario::librosReservados[posicion];
}

Libro Usuario::atHistorial(int posicion) {
    return Usuario::librosHistorial[posicion];
}
