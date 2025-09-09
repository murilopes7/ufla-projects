/*
    Faça um programa que leia um número inteiro N, maior ou igual a dois, e informe a soma de todos os divisores positivos de N compreendidos no intervalo [1,N]. Considere que um determinado número M é um divisor positivo de N, se o resultado da divisão de N por M resultar em um outro número inteiro. A saída de seu programa, no arquivo saida.txt, deverá seguir o formato: D1+D2+D3+...+Dk=RESULTADO, em que D1, D2,...,Dk correspondem aos divisores de N no intervalo [1,N] e RESULTADO é o somatório destes divisores.

    Entradas:

        Um inteiro positivo N.

    Saídas (arquivo saida.txt):

        Sequência dos divisores de N, separados pelo símbolo de “+”, seguida pelo símbolo de “=” e o valor do somatório dos divisores. Note que a formatação de saída não deve incluir símbolos de espaço.

    Exemplo de entrada:

    10

    Exemplo de saída (arquivo saida.txt):

    1+2+5+10=18
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    ofstream outFile("saida.txt");
    int sum = 0;
    bool first = true;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (!first) {
                outFile << "+";
            }
            outFile << i;
            sum += i;
            first = false;
        }
    }
    
    outFile << "=" << sum;
    outFile.close();
    
    return 0;
}