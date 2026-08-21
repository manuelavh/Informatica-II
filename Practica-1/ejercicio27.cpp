#include <iostream>

/*Escriba un programa que actue como una calculadora de operaciones de suma, resta,
 multiplicacion y division, el usuario debe ingresar los operandos y la operacion a realizar*/

using namespace std;

int main()
{
    int operacion;
    cout << "Ingrese la operacion que desea realizar donde: " << endl;
    cout << "1. SUMA" << endl;
    cout << "2. RESTA" << endl;
    cout << "3. MULTIPLICACION" << endl;
    cout << "4. DIVISION" << endl;
    cin >> operacion;

    if (operacion >= 1 && operacion <= 4) {

        switch (operacion) {

        case 1:{

            cout << "Seleccionaste la opcion SUMA" << endl;

            int cantidadNumeros;
            cout << "Ingrese la cantidad de numeros que desea operar: ";
            cin >> cantidadNumeros;

            float N;
            float suma = 0;
            for (int i = 1; i <= cantidadNumeros; ++i) {
                cout << "Ingrese el " << i << " numero:" << endl;
                cin >> N;
                suma = suma + N;
            }
                cout << "El total de la suma es: " << suma << endl;
            break;
        }


        case 2: {

            cout << "Seleccionaste la opcion RESTA" << endl;

            int cantidadNumeros;
            cout << "Ingrese la cantidad de numeros que desea operar: ";
            cin >> cantidadNumeros;

            float N;
            float resta;

            cout << "Ingrese el 1 numero: " << endl;
            cin >> N;

            resta = N;
            for (int i = 2; i <= cantidadNumeros; ++i) {
                cout << "Ingrese el " << i << " numero:" << endl;
                cin >> N;
                resta = resta - N;
            }
                cout << "El total de la resta es: " << resta << endl;
            break;
        }


        case 3: {

            cout << "Seleccionaste la opcion MULTIPLICACION" << endl;

            int cantidadNumeros;
            cout << "Ingrese la cantidad de numeros que desea operar: ";
            cin >> cantidadNumeros;

            float N;
            float multiplicacion = 1;
            for (int i = 1; i <= cantidadNumeros; ++i) {
                cout << "Ingrese el " << i << " numero:" << endl;
                cin >> N;
                multiplicacion = multiplicacion * N;
            }
                cout << "El total de la multiplicacion es: " << multiplicacion << endl;
            break;
        }


        case 4: {

            cout << "Seleccionaste la opcion DIVISION" << endl;

            float N1, N2;
            float division;
            float residuo;

            cout << "Ingrese el dividendo numero:" << endl;
            cin >> N1;

            cout << "Ingrese el divisor numero:" << endl;
            cin >> N2;

            division = N1 / N2;

            cout << "El total (cociente) de la division es: " << division << endl;
            break;
        }

    default:
        break;
    }

    } else {
        cout << "Ingrese una opcion (operacion) valida entre 1 y 4" << endl;
    }

    return 0;
}