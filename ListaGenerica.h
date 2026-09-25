//
// Created by Pei on 23/09/2026.
//

#ifndef BIBLIOTECA_LISTAGENERICA_H
#define BIBLIOTECA_LISTAGENERICA_H


template <typename T>
class ListaGenerica {
private:
    T* almacen;          // CAMBIO: puntero en vez de array fijo [3]
    int count;
    int capacidad;        // NUEVO: hace falta para saber cuándo crecer
public:
    ListaGenerica();
    void add(T* nuevo);
    T remove(int a);
    int length();
    T at(int position);
    void recorer();
};

#endif //BIBLIOTECA_LISTAGENERICA_H
