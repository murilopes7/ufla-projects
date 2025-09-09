/*
    Faça um programa que liste os N primeiros números primos, sendo N um valor informado pelo usuário. Lembre-se que um número é classificado como primo se 
    ele é maior do que um e é divisível apenas por um e por ele mesmo. Além disso, apenas números naturais são classificados como primos. Os N primeiros primos 
    deverão ser gravados em um arquivo chamado saida.

    Entrada:

        Um número inteiro N que representa a quantidade de números primos a serem exibidos.

    Saídas (conteúdo do arquivo saida):

        Os N primeiros números primos, um em cada linha.

    Exemplo de Entrada:

    3

    Exemplo de Saída (conteúdo do arquivo saida):

    2
    3
    5

    Exemplo de Entrada:

    10

    Exemplo de Saída (conteúdo do arquivo saida):

    2
    3
    5
    7
    11
    13
    17
    19
    23
    29
*/

#include <iostream>
#include <fstream>
using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N; // lê a quantidade de números primos

    ofstream arquivo("saida");
    if (!arquivo) {
        cout << "Erro ao criar o arquivo!" << endl;
        return 1;
    }

    int contador = 0;
    int numero = 2;

    while (contador < N) {
        if (ehPrimo(numero)) {
            arquivo << numero << endl;
            contador++;
        }
        numero++;
    }

    arquivo.close();
    return 0;
}
