#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero del 1 al 12: ";
    cin >> numero;

    // Validar que el n�mero est� en el rango v�lido
    if (numero < 1 || numero > 12) {
        cout << "El numero ingresado esta fuera del rango valido." << endl;
        return 0;
    }

    // Mostrar la tabla de multiplicar del n�mero ingresado
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}

