/*


Faça um programa que receba um número inteiro n e imprima uma pirâmide contendo n linhas e em cada uma deve conter uma sequência numérica até o número que represente o valor da linha.

O programa deve ter um procedimento que recebe o valor de n e imprime a pirâmide.

Entradas:

    Número inteiro informando a quantidade de linhas

Saídas:

    n linhas contendo cada uma uma sequencia numérica correspondente ao valor da linha.

Exemplo de Entrada:

5

Exemplo de Saída:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <iostream>
using namespace std;

void piramide (int n){
    for(int linhas = 1; linhas <= n; linhas++){
        for (int numero = 1; numero <= linhas; numero++){
            cout << numero;
            if (numero < linhas) cout << " ";
        }

        cout << endl;
    }
}

int main(){
    int numero;
    cin >> numero;
    piramide (numero);
    return 0;
}