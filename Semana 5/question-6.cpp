/*
    Anitta realizará um show em Lavras no dia 28 de setembro. Os ingressos começaram a ser vendidos dia 1o. de julho, mas foram lançados ingressos com descontos especiais no período de 06 de julho até 24 de julho. O desconto, dado para estudantes e adultos, ocorreu de acordo com a data da compra do ingresso.

    Valor do ingresso do dia 6 de julho até o dia 13 (inclusive):

        Estudantes: 15% de desconto
        Adultos: 10% de desconto

    Valor do ingresso a partir do dia 14 até o dia 24 de julho (inclusive):

        Estudantes: 10% de desconto
        Adultos: 5% de desconto

    Faça um programa que leia, a partir do arquivo ingresso.txt o valor do ingresso para assistir o show e, em seguida, leia as informações de várias entradas sobre o dia da compra do ingresso e a categoria (estudante ou adulto). O programa deve calcular e exibir, na saída padrão, o valor total recebido pela venda dos ingressos. Considere que a categoria será E para estudantes e A para adulto.

    Entradas (arquivo ingresso.txt):

        valor do ingresso (número real);
        dia da compra do ingresso (inteiro) para cada pessoa;
        categoria (estudante (E) ou adulto (A)) (char) para cada pessoa.

    Saídas:

        Valor total recebido pelos ingressos vendidos.

    Exemplo de Entrada (arquivo ingresso.txt):

    100.00
    13
    E
    14
    E
    15
    A
    15
    A
    6
    E
    3
    A

    Exemplo de Saída:

    550

    Exemplo de Entrada (arquivo ingresso.txt):

    200.00
    3
    A

    Exemplo de Saída:

    200.0
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Your code will go here

    ifstream ingresso("ingresso.txt");

    float valor, ingressos = 0.0, valor_total = 0.0;
    int dia;
    char categoria;

    ingresso >> valor;

    while (ingresso >> dia >> categoria)
    {   
        if (dia >= 6 and dia <= 13)
        {
            if (categoria == 'E')
                ingressos = valor - valor * 0.15;
            else if (categoria == 'A')
                ingressos = valor - valor * 0.1;

            valor_total += ingressos;
        }

        else if (dia >= 14 and dia <= 24)
        {
            if (categoria == 'E')
                ingressos = valor - valor * 0.1;

            else if (categoria == 'A')
                ingressos = valor - valor * 0.05;
                
            valor_total += ingressos;
        }

        else valor_total += valor;
    }

    cout << valor_total << endl;

    ingresso.close();
    return 0;
}