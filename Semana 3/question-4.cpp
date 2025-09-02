/*
    Faça um programa que receba da entrada padrão um valor inteiro de três dígitos (100 < N < 999). O programa deve calcular e imprimir na saída padrão 
    a soma dos três dígitos e salvar em um arquivo saida.txt (sem acento) o produto entre os três dígitos.

    Entrada:

        Número inteiro de três dígitos.

    Saída (saída padrão):

        A soma entre os três dígitos.

    Saída (saida.txt):

        O produto entre os três dígitos.

    Exemplo de Entrada:

    919

    Exemplo de Saída (saída padrão):

    19

    Exemplo de Saída (saida.txt):

    81

    Exemplo de Entrada:

    254

    Exemplo de Saída (saída padrão):

    11

    Exemplo de Saída (saida.txt):

    40
*/


#include <iostream>
#include <fstream>
#include <cmath>
#include <string.h>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    // Declara as variáveis para as coordenadas e a distância
    int n;

    cin >> n;

    int digito1 = n / 100;
    int digito2 = (n / 10) % 10;
    int digito3 = n % 10;

    int soma = digito1 + digito2 + digito3;
    long int produto = digito1 * digito2 * digito3;

    cout << soma << endl;
    
    ofstream arquivo ("saida.txt");
    arquivo << produto << endl;

    arquivo.close();

    return 0;
}