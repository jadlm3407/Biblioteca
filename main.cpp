#include <iostream>

#include "Biblioteca.h"

int main() {

    Biblioteca *b = new Biblioteca();
    b->cargarDisponibles();

    return 0;
}