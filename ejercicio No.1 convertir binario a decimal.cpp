#include <iostream>   // Permite usar cin y cout
#include <string>     // Permite usar el tipo de dato string

using namespace std;

int main() {

    // Declaramos una variable tipo string para guardar el número binario
    string binario;

    // Variable donde se almacenará el resultado decimal
    int decimal = 0;

    // Variable que representa las potencias de 2 (empieza en 2^0 = 1)
    int potencia = 1;

    // Pedimos al usuario que ingrese el número binario
    cout << "Ingrese un numero binario: ";
    cin >> binario;

    // Recorremos el número desde el último carácter hasta el primero
    for (int i = binario.length() - 1; i >= 0; i--) {

        // Si el carácter actual es '1'
        if (binario[i] == '1') {

            // Sumamos la potencia actual al resultado decimal
            decimal = decimal + potencia;
        }

        // Multiplicamos la potencia por 2 para la siguiente posición
        potencia = potencia * 2;
    }

    // Mostramos el resultado final convertido a decimal
    cout << "El numero decimal es: " << decimal << endl;

    return 0;  // Finaliza el programa correctamente
}