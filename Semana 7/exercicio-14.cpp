/*

    Faça um programa que leia um vetor com 7 inteiros. O programa deverá ainda ler um número inteiro N e verificar se existe dentro do vetor três números 
    cujas somas sejam iguais a N. Você foi informado que caso exista mais de uma alternativa, para dar preferência àquela que use valores iniciais do vetor 
    (e imprimir apenas essa).

    Obs: Caso não existam três números que satisfaçam a soma, deverá ser impresso apenas -1.

    Entradas:

        Elementos do vetor.
        Número inteiro N.

    Saídas:

        Os três números utilizados ou -1 caso a soma não seja possível.

    Exemplo de Entrada:

    1 2 3 4 5 1 1
    12

    Exemplo de Saída:

    3 4 5

    Exemplo de Entrada:

    1 2 3 4 5 4 4
    13

    Exemplo de Saída:

    4 5 4

    Exemplo de Entrada:

    1 2 3 4 5 4 4
    15

    Exemplo de Saída:

    -1

*/

#include <iostream>
using namespace std;

int main(){
    int numero[7] = {0};
    int N = 0;

    for (int i = 0; i < 7; i++) 
        cin >> numero[i];

    cin >> N;

    int soma = 0;
    bool encontrou = false;
    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 6; j++){
            for (int k = j + 1; k < 7; k++){
                soma = numero[j] + numero[i] + numero[k];
                if (soma == N){
                    cout << numero[i] << " " << numero[j] << " " << numero[k] << endl;
                    encontrou = true;
                    break;
                }
            }

            if (soma == N) break;
        }

        if (soma == N) break;
    }

    if (encontrou == false) cout << -1 << endl;
    
    
    return 0;
}