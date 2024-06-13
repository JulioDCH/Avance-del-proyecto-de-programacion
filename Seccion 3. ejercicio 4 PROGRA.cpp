#include <iostream>

using namespace std;

const int NUM_TORRES = 7;
const int NUM_PISOS = 20;
const int NUM_DEPARTAMENTOS = 6;

struct Departamento {
    int habitantes;
};

struct Piso {
    Departamento departamentos[NUM_DEPARTAMENTOS];
};

struct Torre {
    Piso pisos[NUM_PISOS];
};

int main() {
    Torre torres[NUM_TORRES];
    
    for (int torre = 0; torre < NUM_TORRES; ++torre) {
        for (int piso = 0; piso < NUM_PISOS; ++piso) {
            for (int departamento = 0; departamento < NUM_DEPARTAMENTOS; ++departamento) {
                cout << "Ingrese la cantidad de habitantes en la torre " << (torre + 1)
                     << ", piso " << (piso + 1) << ", departamento " << (departamento + 1) << ": ";
                cin >> torres[torre].pisos[piso].departamentos[departamento].habitantes;
            }
        }
    }
    
    int habitantes_totales = 0;
    for (int torre = 0; torre < NUM_TORRES; ++torre) {
        for (int piso = 0; piso < NUM_PISOS; ++piso) {
            for (int departamento = 0; departamento < NUM_DEPARTAMENTOS; ++departamento) {
                habitantes_totales += torres[torre].pisos[piso].departamentos[departamento].habitantes;
            }
        }
    }
    cout << "a. Cantidad total de habitantes del complejo: " << habitantes_totales << endl;
    
    for (int torre = 0; torre < NUM_TORRES; ++torre) {
        int total_habitantes_torre = 0;
        for (int piso = 0; piso < NUM_PISOS; ++piso) {
            for (int departamento = 0; departamento < NUM_DEPARTAMENTOS; ++departamento) {
                total_habitantes_torre += torres[torre].pisos[piso].departamentos[departamento].habitantes;
            }
        }
        double promedio_piso = static_cast<double>(total_habitantes_torre) / (NUM_PISOS * NUM_DEPARTAMENTOS);
        cout << "   Torre " << (torre + 1) << ": " << promedio_piso << " habitantes por piso" << endl;
    }
    
    for (int torre = 0; torre < NUM_TORRES; ++torre) {
        int total_habitantes_torre = 0;
        for (int piso = 0; piso < NUM_PISOS; ++piso) {
            for (int departamento = 0; departamento < NUM_DEPARTAMENTOS; ++departamento) {
                total_habitantes_torre += torres[torre].pisos[piso].departamentos[departamento].habitantes;
            }
        }
        double promedio_torre = static_cast<double>(total_habitantes_torre) / (NUM_PISOS * NUM_DEPARTAMENTOS);
        cout << "   Torre " << (torre + 1) << ": " << promedio_torre << " habitantes por departamento" << endl;
    }
    
    return 0;
}

