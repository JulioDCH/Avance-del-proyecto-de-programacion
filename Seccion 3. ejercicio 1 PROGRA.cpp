#include <iostream>
using namespace std;

// Función para generar el Triángulo de Pascal
void generarTrianguloPascal(int n) {
    int arr[n+1]; // Arreglo para almacenar los elementos de una fila del triángulo
    arr[0] = 1;   // El primer elemento siempre es 1

    // Imprimir la primera fila
    cout << arr[0] << endl;

    // Generar el Triángulo de Pascal fila por fila
    for (int i = 1; i < n; i++) {
        // Inicializar la primera y última posición de la fila actual
        arr[i] = 1;

        // Actualizar las posiciones intermedias de la fila actual
        for (int j = i - 1; j > 0; j--) {
            arr[j] = arr[j] + arr[j - 1];
        }

        // Imprimir la fila actual
        for (int k = 0; k <= i; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    // Solicitar al usuario el número de filas del Triángulo de Pascal
    cout << "Ingrese el numero de filas del Triangulo de Pascal: ";
    cin >> n;

    // Generar y mostrar el Triángulo de Pascal
    generarTrianguloPascal(n);

    return 0;
}

