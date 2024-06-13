#include <iostream>
using namespace std;

int main() {
    float calificaciones[4];
    float suma = 0.0;
    float promedio;
    float max = 0.0;
    float min = 100.0;

    // Pedir las 4 calificaciones al usuario
    for (int i = 0; i < 4; i++) {
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];

        // Validar que la calificación esté entre 0 y 100
        while (calificaciones[i] < 0 || calificaciones[i] > 100) {
            cout << "Calificacion invalida. Ingrese una calificacion entre 0 y 100: ";
            cin >> calificaciones[i];
        }

        // Sumar la calificación para el cálculo del promedio
        suma += calificaciones[i];

        // Encontrar la calificación máxima
        if (calificaciones[i] > max) {
            max = calificaciones[i];
        }

        // Encontrar la calificación mínima
        if (calificaciones[i] < min) {
            min = calificaciones[i];
        }
    }

    // Calcular el promedio
    promedio = suma / 4;

    // Mostrar el resultado
    cout << "Promedio: " << promedio << endl;
    cout << "Calificacion maxima: " << max << endl;
    cout << "Calificacion minima: " << min << endl;

    return 0;
}

