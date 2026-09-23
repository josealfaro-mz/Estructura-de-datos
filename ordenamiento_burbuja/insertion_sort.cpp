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
    int comparaciones = 0;
    int desplazamientos = 0;

    for (int i = 1; i < n; i++)
    {
        int clave = numeros[i];
        int j = i - 1;

        cout << "\nInsertando: " << clave << endl;

        // Comparamos y desplazamos elementos
        while (j >= 0)
        {
            comparaciones++;
            if (numeros[j] > clave)
            {
                numeros[j + 1] = numeros[j]; // Desplazamiento
                desplazamientos++;
                j--;
            }
            else
            {
                break; // El elemento está en la posición correcta respecto a la parte ordenada
            }
        }

        numeros[j + 1] = clave; // Inserción del elemento
        mostrarArreglo(numeros, n);
    }

    cout << "\n========================================" << endl;
    cout << "       ESTADISTICAS" << endl;
    cout << "========================================" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Desplazamientos: " << desplazamientos << endl;
}

int main()
{
    int numeros[] = {7, 3, 8, 2, 6, 4, 5};
    int n = 7;

    cout << "Arreglo original:" << endl;
    mostrarArreglo(numeros, n);

    insertionSort(numeros, n);

    return 0;
}