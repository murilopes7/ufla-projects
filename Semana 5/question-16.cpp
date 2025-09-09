/*
    Escreva um algoritmo que leia uma sequência valores inteiros e positivos de um arquivo entrada.txt e:

    A) Encontre o maior valor.

    B) Encontre o menor valor.

    C) Calcule a média dos números lidos.

    Entradas (arquivo entrada.txt):

        Uma sequência de valores inteiros (int).

    Saídas:

        Maior número lido.
        Menor número lido.
        Média dos números lidos, com precisão de uma casa decimal.

    Exemplo de Entrada (arquivo entrada.txt):

    5 6 25 1 3 7 11 24 4 9

    Exemplo de Saída:

    25
    1
    9.5

*/

#include <iostream>
#include <fstream>
#include <iomanip> // para setprecision
using namespace std;

int main() {
    ifstream arquivo("entrada.txt");

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    int numero;
    int maior = -1;      // inicializa com valor pequeno
    int menor = 2147483647; // inicializa com valor grande (INT_MAX)
    int soma = 0;
    int contador = 0;

    while (arquivo >> numero) {
        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
        soma += numero;
        contador++;
    }

    arquivo.close();

    if (contador == 0) {
        cout << "Nenhum número no arquivo." << endl;
        return 0;
    }

    double media = (double)soma / contador;

    cout << maior << endl;
    cout << menor << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}
