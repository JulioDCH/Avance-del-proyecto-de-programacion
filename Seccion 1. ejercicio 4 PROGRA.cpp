#include <iostream>
using namespace std;

void collatz(int n) {
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
    }
    cout << n << endl;
}

int main() {
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    collatz(n);
    cout << "La conjetura de Collatz se cumple para el numero " << n << "." << endl;
    system("pause");
    return 0;
}
