#include <iostream>

/*Escriba un programa que pida constantemente numeros hasta que
   ingrese el numero cero e imprima en pantalla la suma de todos
   los numeros ingresados.*/

using namespace std;

int main()
{
    int N;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (N != 0) {
        suma = suma + N;

        cout << "Ingrese otro numero: ";
        cin >> N;
    }

    cout << "El resultado de la suma de todos los numeros es: " << suma << endl;

    return 0;
}
