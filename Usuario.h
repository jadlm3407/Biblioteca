#ifndef BIBLIOTECA_USUARIO_H
#define BIBLIOTECA_USUARIO_H

#include <string>
#include "Libro.h"
#include "ListaGenerica.h"

class Usuario {
private:
    std::string nombre;
    std::string apellido;
    std::string dni;
    ListaGenerica<Libro>* librosReservados;
    ListaGenerica<Libro>* librosHistorial;

public:
    Usuario();
    Usuario(std::string nombre, std::string apellido, std::string dni);

    std::string getNombre();
    std::string getApellido();
    std::string getDNI();

    int getCantidadReservados();
    int getCantidadHistorial();

    Libro atReservado(int posicion);
    Libro atHistorial(int posicion);

    void agregarReservado(Libro* libro);
    Libro quitarReservado(int posicion);
    void agregarHistorial(Libro* libro);
    void printInfo();
};

#endif //BIBLIOTECA_USUARIO_H