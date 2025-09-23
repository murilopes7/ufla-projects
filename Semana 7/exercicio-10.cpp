/*
    Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, divida todos os seus elementos pelo maior valor 
    do vetor (divisão inteira). Escreva todos os valores do vetor após o cálculo.

    Entradas:

        Quinze números inteiros.

    Saídas:

        Os quinze valores armazenados no vetor, em ordem.

    Exemplo de entrada:

    1 5 9 4 4 8 5 7 6 3 2 5 4 1 7

    Exemplo de saída:

    0 0 1 0 0 0 0 0 0 0 0 0 0 0 0
*/

#include <iostream>
using namespace std;

int main(){
    int numero[15];
    for (int i = 0; i < 15; i++)
        cin >> numero[i];

    int maior = -99999;
    for (int i = 0; i < 15; i++)
        if (numero[i] >= maior) maior = numero[i];
    
    for (int i = 0; i < 15; i++)
        numero[i] /= maior;

    for (int i = 0; i < 15; i++)
        cout << numero[i] << " ";

    cout << endl;
    return 0;
}