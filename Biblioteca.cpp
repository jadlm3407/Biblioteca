//
// Created by jadel on 16/09/2026.
//

#include "Biblioteca.h"

#include <iostream>
#include <ostream>

Biblioteca::Biblioteca() {
    cargarUsuarios();
    cargarLibros();
}

void Biblioteca::cargarLibros() {
Libro l1 = Libro("Jack Reacher: Zona peligrosa", "Lee Child", "Accion", "9788401352836");
Libro l2 = Libro("Misión imposible", "David Michaels", "Accion", "9788408049455");
Libro l3 = Libro("La isla del tesoro", "Robert Louis Stevenson", "Aventura", "9788491050004");
Libro l4 = Libro("Las aventuras de Huckleberry Finn", "Mark Twain", "Aventura", "9788420674347");
Libro l5 = Libro("Los miserables", "Victor Hugo", "Drama", "9788491050493");
Libro l6 = Libro("Ana Karenina", "Leon Tolstoi", "Drama", "9788491050745");
Libro l7 = Libro("Tres hombres en una barca", "Jerome K. Jerome", "Comedia", "9788420663228");
Libro l8 = Libro("El diario de Bridget Jones", "Helen Fielding", "Comedia", "9788401341847");
Libro l9 = Libro("Orgullo y prejuicio", "Jane Austen", "Romance", "9788491050936");
Libro l10 = Libro("Bodas de odio", "Colleen Hoover", "Romance", "9788408253869");
Libro l11 = Libro("Drácula", "Bram Stoker", "Terror", "9788491050929");
Libro l12 = Libro("El resplandor", "Stephen King", "Terror", "9788497596654");
Libro l13 = Libro("Fundación", "Isaac Asimov", "CienciaFiccion", "9788497594479");
Libro l14 = Libro("Dune", "Frank Herbert", "CienciaFiccion", "9788497592942");
Libro l15 = Libro("El hobbit", "J.R.R. Tolkien", "Fantasia", "9788445073028");
Libro l16 = Libro("Juego de tronos", "George R.R. Martin", "Fantasia", "9788401337376");
Libro l17 = Libro("El nombre de la rosa", "Umberto Eco", "Misterio", "9788483465050");
Libro l18 = Libro("La chica del tren", "Paula Hawkins", "Misterio", "9788401342141");
Libro l19 = Libro("Los hombres que no amaban a las mujeres", "Stieg Larsson", "Policiaca", "9788498383521");
Libro l20 = Libro("Diez negritos", "Agatha Christie", "Policiaca", "9788498387322");
Libro l21 = Libro("Steve Jobs", "Walter Isaacson", "Biografia", "9788499921634");
Libro l22 = Libro("Una vida en la naturaleza", "Jane Goodall", "Biografia", "9788434414568");
Libro l23 = Libro("Sapiens", "Yuval Noah Harari", "Historia", "9788499926223");
Libro l24 = Libro("Breve historia del mundo", "Ernst H. Gombrich", "Historia", "9788493591419");
Libro l25 = Libro("Veinte poemas de amor y una canción desesperada", "Pablo Neruda", "Poesia", "9788498387421");
Libro l26 = Libro("Poeta en Nueva York", "Federico Garcia Lorca", "Poesia", "9788420674590");
Libro l27 = Libro("El arte de la guerra", "Sun Tzu", "Ensayo", "9788497644729");
Libro l28 = Libro("Meditaciones", "Marco Aurelio", "Ensayo", "9788420674323");
Libro l29 = Libro("Charlie y la fábrica de chocolate", "Roald Dahl", "Infantil", "9788498387261");
Libro l30 = Libro("El principito", "Antoine de Saint-Exupery", "Infantil", "9788498381498");
Libro l31 = Libro("Los juegos del hambre", "Suzanne Collins", "Juvenil", "9788427202120");
Libro l32 = Libro("Bajo la misma estrella", "John Green", "Juvenil", "9788408105809");
Libro l33 = Libro("1984", "George Orwell", "Distopia", "9788499890944");
Libro l34 = Libro("Un mundo feliz", "Aldous Huxley", "Distopia", "9788497593309");
Libro l35 = Libro("El código Da Vinci", "Dan Brown", "Thriller", "9788408043644");
Libro l36 = Libro("Origen", "Dan Brown", "Thriller", "9788425355321");
Libro l37 = Libro("Cien años de soledad", "Gabriel Garcia Marquez", "Clasico", "9788497592208");
Libro l38 = Libro("Don Quijote de la Mancha", "Miguel de Cervantes", "Clasico", "9788420412146");
Libro l39 = Libro("El mundo de Sofia", "Jostein Gaarder", "Filosofia", "9788432217018");
Libro l40 = Libro("Así habló Zaratustra", "Friedrich Nietzsche", "Filosofia", "9788420674408");

    catalogoLibros->push_back(l1);
    catalogoLibros->push_back(l2);
    catalogoLibros->push_back(l3);
    catalogoLibros->push_back(l4);
    catalogoLibros->push_back(l5);
    catalogoLibros->push_back(l6);
    catalogoLibros->push_back(l7);
    catalogoLibros->push_back(l8);
    catalogoLibros->push_back(l9);
    catalogoLibros->push_back(l10);
    catalogoLibros->push_back(l11);
    catalogoLibros->push_back(l12);
    catalogoLibros->push_back(l13);
    catalogoLibros->push_back(l14);
    catalogoLibros->push_back(l15);
    catalogoLibros->push_back(l16);
    catalogoLibros->push_back(l17);
    catalogoLibros->push_back(l18);
    catalogoLibros->push_back(l19);
    catalogoLibros->push_back(l20);
    catalogoLibros->push_back(l21);
    catalogoLibros->push_back(l22);
    catalogoLibros->push_back(l23);
    catalogoLibros->push_back(l24);
    catalogoLibros->push_back(l25);
    catalogoLibros->push_back(l26);
    catalogoLibros->push_back(l27);
    catalogoLibros->push_back(l28);
    catalogoLibros->push_back(l29);
    catalogoLibros->push_back(l30);
    catalogoLibros->push_back(l31);
    catalogoLibros->push_back(l32);
    catalogoLibros->push_back(l33);
    catalogoLibros->push_back(l34);
    catalogoLibros->push_back(l35);
    catalogoLibros->push_back(l36);
    catalogoLibros->push_back(l37);
    catalogoLibros->push_back(l38);
    catalogoLibros->push_back(l39);
    catalogoLibros->push_back(l40);
}

void Biblioteca:: cargarUsuarios() {
    Usuario u1 = Usuario("Juan","Lopez","3463466F");
    Usuario u2 = Usuario("Maria", "Garcia", "5821943P");
    Usuario u3 = Usuario("Carlos", "Martinez", "7734512K");
    Usuario u4 = Usuario("Ana", "Fernandez", "2298761L");
    Usuario u5 = Usuario("Pedro", "Gonzalez", "8845210N");
    Usuario u6 = Usuario("Laura", "Rodriguez", "4412367Q");
    Usuario u7 = Usuario("Miguel", "Sanchez", "9987654R");
    Usuario u8 = Usuario("Elena", "Perez", "3356789T");
    Usuario u9 = Usuario("David", "Diaz", "6623145Y");
    Usuario u10 = Usuario("Sofia", "Torres", "1189234X");
    Usuario u11 = Usuario("Javier", "Ramirez", "7756432Z");
    Usuario u12 = Usuario("Cristina", "Flores", "4478912W");
    Usuario u13 = Usuario("Alejandro", "Morales", "8834567V");
    Usuario u14 = Usuario("Isabel", "Castro", "2267891C");
    Usuario u15 = Usuario("Fernando", "Ortega", "9912345B");
    Usuario u16 = Usuario("Patricia", "Jimenez", "5567234M");
    listaUsuarios->push_back(u1);
    listaUsuarios->push_back(u2);
    listaUsuarios->push_back(u3);
    listaUsuarios->push_back(u4);
    listaUsuarios->push_back(u5);
    listaUsuarios->push_back(u6);
    listaUsuarios->push_back(u7);
    listaUsuarios->push_back(u8);
    listaUsuarios->push_back(u9);
    listaUsuarios->push_back(u10);
    listaUsuarios->push_back(u11);
    listaUsuarios->push_back(u12);
    listaUsuarios->push_back(u13);
    listaUsuarios->push_back(u14);
    listaUsuarios->push_back(u15);
    listaUsuarios->push_back(u16);
}


void Biblioteca::cargarDisponibles() {
    for (Libro libro : *catalogoLibros) {
        std::cout << libro.getTitulo() << std::endl;
    }
}
