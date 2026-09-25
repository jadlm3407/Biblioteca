//
// Created by Pei on 23/09/2026.
//
#include <iostream>
#include "ListaGenerica.h"


template<typename T>
ListaGenerica<T>::ListaGenerica() {
    capacidad = 3;
    count = 0;
    almacen = new T[capacidad];
}

template<typename T>
void ListaGenerica<T>::add(T* nuevo) {
    if (count == capacidad) {
        int nuevaCapacidad = capacidad +1;
        T* nuevoArray = new T[nuevaCapacidad];
        for (int i = 0; i < count; i++) {
            nuevoArray[i] = almacen[i];
        }
        delete[] almacen;
        almacen = nuevoArray;
        capacidad = nuevaCapacidad;
    }
    almacen[count] = nuevo;
    count++;
}

template<typename T>
T ListaGenerica<T>::remove(int a ) {
    if (count == 0) {
        std::cout << "La lista esta vacia" << std::endl;
        return T();
        count--;
        return almacen[count];
    }
}

template<typename T>
int ListaGenerica<T>::length() {
    return count;
}

template<typename T>
T ListaGenerica<T>::at(int position) {
    if (position < count) {                  // CAMBIO: quitado el "count--" (bug)
        return almacen[position];
    }
    return T();                              // NUEVO: por si la posición no es válida
}

template<typename T>
void ListaGenerica<T>::recorrer() {
    for (int i = 0; i < count; i++) {
        std::cout << almacen[i] << std::endl;


    }
}

