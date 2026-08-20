#include <iostream>

/* Escriba un programa que pida dos numeros A y B
   e imprima en pantalla la division A/B con redondeo.*/

using namespace std;

int main()
{
    float A, B;

    cout << "Ingrese un numero: ";
    cin >> A;

    cout <<"Ingrese otro numero: ";
    cin >> B;

    float division = A/B;
    int resulDivisionEntera = division;
    float parteDecimal = division - resulDivisionEntera;

    if (parteDecimal >= 0.5) {
        resulDivisionEntera = resulDivisionEntera + 1;

        cout << "El resultado de: "<< A << "/" << B << " es: " << resulDivisionEntera << endl;
    }
    else {
        cout << "El resultado de: "<< A << "/" << B << " es: " << resulDivisionEntera << endl;
    }

    return 0;
}


/*
SUMANDO 0.5
    float division = A/B + 0.5;
    int resulDivisionEntera = division;
*/