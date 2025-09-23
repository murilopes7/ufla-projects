/*

    Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números positivos (incluindo o zero) e a soma dos 
    números negativos desse vetor.

    Obs: para soluções em Python utilize as listas padrões da linguagem ao invés de vetores.

    Entrada:

        Dez números reais (a serem guardados em um vetor).

    Saída:

        Quantidade de números positivos no vetor.
        Soma dos números negativos do vetor.

    Exemplo de entrada:

    9.4 2.5 1 5.9 1.6 -1 -6.7 -8.1 -2.3 -9.5

    Exemplo de saída:

    5
    -27.6

*/

#include <iostream>
using namespace std;


int main(){
    double numero[10], soma = 0.0;
    int quantidade = 0;
    
    for (int i = 0; i < 10;i++){
        cin >> numero[i];
        if (numero[i] >= 0.0) quantidade++;
        else soma += numero[i];
    }

    cout << quantidade << endl << soma << endl;

    return 0;
}