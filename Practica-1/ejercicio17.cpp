#include <iostream>

/*Escriba un programa que pida constantemente numeros hasta que
   ingrese el numero cero e imprima en pantalla el mayor de todos
   los numeros ingresados.*/

using namespace std;

int main()
{
    int N;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (N != 0) {
        int numeroMayor = N;

        cout << "Ingrese otro numero: ";
        cin >> N;

        if (numeroMayor > N){
            cout << "\nEl numero mayor es: " << numeroMayor << endl;
        }
    }

    cout << "\nSe detuvo el programa (Ingreso el cero)" << endl;

    return 0;
}
