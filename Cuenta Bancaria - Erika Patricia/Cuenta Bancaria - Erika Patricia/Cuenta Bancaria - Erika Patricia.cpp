// Cuenta Bancaria - Erika Patricia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

// Clase Padre: CuentaBancaria
class CuentaBancaria {
public:
    string titular;
    double saldo;

    CuentaBancaria(string _titular, double _saldo) {
        titular = _titular;
        saldo = _saldo;
    }

    void mostrarDatos() {
        cout << "Titular: " << titular << endl;
        cout << "Saldo: Q" << saldo << endl;
    }
};

// Subclases
class CuentaPremium : public CuentaBancaria {
public:
    CuentaPremium(string _titular, double _saldo) : CuentaBancaria(_titular, _saldo) {}
};

class CuentaMonetaria : public CuentaBancaria {
public:
    CuentaMonetaria(string _titular, double _saldo) : CuentaBancaria(_titular, _saldo) {}
};

class CuentaAhorro : public CuentaBancaria {
public:
    CuentaAhorro(string _titular, double _saldo) : CuentaBancaria(_titular, _saldo) {}
};

class CuentaPlazoFijo : public CuentaBancaria {
public:
    CuentaPlazoFijo(string _titular, double _saldo) : CuentaBancaria(_titular, _saldo) {}
};

int main() {
    int opcion;
    string titular;
    double saldo;

    cout << "Ingrese el nombre del titular: ";
    getline(cin, titular);
    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;

    cout << "\nSeleccione el tipo de cuenta:\n";
    cout << "1. Cuenta Premium\n";
    cout << "2. Cuenta Monetaria\n";
    cout << "3. Cuenta de Ahorro\n";
    cout << "4. Cuenta a Plazo Fijo\n";
    cout << "Opción: ";
    cin >> opcion;

    CuentaBancaria* cuenta = nullptr;

    if (opcion == 1) cuenta = new CuentaPremium(titular, saldo);
    else if (opcion == 2) cuenta = new CuentaMonetaria(titular, saldo);
    else if (opcion == 3) cuenta = new CuentaAhorro(titular, saldo);
    else if (opcion == 4) cuenta = new CuentaPlazoFijo(titular, saldo);
    else {
        cout << "Opción inválida." << endl;
        return 1;
    }

    cout << "\nDatos de la cuenta creada:\n";
    cuenta->mostrarDatos();

    delete cuenta;
    return 0;
}