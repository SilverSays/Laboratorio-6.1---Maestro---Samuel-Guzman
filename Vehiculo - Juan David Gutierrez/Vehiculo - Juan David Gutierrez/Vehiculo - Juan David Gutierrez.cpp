// Vehiculo - Juan David Gutierrez.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

// Definicion de la clase Vehiculo
class Vehiculo {
private:
    string marca;
    string modelo;
    string color;
    int velocidadMaxima;
    string tipoCombustible;

public:
    // Constructor vacio
    Vehiculo() {}

    // Metodos para obtener las caracteristicas del vehiculo
    string obtenerMarca() {
        return marca;
    }

    string obtenerModelo() {
        return modelo;
    }

    string obtenerColor() {
        return color;
    }

    int obtenerVelocidadMaxima() {
        return velocidadMaxima;
    }

    string obtenerTipoCombustible() {
        return tipoCombustible;
    }

    // Metodos para modificar las caracteristicas del vehiculo
    void establecerMarca(string m) {
        marca = m;
    }

    void establecerModelo(string mod) {
        modelo = mod;
    }

    void establecerColor(string col) {
        color = col;
    }

    void establecerVelocidadMaxima(int velMax) {
        velocidadMaxima = velMax;
    }

    void establecerTipoCombustible(string tipoComb) {
        tipoCombustible = tipoComb;
    }

    // Metodo para mostrar las caracteristicas del vehiculo
    void mostrarDetalles() {
        cout << "\nDetalles del Vehiculo:" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Color: " << color << endl;
        cout << "Velocidad Maxima: " << velocidadMaxima << " km/h" << endl;
        cout << "Tipo de Combustible: " << tipoCombustible << endl;
    }
};

int main() {
    Vehiculo miVehiculo;

    // Solicitar informacion al usuario
    cout << "Ingrese la marca del vehiculo: ";
    string marca;
    getline(cin, marca);
    miVehiculo.establecerMarca(marca);

    cout << "Ingrese el modelo del vehiculo: ";
    string modelo;
    getline(cin, modelo);
    miVehiculo.establecerModelo(modelo);

    cout << "Ingrese el color del vehiculo: ";
    string color;
    getline(cin, color);
    miVehiculo.establecerColor(color);

    cout << "Ingrese la velocidad maxima del vehiculo (en km/h): ";
    int velocidadMaxima;
    cin >> velocidadMaxima;
    miVehiculo.establecerVelocidadMaxima(velocidadMaxima);

    // Limpiar el buffer de entrada
    cin.ignore();

    cout << "Ingrese el tipo de combustible del vehiculo: ";
    string tipoCombustible;
    getline(cin, tipoCombustible);
    miVehiculo.establecerTipoCombustible(tipoCombustible);

    // Mostrar los detalles ingresados
    miVehiculo.mostrarDetalles();

    return 0;
}
