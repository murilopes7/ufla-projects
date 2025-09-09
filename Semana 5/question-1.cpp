/*
    Faça um programa que leia uma sequência números positivos ou nulos em um arquivo chamado entrada.txt. Após isso, imprima: o menor valor,
    segundo menor valor, o maior valor e o segundo maior valor. Assuma que a sequência tem pelo menos dois números e que não há elementos repetidos.

    Entradas (arquivo entrada.txt):

        int n - Números que o usuário irá digitar.

    Saídas:

        Menor valor digitado (int).
        Segundo menor valor digitado (int).
        Maior valor digitado (int).
        Segundo maior valor digitado (int).


    Exemplos de Entradas e Saídas:

    Entradas (arquivo entrada.txt):
    3
    2
    1
    4
    5
    6
    7

    Saídas:
    1
    2
    7
    6

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream arquivo("entrada.txt");

    int numero, maior, segundo_maior, menor, segundo_menor;

    arquivo >> menor >> segundo_menor;
    if (menor > segundo_menor)
    {
        int temp = menor;
        menor = segundo_menor;
        segundo_menor = temp;
    }
    // Inicializa maiores também
    maior = segundo_menor;
    segundo_maior = menor;

    // Processa os demais
    while (arquivo >> numero)
    {
        if (numero < menor)
        {
            segundo_menor = menor;
            menor = numero;
        }
        else if (numero < segundo_menor)
            segundo_menor = numero;

        if (numero > maior)
        {
            segundo_maior = maior;
            maior = numero;
        }
        else if (numero > segundo_maior)
            segundo_maior = numero;
    }

    arquivo.close();


    // Saídas
    cout << menor << endl;
    cout << segundo_menor << endl;
    cout << maior << endl;
    cout << segundo_maior << endl;

    return 0;
}