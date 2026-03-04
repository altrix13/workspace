#include <iostream>
using namespace std;

int main() {

    int n;

    // Pedimos el número
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    // Declaramos el arreglo de tamaño n la cantidad que el usuario coloque
    int arreglo[n];

    // Llenamos el arreglo de forma descendente
    for (int i = 0; i < n; i++) {
        arreglo[i] = n - i;
    }

    // Mostramos el arreglo
    cout << "Arreglo descendente: ";

    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;
}