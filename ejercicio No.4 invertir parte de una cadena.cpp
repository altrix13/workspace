#include <iostream>
#include <string>
using namespace std;

int main() {

    string texto;
    int a, b;

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    cout << "Ingrese indice inicial (a): ";
    cin >> a;

    cout << "Ingrese indice final (b): ";
    cin >> b;

    // Ajustar b si es mayor que el ultimo indice valido
    if (b >= texto.length()) {
        b = texto.length() - 1;
    }

    // Invertir la parte entre a y b
    while (a < b) {
        char temp = texto[a];
        texto[a] = texto[b];
        texto[b] = temp;

        a++;
        b--;
    }

    cout << "Resultado: " << texto << endl;

    return 0;
}