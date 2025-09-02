/*
    Faça um programa que receba dois valores, um representando horas e outro representando minutos, calcule e armazene em um arquivo de saída:
    a) a hora lida (somente o valor relativo às horas) convertida em minutos;
    b) o total dos minutos, ou seja, os minutos lidos mais a conversão anterior;
    c) o total dos minutos (conversão anterior) convertidos em segundos.

    Entrada:

        Um número inteiro representando horas.
        Um número inteiro representando minutos.

    Saída (conteúdo do arquivo saida.txt:

        Conforme especificado nos itens a, b e c do enunciado, na respectiva ordem.

    Exemplo de Entrada:

    2
    28

    Exemplo de Saída (conteúdo do arquivo saida.txt):

    120
    148
    8880

    Exemplo de Entrada:

    6
    3

    Exemplo de Saída (conteúdo do arquivo saida.txt):

    360
    363
    21780

*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    ofstream arquivo2 ("saida.txt");

    int horas, minutos;
    cin >> horas >> minutos;

    arquivo2 << horas * 60 << endl 
             << horas * 60 + minutos << endl
             << (horas * 60 + minutos) * 60 << endl;
    arquivo2.close();

    return 0;
}
