#include <iostream>
using namespace std;

void mostrarArreglo(int numeros[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

void insertionSort(int numeros[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int clave = numeros[i];
        int j = i - 1;

        // Desplaza los elementos de numeros[0..i-1] que son mayores que la clave
        // a una posición adelante de su posición actual
        while (j >= 0 && numeros[j] > clave)
        {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = clave;
    }
}

int main()
{
    int numeros[] = {7, 3, 8, 2, 6, 4, 5};
    int n = 7;

    cout << "Arreglo original:" << endl;
    mostrarArreglo(numeros, n);

    // Llamada al algoritmo de ordenamiento
    insertionSort(numeros, n);

    cout << "Arreglo ordenado:" << endl;
    mostrarArreglo(numeros, n);

    return 0;
}