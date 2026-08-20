#include <iostream>
#include <cmath> //caja de herramientas de funciones matematicas

/* Escriba un programa que pida dos numeros A y B
   e imprima en pantalla la division A/B con redondeo.*/

using namespace std;

int main()
{
    float A, B;
    cout << "Ingrese un numero: ";
    cin >> A;

    cout << "Ingrese otro numero: ";
    cin >> B;

    float division = A/B;

    cout << "El resultado de: "<< A << "/" << B << " es: " << round(division) << endl;

    return 0;
}
