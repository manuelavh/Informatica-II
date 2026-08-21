#include <iostream>

/*Escriba un programa que pida un numero N e imprima
  todos los divisores de N.*/

using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "los divisores de " << N << " son: " << endl;

    for (int i = 1; i <= N; ++i) {
        char comprobacion = N % i;

        if (comprobacion == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
