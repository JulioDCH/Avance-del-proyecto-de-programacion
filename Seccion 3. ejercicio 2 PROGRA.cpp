#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string seleccionar_palabra() {
    const string palabras[] = {"programacion", "cplus", "ahorcado", "computadora", "algoritmo"};
    int num_palabras = sizeof(palabras) / sizeof(palabras[0]);
    int indice = rand() % num_palabras;
    return palabras[indice];
}

void mostrar_estado(const string& palabra, const bool letras_adivinadas[]) {
    for (size_t i = 0; i < palabra.length(); ++i) {
        if (letras_adivinadas[i]) {
            cout << palabra[i];
        } else {
            cout << "_";
        }
    }
    cout << endl;
}

bool todas_letras_adivinadas(const string& palabra, const bool letras_adivinadas[]) {
    for (size_t i = 0; i < palabra.length(); ++i) {
        if (!letras_adivinadas[i]) {
            return false;
        }
    }
    return true;
}

void jugar_ahorcado() {
    string palabra = seleccionar_palabra();
    bool letras_adivinadas[palabra.length()];
    for (size_t i = 0; i < palabra.length(); ++i) {
        letras_adivinadas[i] = false;
    }

    int intentos_restantes = 6;
    bool adivinada = false;

    cout << "Bienvenido al juego del ahorcado!" << endl;

    while (intentos_restantes > 0 && !adivinada) {
        mostrar_estado(palabra, letras_adivinadas);
        cout << "Intentos restantes: " << intentos_restantes << endl;
        cout << "Introduce una letra: ";
        char letra;
        cin >> letra;

        bool letra_encontrada = false;
        for (size_t i = 0; i < palabra.length(); ++i) {
            if (palabra[i] == letra) {
                letras_adivinadas[i] = true;
                letra_encontrada = true;
            }
        }

        if (!letra_encontrada) {
            intentos_restantes--;
            cout << "Letra incorrecta!" << endl;
        } else {
            cout << "Letra correcta!" << endl;
        }

        adivinada = todas_letras_adivinadas(palabra, letras_adivinadas);
    }

    if (adivinada) {
        cout << "Felicidades! Has adivinado la palabra: " << palabra << endl;
    } else {
        cout << "Lo siento, has perdido. La palabra era: " << palabra << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Semilla para el generador de números aleatorios
    jugar_ahorcado();
    return 0;
}
