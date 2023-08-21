#include <iostream>
#include <vector>
#include <cstdlib>  // Para la funci�n rand()
#include <ctime>    // Para la funci�n time()

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const int tamano = 10;  // Tama�o del vector
    vector<int> numeros(tamano);

    // Inicializar la semilla para generar n�meros aleatorios
    srand(time(0));

    // Llenar el vector con n�meros aleatorios y contar los primos
    int contadorPrimos = 0;
    for (int i = 0; i < tamano; i++) {
        numeros[i] = rand() % 100;  // Generar n�mero aleatorio entre 0 y 99

        if (esPrimo(numeros[i])) {
            contadorPrimos++;
        }
    }

    // Mostrar el vector
    cout << "Vector: ";
    for (int i = 0; i < tamano; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Mostrar el resultado
    cout << "Cantidad de n�meros primos en el vector: " << contadorPrimos << endl;

    return 0;
}

