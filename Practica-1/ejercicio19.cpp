#include <iostream>

/*Escriba un programa que pida un numero N e imprima si es o no
  un numero primo.*/

using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;
    int division;

    for (int i = 2; i < N; ++i) {
        division = N % i;

        if (division == 0) {
            cout << N << " no es un numero primo" << endl;
            break;
        }
        else {
            cout << N << " es un numero primo" << endl;
        }
    }
    return 0;
}
