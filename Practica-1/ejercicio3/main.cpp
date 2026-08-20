#include <iostream> //Encabezado


/*Escriba un programa que pida dos números A y B
  e imprima en pantalla el mayor.*/

using namespace std;

int main() //Función principal del programa
{
    int A, B;
    cout << "Ingrese un numero: ";
    cin >> A;

    cout <<"Ingrese otro numero: ";
    cin >> B;

    if (A > B) {
        cout << "El numero mayor es: "<< A << endl;
    }
    else {
        cout << "El numero mayor es: " <<B << endl;
    }

    return 0;
}
