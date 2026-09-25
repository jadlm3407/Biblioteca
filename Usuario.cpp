#include "Usuario.h"

#include <iostream>

Usuario::Usuario() {
    nombre = "";
    apellido = "";
    dni = "";
}

Usuario::Usuario(std::string nombre, std::string apellido, std::string dni) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;
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
    return librosReservados->length();
}

int Usuario::getCantidadHistorial() {
    return librosHistorial->length();
}

Libro Usuario::atReservado(int posicion) {
    return librosReservados->at(posicion);
}

Libro Usuario::atHistorial(int posicion) {
    return librosHistorial->at(posicion);
}

void Usuario::agregarReservado(Libro* libro) {
    librosReservados->add(libro);
}

Libro Usuario::quitarReservado(int posicion) {
    return librosReservados->remove(posicion);
}

void Usuario::agregarHistorial(Libro* libro) {
    librosHistorial->add(libro);
}

void Usuario:: printInfo() {
    std::cout<< "Usuario: " << getNombre()<<" "<< getApellido() << "DNI: "<< getDNI()<< std::endl;
}