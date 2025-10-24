/*


Faça um programa que lê um vetor de números inteiros e depois escreve todos os números entre dois marcadores de limite na ordem inversa. Os limites não farão parte da saída.

Os marcadores não precisam estar em ordem, ou seja, o primeiro marcador não necessariamente precisa vir antes do segundo. Observe os exemplos a seguir.

Obs: os vetores devem ser alocados dinamicamente.

Entradas:

    Quantidade de elementos do vetor.
    Linha contendo os números inteiros do vetor (separados entre si por espaço).
    Linha contendo os dois números delimitadores (separados entre si por espaço).

Saídas:

    Números do vetor entre os delimitadores, na ordem inversa da leitura.

Exemplo de entrada:

6
9 2 3 4 5 6
2 6

Exemplo de saída:

5 4 3

Exemplo de entrada:

7
8 -1 2 4 5 0 3
5 -1

Exemplo de saída:

4 2


*/

#include <iostream>
using namespace std;

int main(){
    int tamanho = 0;
    cin >> tamanho;

    float * vetor = new float [tamanho];
    
    for (int i = 0; i < tamanho; i++) cin >> vetor[i];

    float maior = vetor[0] , menor = vetor[0];
       
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor)
            menor = vetor[i];
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    // Inicializar segundoMaior e segundoMenor com valores extremos possíveis
    float segundoMaior = menor;
    float segundoMenor = maior;

    // Encontrar segundo maior e segundo menor
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > segundoMaior && vetor[i] < maior)
            segundoMaior = vetor[i];
        if (vetor[i] < segundoMenor && vetor[i] > menor)
            segundoMenor = vetor[i];
    }

    float * vetor2 = new float [tamanho - 2];

    int j = 0;
    for (int i = 0; i < tamanho; i++){
        if ((vetor[i] != segundoMaior) && (vetor[i] != segundoMenor)){
            vetor2[j] = vetor[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++) cout << vetor2[i] << endl;

    delete [] vetor;
    delete [] vetor2;

    return 0;
}