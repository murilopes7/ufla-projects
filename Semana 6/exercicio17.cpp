#include <iostream>
using namespace std;

int calcularReverso(int numero)
{
    int reverso = 0;

    while (numero > 0)
    {
        int ultimoDigito = numero % 10;
        reverso = reverso * 10 + ultimoDigito;
        numero = numero / 10;
    }

    return reverso;
}

int main()
{
    int numero;
    cin >> numero;

    int resultado = calcularReverso(numero);
    cout << resultado << endl;

    return 0;
}