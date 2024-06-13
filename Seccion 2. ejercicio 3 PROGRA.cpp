#include <iostream>
#include <algorithm>

using namespace std;

void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void imprimirPermutaciones(int n) {
    int nums[10];
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }
    
    do {
        imprimirArreglo(nums, n);
    } while (next_permutation(nums, nums + n));
}

int main() {
    int n;
    cout << "Ingresa un numero n: ";
    cin >> n;
    
    cout << "Las permutaciones de los numeros del 1 al " << n << " son:" << endl;
    imprimirPermutaciones(n);
    
    return 0;
}
