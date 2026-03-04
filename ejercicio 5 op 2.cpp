#include <iostream>
using namespace std;

int addFive(int num) {
    return num + 5;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El resultado es: " << addFive(numero) << endl;

    return 0;
}
