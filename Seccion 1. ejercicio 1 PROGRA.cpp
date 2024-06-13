#include <iostream>
using namespace std;
int main() {
    int numero, va;
    
    cout << "Ingresa un numero: ";
    cin >> numero;
    va= numero;
    
    if (numero < 0) {
        numero = -numero;
    }
    
    cout << "El valor absoluto de " << va << " es: " << numero << endl;
    
    return 0;
}

