//
// Created by jadel on 16/09/2026.
//

#include "Biblioteca.h"
#include "Libro.h"
#include "Usuario.h"
#include <iostream>
#include <ostream>

Biblioteca::Biblioteca() {
    cantidadLibros = 0;
    cantidadUsuarios = 0;
    cargarUsuarios();
    cargarLibros();
}

void Biblioteca::cargarLibros() {
    catalogoLibros[cantidadLibros++] = new Libro("Jack Reacher: Zona peligrosa", "Lee Child", "Accion", "9788401352836");
    catalogoLibros[cantidadLibros++] = new Libro("Mision imposible", "David Michaels", "Accion", "9788408049455");
    catalogoLibros[cantidadLibros++] = new Libro("La isla del tesoro", "Robert Louis Stevenson", "Aventura", "9788491050004");
    catalogoLibros[cantidadLibros++] = new Libro("Las aventuras de Huckleberry Finn", "Mark Twain", "Aventura", "9788420674347");
    catalogoLibros[cantidadLibros++] = new Libro("Los miserables", "Victor Hugo", "Drama", "9788491050493");
    catalogoLibros[cantidadLibros++] = new Libro("Ana Karenina", "Leon Tolstoi", "Drama", "9788491050745");
    catalogoLibros[cantidadLibros++] = new Libro("Tres hombres en una barca", "Jerome K. Jerome", "Comedia", "9788420663228");
    catalogoLibros[cantidadLibros++] = new Libro("El diario de Bridget Jones", "Helen Fielding", "Comedia", "9788401341847");
    catalogoLibros[cantidadLibros++] = new Libro("Orgullo y prejuicio", "Jane Austen", "Romance", "9788491050936");
    catalogoLibros[cantidadLibros++] = new Libro("Bodas de odio", "Colleen Hoover", "Romance", "9788408253869");
    catalogoLibros[cantidadLibros++] = new Libro("Dracula", "Bram Stoker", "Terror", "9788491050929");
    catalogoLibros[cantidadLibros++] = new Libro("El resplandor", "Stephen King", "Terror", "9788497596654");
    catalogoLibros[cantidadLibros++] = new Libro("Fundacion", "Isaac Asimov", "CienciaFiccion", "9788497594479");
    catalogoLibros[cantidadLibros++] = new Libro("Dune", "Frank Herbert", "CienciaFiccion", "9788497592942");
    catalogoLibros[cantidadLibros++] = new Libro("El hobbit", "J.R.R. Tolkien", "Fantasia", "9788445073028");
    catalogoLibros[cantidadLibros++] = new Libro("Juego de tronos", "George R.R. Martin", "Fantasia", "9788401337376");
    catalogoLibros[cantidadLibros++] = new Libro("El nombre de la rosa", "Umberto Eco", "Misterio", "9788483465050");
    catalogoLibros[cantidadLibros++] = new Libro("La chica del tren", "Paula Hawkins", "Misterio", "9788401342141");
    catalogoLibros[cantidadLibros++] = new Libro("Los hombres que no amaban a las mujeres", "Stieg Larsson", "Policiaca", "9788498383521");
    catalogoLibros[cantidadLibros++] = new Libro("Diez negritos", "Agatha Christie", "Policiaca", "9788498387322");
    catalogoLibros[cantidadLibros++] = new Libro("Steve Jobs", "Walter Isaacson", "Biografia", "9788499921634");
    catalogoLibros[cantidadLibros++] = new Libro("Una vida en la naturaleza", "Jane Goodall", "Biografia", "9788434414568");
    catalogoLibros[cantidadLibros++] = new Libro("Sapiens", "Yuval Noah Harari", "Historia", "9788499926223");
    catalogoLibros[cantidadLibros++] = new Libro("Breve historia del mundo", "Ernst H. Gombrich", "Historia", "9788493591419");
    catalogoLibros[cantidadLibros++] = new Libro("Veinte poemas de amor y una cancion desesperada", "Pablo Neruda", "Poesia", "9788498387421");
    catalogoLibros[cantidadLibros++] = new Libro("Poeta en Nueva York", "Federico Garcia Lorca", "Poesia", "9788420674590");
    catalogoLibros[cantidadLibros++] = new Libro("El arte de la guerra", "Sun Tzu", "Ensayo", "9788497644729");
    catalogoLibros[cantidadLibros++] = new Libro("Meditaciones", "Marco Aurelio", "Ensayo", "9788420674323");
    catalogoLibros[cantidadLibros++] = new Libro("Charlie y la fabrica de chocolate", "Roald Dahl", "Infantil", "9788498387261");
    catalogoLibros[cantidadLibros++] = new Libro("El principito", "Antoine de Saint-Exupery", "Infantil", "9788498381498");
    catalogoLibros[cantidadLibros++] = new Libro("Los juegos del hambre", "Suzanne Collins", "Juvenil", "9788427202120");
    catalogoLibros[cantidadLibros++] = new Libro("Bajo la misma estrella", "John Green", "Juvenil", "9788408105809");
    catalogoLibros[cantidadLibros++] = new Libro("1984", "George Orwell", "Distopia", "9788499890944");
    catalogoLibros[cantidadLibros++] = new Libro("Un mundo feliz", "Aldous Huxley", "Distopia", "9788497593309");
    catalogoLibros[cantidadLibros++] = new Libro("El codigo Da Vinci", "Dan Brown", "Thriller", "9788408043644");
    catalogoLibros[cantidadLibros++] = new Libro("Origen", "Dan Brown", "Thriller", "9788425355321");
    catalogoLibros[cantidadLibros++] = new Libro("Cien anos de soledad", "Gabriel Garcia Marquez", "Clasico", "9788497592208");
    catalogoLibros[cantidadLibros++] = new Libro("Don Quijote de la Mancha", "Miguel de Cervantes", "Clasico", "9788420412146");
    catalogoLibros[cantidadLibros++] = new Libro("El mundo de Sofia", "Jostein Gaarder", "Filosofia", "9788432217018");
    catalogoLibros[cantidadLibros++] = new Libro("Asi hablo Zaratustra", "Friedrich Nietzsche", "Filosofia", "9788420674408");
}

void Biblioteca::cargarUsuarios() {
    listaUsuarios[cantidadUsuarios++] = new Usuario("Juan", "Lopez", "3463466F");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Maria", "Garcia", "5821943P");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Carlos", "Martinez", "7734512K");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Ana", "Fernandez", "2298761L");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Pedro", "Gonzalez", "8845210N");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Laura", "Rodriguez", "4412367Q");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Miguel", "Sanchez", "9987654R");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Elena", "Perez", "3356789T");
    listaUsuarios[cantidadUsuarios++] = new Usuario("David", "Diaz", "6623145Y");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Sofia", "Torres", "1189234X");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Javier", "Ramirez", "7756432Z");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Cristina", "Flores", "4478912W");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Alejandro", "Morales", "8834567V");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Isabel", "Castro", "2267891C");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Fernando", "Ortega", "9912345B");
    listaUsuarios[cantidadUsuarios++] = new Usuario("Patricia", "Jimenez", "5567234M");
}

void Biblioteca::cargarDisponibles(){
    std::cout << "Lista de libros disponibles" << std::endl;
    for (int i = 0; i < cantidadLibros; i++) {
        if (catalogoLibros[i]->getEstado() == true) {
            std::cout<<"El libro "<<catalogoLibros[i]->getTitulo()<<" está disponible"<<std::endl;
        }else {
            std::cout<<"El libro "<<catalogoLibros[i]->getTitulo()<<" no está disponible y lo tiene el usuario con DNI "<< catalogoLibros[i]->getDniUsuarioActual()<<std::endl;
        }
    }
}

void Biblioteca::cargarRegistroUsuarios() {

    std::cout << "Registro de usuarios" << std::endl;

    for (int i = 0; i < cantidadUsuarios; i++) {
        std::cout<<"Usuario :"<<listaUsuarios[i]->getNombre() <<" "<<listaUsuarios[i]->getApellido()<<" | DNI:"<<std::endl;
        std:: cout << "Lista de libros reservados actualmente"<< std::endl;
        int cantReservados = listaUsuarios[i]->getCantidadReservados();
        for (int j = 0; j < cantReservados; j++) {
            if (listaUsuarios[i]->getCantidadReservados() > 0){
            std::cout <<j++<<". "<< listaUsuarios[i]->atReservado(j).getTitulo() << std::endl;
        }else {
            std:: cout << "Actualmente no tiene ningún libros resevado"<< std::endl;
        }
        }
        std:: cout << "Historial de libros Reservados"<< std::endl;
        for (int k = 0; k < cantReservados; k++) {
            if (listaUsuarios[i]->getCantidadHistorial() > 0){
                std::cout <<k++<<". "<< listaUsuarios[i]->atHistorial(k).getTitulo() << std::endl;
            }else {
                std:: cout << "Historial vacio"<< std::endl;
            }
        }
    }

}


void Biblioteca:: asignarLibro(Libro* libro,Usuario* usuario){
    if (libro->getEstado() == true) {
        libro->setDniUsuarioActual(usuario->getDNI());
        libro->setEstado(false);
    } else {
        std::cout<< "El libro " <<libro->getTitulo() << " no está disponible"<< std::endl;
    }
}



    void Biblioteca::usuarioTieneLibro(std::string dni, std::string isbn) {
        for (int i = 0; i < cantidadUsuarios; i++) {
            if (listaUsuarios[i]->getDNI() == dni) {
                Usuario* usuarioActual = listaUsuarios[i];
                int cantReservados = usuarioActual->getCantidadReservados();
                bool encontrado = false;

                for (int j = 0; j < cantReservados; j++) {
                    if (usuarioActual->atReservado(j).getISBN() == isbn) {
                        encontrado = true;
                    }
                }

                if (encontrado) {
                    std::cout << "El libro con ISBN: " << isbn << " si lo tiene el usuario con DNI: " << dni << std::endl;
                } else {
                    std::cout << "El libro con ISBN: " << isbn << " no lo tiene el usuario con DNI: " << dni << std::endl;
                }
            }
        }
    }