//
// Created by Pei on 23/09/2026.
//

#ifndef BIBLIOTECA_LISTAGENERICA_H
#define BIBLIOTECA_LISTAGENERICA_H

template <typename T>
class ListaGenerica {
private:
    T* almacen;
    int count;
    int capacidad;
public:
    ListaGenerica();
    void add(T* nuevo);
    T remove(int a);
    int length();
    T at(int position);
    void recorrer();
};


#endif //BIBLIOTECA_LISTAGENERICA_H
