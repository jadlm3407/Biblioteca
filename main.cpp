#include <iostream>
#include <string>
#include "Biblioteca.h"
#include "Libro.h"
#include "Usuario.h"
using namespace std;

int main() {
    Biblioteca miBiblioteca;
    miBiblioteca.cargarLibros();
    miBiblioteca.cargarUsuarios();
    int opcion = 0;
    string dniAux, isbnAux;

    // creo los objetos auxiliares por lo que os puse por wass
    Libro libroAux;
    Usuario usuarioAux;

    do {
        cout << "\nMENU BIBLIOTECA" << endl;
        cout << "1. Ver los  libros disponibles" << endl;
        cout << "2. Ver usuarios" << endl;
        cout << "3. Comprobar si un usuario tiene un libro" << endl;
        cout << "4. Prestar libro" << endl;
        cout << "5. Devolver libro" << endl;
        cout << "6. Ver quien tiene un libro prestado" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                  miBiblioteca.cargarDisponibles();
                   break;

            case 2:
                miBiblioteca.cargarRegistroUsuarios();
                break;

            case 3:
                cout << "DNI del usuario: ";
                cin >> dniAux;
                cout << "ISBN del libro: ";
                cin >> isbnAux;

                // he pillado el metodo tal cual de biblioteca.h
                miBiblioteca.usuarioTieneLibro(dniAux, isbnAux);
                break;
            case 4:
                miBiblioteca.asignarLibro(&libroAux, &usuarioAux);
                cout << "Asignacion de realizada." << endl;
                break;
            case 5:
                  miBiblioteca.designarLibro(&libroAux, &usuarioAux);
                  cout << "Devolucion realizada." << endl;
                break;
            case 6:
                // pido un Libro* segun Biblioteca.h ha hecho
                miBiblioteca.getUsuarioAsignado(&libroAux);
                break;
            case 0:
                cout << "Saliendooo" << endl;
                break;
            default:
                cout << "Opcion incorrecta. Intentalo de nuevo" << endl;
                break;
        }
    } while (opcion != 0);


    return 0;
}