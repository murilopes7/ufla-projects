/*


As rampas de acesso devem ter inclinação máxima de 8%, ou seja, rampas com inclinações acima de 8% são consideradas inadequadas. O cálculo da inclinação (dado em porcentagem) de uma rampa é dada pela seguinte equação: inclinacao = altura x 100 / base (comprimento da projeção horizontal da rampa). Crie um programa que calcule e exiba a inclinação de um acesso em um prédio formado por N rampas. Por fim, mostre quantas rampas estão adequadas (possuem inclinação menor ou igual a 8%).

Este programa deve conter um subprograma (função). O primeiro subprograma recebe dois números inteiros positivos como parâmetros e retorna um número float com o respectivo valor da inclinação.

Entradas:

    número inteiro positivo que determina a quantidade de rampas
    dois números inteiros positivos na mesma linha (separados por espaço), sendo o primeiro valor referente a altura (cm) e segundo valor referente a base (cm)

Saídas:

    números em ponto flutuante com as inclinações das rampas
    número inteiro com a quantidade de rampas com a inclinação adequada

Exemplo de Entrada:

1
70 875

Exemplo de Saída:

8.0
1

Exemplo de Entrada:

2
80 1000
60 600

Exemplo de Saída:

8.0 
10.0
1


*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

float inclinacaoFunction(int altura, int base)
{
    return (float)altura * 100 / base;
}

int main()
{
    int quantidade;
    cin >> quantidade;
    
    int h, b;
    float inclinacao;
    int contador = 0; 

    for (int i = 0; i < quantidade; i++)
    {
        cin >> h >> b;
        inclinacao = inclinacaoFunction(h, b);
        
        if (inclinacao <= 8.0) 
            contador++;
        
        cout << fixed << setprecision(1) << inclinacao << endl;
    }
    
    cout << contador << endl;
    return 0;
}