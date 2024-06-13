#include <iostream>
using namespace std;

// Función recursiva para generar subconjuntos
void generarSubconjuntos(int arr[], int n, int index, int subconjunto[], int subIndex) {
    // Si el subconjunto no está vacío, imprimirlo
    if (subIndex > 0) {
        for (int i = 0; i < subIndex; i++) {
            cout << subconjunto[i];
        }
        cout << endl;
    }

    // Generar todos los posibles subconjuntos a partir del elemento actual
    for (int i = index; i < n; i++) {
        subconjunto[subIndex] = arr[i];  // Agregar el elemento actual al subconjunto
        generarSubconjuntos(arr, n, i + 1, subconjunto, subIndex + 1); // Llamada recursiva
    }
}

int main() {
    int n;

    // Solicitar al usuario el valor de n
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int arr[n];            // Arreglo para almacenar el conjunto original
    int subconjunto[n];    // Arreglo para almacenar el subconjunto actual

    // Llenar el arreglo con los números del 1 a n
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Generar y mostrar todos los subconjuntos no vacíos
    generarSubconjuntos(arr, n, 0, subconjunto, 0);

    return 0;
}

