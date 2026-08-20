#include <iostream>
#include <cmath>

/* Escriba un programa que pida dos numeros A y B
   e imprima en pantalla la division A/B con redondeo.*/

using namespace std;

int main() //Función principal del programa
{
    float A, B;
    cout << "Ingrese un numero: ";
    cin >> A;

    cout <<"Ingrese otro numero: ";
    cin >> B;

    float division = A/B;

    cout <<"El resultado de: "<< A << "/" << B << " es: " << round(division) << endl;

    return 0;
}
