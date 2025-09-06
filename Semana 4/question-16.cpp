/*
Faça um algoritmo que leia quatro números reais diferentes. Após isso, imprima o maior valor e o segundo maior valor.

Entradas:

    quatro numeros em ponto flutuante

Saídas:

    dois numeros em ponto flutuante (maior e segundo maior elemento)

Exemplo de entrada:

13.1
2.2
5.8
6.9

Exemplo de saída:

13.1
6.9
*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double maior = a, segundo_maior;

    // Encontrar o maior
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;

    // Encontrar o segundo maior
    if (maior == a) {
        segundo_maior = b;
        if (c > segundo_maior && c != maior) segundo_maior = c;
        if (d > segundo_maior && d != maior) segundo_maior = d;
    } else if (maior == b) {
        segundo_maior = a;
        if (c > segundo_maior && c != maior) segundo_maior = c;
        if (d > segundo_maior && d != maior) segundo_maior = d;
    } else if (maior == c) {
        segundo_maior = a;
        if (b > segundo_maior && b != maior) segundo_maior = b;
        if (d > segundo_maior && d != maior) segundo_maior = d;
    } else { // maior == d
        segundo_maior = a;
        if (b > segundo_maior && b != maior) segundo_maior = b;
        if (c > segundo_maior && c != maior) segundo_maior = c;
    }

    cout << maior << endl;
    cout << segundo_maior << endl;
    return 0;
}