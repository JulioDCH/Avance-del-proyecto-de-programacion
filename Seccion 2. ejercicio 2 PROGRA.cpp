#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Funcion que realiza la integracion numerica usando el metodo del trapecio
float trapezoidal(float (*func)(float), float a, float b, int n) {
    float h = (b - a) / n;
    float integral = (func(a) + func(b)) / 2.0;
    for (int i = 1; i < n; ++i) {
        integral += func(a + i * h);
    }
    integral *= h;
    return integral;
}

// Funciones a integrar
float f1(float x) {
    return x / (x * x + 3);
}

float f2(float x) {
    return 1 / (1 + x * x);
}

float f3(float x) {
    return sin(x);
}

float f4(float x) {
    return sin(x) * cos(x);
}

int main() {
    int a, b, n;
    cout << "Ingrese el limite inferior: ";
    cin >> a;
    cout << "Ingrese el limite superior: ";
    cin >> b;
    cout << "Ingrese el numero de subdivisiones: ";
    cin >> n;

    cout << " " << endl;
    cout << "La integral de x/(x^2+3) dx de " << a << " a " << b << " es " << fixed << setprecision(6) << trapezoidal(f1, a, b, n) << "." << endl;
    cout << "La integral de dx/(1+x^2) de " << a << " a " << b << " es " << fixed << setprecision(6) << trapezoidal(f2, a, b, n) << "." << endl;
    cout << "La integral de sin(x) dx de " << a << " a " << b << " es " << fixed << setprecision(6) << trapezoidal(f3, a, b, n) << "." << endl;
    cout << "La integral de sin(x)*cos(x) dx de " << a << " a " << b << " es " << fixed << setprecision(6) << trapezoidal(f4, a, b, n) << "." << endl;
    cout << "fin del programa." << endl;
    system("pause");
    return 0;
}
