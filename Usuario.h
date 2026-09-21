//
// Created by jadel on 16/09/2026.
//

#ifndef BIBLIOTECA_USUARIO_H
#define BIBLIOTECA_USUARIO_H

#include <string>
#include "Libro.h"

class Usuario {
private:
    std::string nombre;
    std::string apellido;
    std::string dni;
    Libro librosReservados[50];
    int cantidadReservados;
    Libro librosHistorial[50];
    int cantidadHistorial;
public:
    Usuario();
    Usuario(std::string nombre, std::string apellido, std::string dni);
    void printReservas();
    void printHistorial();
    std::string getNombre();
    std::string getApellido();
    std::string getDNI();
    int getCantidadReservados();
    int getCantidadHistorial();
    Libro atReservado(int posicion);
    Libro atHistorial(int posicion);
};


#endif //BIBLIOTECA_USUARIO_H
