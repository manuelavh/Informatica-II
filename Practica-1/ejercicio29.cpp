#include <iostream>

/*Escriba un programa que adivine un numero A (entre 0 y 100) seleccionado por el
 usuario (el numero NO se ingresa al programa), el programa imprimira en pantalla un numero B
 y el usuario usara los sibolos ' > ' , ' < ' y ' = ' para indicarle al programa si B
 es mayor, menor o igual que A. El programa imprimira un nuevo número B, con base en simbolo
 ingresado por el usuario, y repetira el proceso hasta acertar el numero seleccionado por el usuario .*/

using namespace std;

int main()
{
    int inicioJuego;

    cout << "Soy un adivinador, deseas jugar?" << endl;
    cout << "Selecciona 1 para SI y 2 para NO: ";
    cin >> inicioJuego;

    if (inicioJuego == 1)
    {
        int respuesta;
        cout << "Has decidido jugar" << endl;
        cout << "Piensa un numero entre 0 y 100 y yo lo adivinare" << endl;
        cout << "Lo tienes?" << endl;
        cout << "Selecciona 1 para SI y 2 para NO: ";
        cin >> respuesta;

        if (respuesta == 1)
        {
            int minimo = 0;
            int maximo = 100;
            char simbolo;

            while (minimo <= maximo)
            {
                int intento = (minimo + maximo) / 2;

                cout << "Tu numero es " << intento << "?" << endl;
                cout << "Ingresa > si tu numero es mayor, < si es menor o = si es igual: ";
                cin >> simbolo;

                if (simbolo == '>')
                {
                    minimo = intento + 1;
                }
                else if (simbolo == '<')
                {
                    maximo = intento - 1;
                }
                else if (simbolo == '=')
                {
                    cout << "He adivinado! Tu numero es " << intento << "." << endl;
                    break;
                }
                else
                {
                    cout << "Simbolo no valido. Usa >, < o =." << endl;
                }
            }
        }
        else if (respuesta == 2)
        {
            cout << "Vuelve cuando tengas el numero pensado" << endl;
        }
        else
        {
            cout << "Selecciona una opcion valida" << endl;
        }
    }
    else if (inicioJuego == 2)
    {
        cout << "Hasta luego simple mortal" << endl;
    }
    else
    {
        cout << "Selecciona una opcion valida." << endl;
    }

    return 0;
}