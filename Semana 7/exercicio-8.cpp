/*
    Faça um programa que receba o nome de dez clientes de um restaurante e armazene-os em um vetor. Em um segundo vetor, armazene a quantidade de
    refeições feitas por cada um dos dez clientes. Sabe-se que, a cada dez refeições, a refeição seguinte é grátis e sabe-se também que os clientes pagam
    cada refeição logo após consumirem.

    Faça então um programa que mostre o nome de todos os clientes, com a quantidade de refeições que eles efetivamente pagaram.

    Entrada:

        Dez nomes de clientes.
        Dez quantidades de refeições dos clientes.

    Saída:

        Sequência com o nome de cada cliente e a quantidade de refeições que eles precisarão pagar.

    Exemplo de entrada:

    Ana Andre Bruno Carlos Diego Fabiana Gabriela Jaime Livia Maria
    45 30 19 28 43 59 100 8 10 12

    Exemplo de saída:

    Ana 41
    Andre 28
    Bruno 18
    Carlos 26
    Diego 40
    Fabiana 54
    Gabriela 91
    Jaime 8
    Livia 10
    Maria 11

*/

#include <iostream>
using namespace std;

int main()
{
    string nomes[10];
    int refeicoes[10] = {0};

    for (int i = 0; i < 10; i++)
        cin >> nomes[i];

    for (int i = 0; i < 10; i++)
        cin >> refeicoes[i];

    int quantidade[10] = {0}; 
    int refeicoes_quantidade[10] = {0};

    // 43 - 10 ; 33 - 10 ; 23 - 10 ; 13 - 10
    // 1 -> 2 -> 3 -> 4 
    for (int i = 0; i < 10; i++){
        refeicoes_quantidade[i] = refeicoes[i];
        while (refeicoes_quantidade[i] > 10){
            quantidade[i]++;
            refeicoes_quantidade[i] -= 11;
        }

        cout << nomes[i] << " " << refeicoes[i] - quantidade[i] << endl;

    }

    return 0;
}
