#include <iostream>
#include <cctype> // caja de herramientas para trabajar con caracteres

/*Escriba un programa que pida un un caracter C, si es una letra la debe
  convertir de mayuscula a minuscula y viceversa e imprimirla.*/

using namespace std;

int main()
{
    char C;
    cout << "Ingrese un caracter: ";
    cin >> C;

    if (isalpha(C)){

        if (isupper(C)){
            cout << "Usted ingreso " << C;
            C = tolower(C);
            cout << " la cual es una letra mayuscula, asi que se ha convertido en minuscula " << C << endl;

        } else {
            cout <<"Usted ingreso " << C;
            C = toupper(C);
            cout << " la cual es una letra minuscula, asi que se ha convertido en mayuscula " << C << endl;
        }

    } else {
        cout << "No hay una accion definida para el caracter ingresado" << endl;
    }
    return 0;
}
