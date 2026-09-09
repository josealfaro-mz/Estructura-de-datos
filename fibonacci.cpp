/*
 * Actividad 7 - La secuencia de Fibonacci
 * Programa que calcula, mediante una funcion recursiva, los terminos
 * de la secuencia de Fibonacci desde F(0) hasta F(n), donde n es
 * ingresado por el usuario.
 */

#include <iostream>
using namespace std;

// Funcion recursiva que calcula el n-esimo termino de Fibonacci
long long fibonacci(int n) {
    // Casos base
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Caso recursivo
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "=== Calculadora de la secuencia de Fibonacci (recursiva) ===" << endl;
    cout << "Ingrese hasta que termino desea calcular la serie (n >= 0): ";
    cin >> n;

    // Validacion basica de entrada
    if (n < 0) {
        cout << "Por favor ingrese un numero entero no negativo." << endl;
        return 1;
    }

    cout << endl;
    for (int i = 0; i <= n; i++) {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}
