/*
    Escreva um programa que, dado o valor inteiro de reais, determine a quantidade de cada tipo de nota necessária para totalizar esse valor, de modo a minimizar
    a quantidade de cédulas a serem emitidas por um caixa eletrônico.
    Considere que existem apenas 3 tipos de notas: R$ 100, R$50 e R$10. Por exemplo R$50,00 equivalem a uma única nota de cinquenta Reais. R$180,00 equivalem a
    uma nota de R$100,00, uma nota de R$ 50 e três notas de R$ 10.
    A quantidade de cada nota deve ser gravada no arquivo saque.txt.

    Entrada:

        Valor inteiro representando a quantia a ser sacada.

    Saídas (arquivo saque.txt):

        Três valores inteiros que indicam o número de cédulas de R$ 100, R$ 50 e R$10 a serem emitidas, respectivamente.

    Exemplo de Entrada:

    630

    Exemplo de Saídas (arquivo saque.txt):

    6
    0
    3

    Exemplo de Entrada:

    70

    Exemplo de Saída (arquivo saque.txt):

    0
    1
    2
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float nota10 = 10.0, nota50 = 50.0, nota100 = 100.0, numero_comparativo;
    float valor;

    int n10, n50, n100;

    cin >> valor;

    n100 = (int)valor / nota100;

    if (n100 != 0)
    {
        numero_comparativo = valor - nota100 * n100;
        n50 = (int)numero_comparativo / nota50;

        n10 = (int)numero_comparativo / nota10;

        if (n50 != 0)
        {
            numero_comparativo = valor - nota100 * n100 - nota50 * n50;
            n10 = (int)numero_comparativo / nota10;
        }
    }
    else
    {
        n50 = (int)valor / nota50;
        numero_comparativo = valor - nota100 * n100;

        n10 = (int)numero_comparativo / nota10;

        if (n50 != 0)
        {
            numero_comparativo = valor - nota100 * n100 - nota50 * n50;
            n10 = (int)numero_comparativo / nota10;
        }
    }

    ofstream arquivo("saque.txt");

    arquivo << n100 << endl
            << n50 << endl
            << n10 << endl;

    return 0;
}