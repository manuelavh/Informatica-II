#include <iostream>

/*Escriba un programa que pida un numero N e imprima
  en pantalla la suma de todos los numeros entre 0 y N
  (incluyendose el mismo).*/

using namespace std;

int main()
{
    int N;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 0; i <= N; ++i) {
        suma = suma + i;
    }
    cout << "la sumatoria desde 0 hasta " << N << " es: " << suma << endl;

    return 0;
}
