#include <iostream>
#include <string>
using namespace std;
// Descripción breve del programa:
// Este programa calcula la suma de los números naturales hasta el valor ingresado por el usuario.
// Autor: Brisa Reyes - A00123456
// Fecha de creación/modificación: 18/08/2023

int calcularRecursividad(int n) {
    // Calcula la suma de los números naturales hasta n utilizando recursividad.
    if (n == 1) {
        return 1;
    } else {
        return n + calcularRecursividad(n - 1);
    }
}

int calcularIterativa(int n) {
    // Calcula la suma de los números naturales hasta n utilizando iteración.
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int calcularDirecta(int n) {
    // Calcula la suma de los números naturales hasta n utilizando la fórmula directa.
    int suma = (n * (n + 1)) / 2;
    return suma;
}

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int resRecursivo = calcularRecursividad(n);
    cout << "La suma usando recursividad es: " << resRecursivo << endl;

    int resIterativo = calcularIterativa(n);
    cout << "La suma usando iteración es: " << resIterativo << endl;

    int resDirecta = calcularDirecta(n);
    cout << "La suma usando fórmula directa es: " << resDirecta << endl;

    return 0;
}




