#include <iostream>

/*Escriba un programa que pida un numero N e imprima en pantalla
  la cantidad de digitos de N.*/

using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "Ingresaste el numero " << N;

    int cantidad = 0;
    while (N != 0) {
        N = N/10;
        cantidad = cantidad + 1;
    }
    cout << " la cantidad de digitos que tiene son: " << cantidad << endl;
    return 0;
}