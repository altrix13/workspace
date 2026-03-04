#include <iostream>
using namespace std;

int main() {

    int cantidad;

    // Pedimos cuantos números ingresara el usuario
    cout << "Cuantos numeros desea ingresar? ";
    cin >> cantidad;

    // Declaramos los arreglos
    int numeros[cantidad];
    int inversos[cantidad];

    // Llenamos el primer arreglo
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Generamos el arreglo con el inverso aditivo
    for (int i = 0; i < cantidad; i++) {
        inversos[i] = numeros[i] * (-1);
    }

    // Mostramos el arreglo resultante
    cout << "Arreglo con inversos aditivos: ";
    for (int i = 0; i < cantidad; i++) {
        cout << inversos[i] << " ";
    }

    return 0;
}