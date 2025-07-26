//Programa de Conversion de Unidades con ayuda de GitHub Copilot

#include <iostream>
#include <limits>
using namespace std;

void limpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int leerOpcion(int min, int max) {
    int opcion;
    while (true) {
        cout << "Seleccione una opcion: ";
        if (cin >> opcion && opcion >= min && opcion <= max) {
            limpiarEntrada();
            return opcion;
        } else {
            cout << "Entrada no valida. Intente de nuevo." << endl;
            limpiarEntrada();
        }
    }
}

double leerValor() {
    double valor;
    while (true) {
        cout << "Ingrese el valor: ";
        if (cin >> valor) {
            limpiarEntrada();
            return valor;
        } else {
            cout << "Entrada no valida. Intente de nuevo." << endl;
            limpiarEntrada();
        }
    }
}

void mostrarMenu() {
    cout << "Menu de opciones: " << endl;
    cout << "1. Convertir Longitud" << endl;
    cout << "2. Convertir Peso" << endl;
    cout << "3. Convertir Temperatura" << endl;
    cout << "4. Salir" << endl;
}



// Ampliar opciones de conversión en longitud, peso y temperatura

void convertirLongitud() {
    cout << "Convertir Longitud:" << endl;
    cout << "1. Metros a Kilometros" << endl;
    cout << "2. Kilometros a Metros" << endl;
    cout << "3. Metros a Centimetros" << endl;
    cout << "4. Centimetros a Metros" << endl;
    cout << "5. Millas a Kilometros" << endl;
    cout << "6. Kilometros a Millas" << endl;
    int opcion = leerOpcion(1, 6);
    double valor = leerValor();
    switch (opcion) {
        case 1:
            cout << valor << " metros = " << valor / 1000 << " kilometros" << endl;
            break;
        case 2:
            cout << valor << " kilometros = " << valor * 1000 << " metros" << endl;
            break;
        case 3:
            cout << valor << " metros = " << valor * 100 << " centimetros" << endl;
            break;
        case 4:
            cout << valor << " centimetros = " << valor / 100 << " metros" << endl;
            break;
        case 5:
            cout << valor << " millas = " << valor * 1.60934 << " kilometros" << endl;
            break;
        case 6:
            cout << valor << " kilometros = " << valor / 1.60934 << " millas" << endl;
            break;
    }
}

void convertirPeso() {
    cout << "Convertir Peso:" << endl;
    cout << "1. Kilogramos a Libras" << endl;
    cout << "2. Libras a Kilogramos" << endl;
    cout << "3. Gramos a Kilogramos" << endl;
    cout << "4. Kilogramos a Gramos" << endl;
    cout << "5. Onzas a Gramos" << endl;
    cout << "6. Gramos a Onzas" << endl;
    int opcion = leerOpcion(1, 6);
    double valor = leerValor();
    switch (opcion) {
        case 1:
            cout << valor << " kg = " << valor * 2.20462 << " libras" << endl;
            break;
        case 2:
            cout << valor << " libras = " << valor / 2.20462 << " kg" << endl;
            break;
        case 3:
            cout << valor << " gramos = " << valor / 1000 << " kg" << endl;
            break;
        case 4:
            cout << valor << " kg = " << valor * 1000 << " gramos" << endl;
            break;
        case 5:
            cout << valor << " onzas = " << valor * 28.3495 << " gramos" << endl;
            break;
        case 6:
            cout << valor << " gramos = " << valor / 28.3495 << " onzas" << endl;
            break;
    }
}

void convertirTemperatura() {
    cout << "Convertir Temperatura:" << endl;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Fahrenheit a Celsius" << endl;
    cout << "3. Celsius a Kelvin" << endl;
    cout << "4. Kelvin a Celsius" << endl;
    cout << "5. Fahrenheit a Kelvin" << endl;
    cout << "6. Kelvin a Fahrenheit" << endl;
    int opcion = leerOpcion(1, 6);
    double valor = leerValor();
    switch (opcion) {
        case 1:
            cout << valor << " °C = " << (valor * 9.0 / 5.0) + 32 << " °F" << endl;
            break;
        case 2:
            cout << valor << " °F = " << (valor - 32) * 5.0 / 9.0 << " °C" << endl;
            break;
        case 3:
            cout << valor << " °C = " << valor + 273.15 << " K" << endl;
            break;
        case 4:
            cout << valor << " K = " << valor - 273.15 << " °C" << endl;
            break;
        case 5:
            cout << valor << " °F = " << ((valor - 32) * 5.0 / 9.0) + 273.15 << " K" << endl;
            break;
        case 6:
            cout << valor << " K = " << ((valor - 273.15) * 9.0 / 5.0) + 32 << " °F" << endl;
            break;
    }
}

int main()
{
    int opcion;
    do {
        mostrarMenu();
        opcion = leerOpcion(1, 4);
        switch (opcion) {
            case 1: 
                convertirLongitud();
                break;
            case 2:
                convertirPeso();
                break;
            case 3:
                convertirTemperatura();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
        }
    } while (opcion != 4);
    return 0; 
}