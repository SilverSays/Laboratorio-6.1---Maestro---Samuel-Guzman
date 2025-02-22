// Laboratorio 6.1 - Maestro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <string>
using namespace std;

// Clase principal
class Maestros {
public:
    string nombre;
    int edad;

    // Constructor
    Maestros(string n, int e) {
        nombre = n;
        edad = e;
    }

    // Metodo para mostrar datos
    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

// Clase hija: Maestro de Matematicas
class MaestroMatematicas : public Maestros {
public:
    // Constructor que llama al constructor de la clase base
    MaestroMatematicas(string n, int e) : Maestros(n, e) { }

    // Metodo sobrescrito para mostrar datos
    void mostrarDatos() {
        cout << "Maestro de Matematicas:" << endl;
        Maestros::mostrarDatos();
    }
};

// Clase hija: Maestro de Fisica
class MaestroFisica : public Maestros {
public:
    // Constructor que llama al constructor de la clase base
    MaestroFisica(string n, int e) : Maestros(n, e) { }

    // Metodo sobrescrito para mostrar datos
    void mostrarDatos() {
        cout << "Maestro de Fisica:" << endl;
        Maestros::mostrarDatos();
    }
};

int main() {
    string nombre;
    int edad;

    // Se solicitan los datos del maestro
    cout << "Ingrese el nombre del maestro: ";
    cin >> nombre;
    cout << "Ingrese la edad del maestro: ";
    cin >> edad;

    // Se crean objetos de las clases hijas
    MaestroMatematicas mm(nombre, edad);
    MaestroFisica mf(nombre, edad);

    cout << "\nDatos del Maestro de Matematicas:" << endl;
    mm.mostrarDatos();

    cout << "\nDatos del Maestro de Fisica:" << endl;
    mf.mostrarDatos();

    return 0;
}
