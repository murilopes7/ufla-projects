/*


Um aluno decide comprar uma mochila nova, com isso sua mãe decide ajudar na compra, pagando 20% do valor da mochila, porém ela disse que se esses 20% ultrapassarem 30 reais ele não poderia comprar a mochila.

Faça um programa que leia o valor da mochila (número real) e depois escreva "sim" ou "nao" (note a ausência de acento), indicando se o aluno pode comprar a mochila, seguido do valor que a mãe teria que pagar. O valor a ser pago deverá ser expresso utilizando duas casas decimais (alunos de IALG:use fixed e setprecision()).

Exemplo de Entrada:

159

Exemplo de Saída:

nao 31.80

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor;
    cin >> valor;
    double valor_mae = valor * 0.2;
    if (valor_mae > 30.0) {
        cout << "nao ";
    } else {
        cout << "sim ";
    }
    cout << fixed << setprecision(2) << valor_mae << endl;
    return 0;
}