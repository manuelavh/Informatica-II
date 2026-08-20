#include <iostream>

/*Escriba un programa que pida un numero N e imprima
  el perimetro y area de un circulo con radio N.*/

using namespace std;

int main()
{
    float N;
    cout << "Ingrese un numero: ";
    cin >> N;

    float perimetro = 2 * 3.1416 * N;
    float area = 3.1416 * (N*N);

    cout << "El perimetro es: " << perimetro << endl;
    cout <<"El area del circulo es: " << area << endl;

    return 0;


// Tambien podria definir una variable que se llame pi = 3.1416
}
