#include <iostream>

/*Escriba un programa que pida un numero N e imprima
  en pantalla su tabla de multiplicar hasta 10*N.*/

using namespace std;

int main()
{
    int N;

    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "\nLos multiplos de " << N << " son:\n";
    int multiplos = 0;
    for (int i = 1; i <= 10; ++i) {
        multiplos = N * i;

        cout << N << " x " << i << " = " << multiplos << endl;
    }
    return 0;
}
