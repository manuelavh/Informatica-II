#include <iostream>

/*Escriba un programa que pida dos numeros A y B e imprima en pantalla
  el minimo comun multiplo entre los dos.*/

using namespace std;

int main()
{
    int A, B;

    cout << "Ingrese un numero: ";
    cin >> A;

    cout << "Ingrese un numero: ";
    cin >> B;

    if (A > B)
    {
        for (int i = A; ; ++i)
        {
            if (i % A == 0 && i % B == 0)
            {
                cout << "El MCM de " << A << " y " << B << " es: " << i << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = B; ; ++i)
        {
            if (i % A == 0 && i % B == 0)
            {
                cout << "El MCM de " << A << " y " << B << " es: " << i << endl;
                break;
            }
        }
    }

    return 0;
}