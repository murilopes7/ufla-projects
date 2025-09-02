/*
    Escreva um programa que leia do arquivo teatro.txt o custo de realização de um espetáculo teatral e o preço do convite desse espetáculo, escritos em linhas diferentes. O programa deve calcular e mostrar a quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado. Esse número de convites deve ser redondo, pois não é possível vender frações do convite. O número de convites também deve ser armazenado em um arquivo chamado convite.txt.

    Entrada (arquivo teatro.txt):

        Número real definindo o custo da realização do espetáculo teatral, em reais (R$);
        Número real definindo o preço de cada convite, em reais (R$).

    Saída (saída padrão):

        Número inteiro representando o número de convites necessários para cobrir o custo de realização.

    Saída (arquivo convite.txt):

        Número inteiro representando o número de convites necessários para cobrir o custo de realização.

    Exemplo de entrada (conteúdo do arquivo):

    5000.00
    35.00

    Exemplo de saída (na saída padrão e no arquivo convite.txt):

    143

    Exemplo de Entrada:

    3874.65
    10.50

    Exemplo de saída (na saída padrão e no arquivo convite.txt):

    370
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    //string file_1, file_2, file_3;
    //cin >> file_1 >> file_2 >> file_3;

    ifstream arquivo1 ("teatro.txt");
    ofstream arquivo2 ("convite.txt");

    float custo, preco;
    arquivo1 >> custo >> preco;
    int pessoas;

    pessoas = (int) ceil(custo / preco);
    cout << pessoas << endl;
    arquivo2 << pessoas << endl;

    arquivo1.close();
    arquivo2.close();

    return 0;
}
