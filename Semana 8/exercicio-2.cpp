/*

Dois vetores são considerados iguais se ambos contiverem o mesmo conjunto de elementos, embora as permutações de elementos possam ser diferentes.

Faça um programa para receba o tamanho N de dois vetores A e B de igual tamanho e descubra se os vetores são iguais ou não.

Se forem iguais imprima "IGUAIS", caso contrário imprima "DIFERENTES".

Observação: não haverá elementos repetidos em cada vetor.

Exemplo de Entrada:

5
1 2 3 4 5
5 4 3 2 1

Exemplo de Saída:

IGUAIS

Exemplo de Entrada:

5
1 2 3 6 5
5 4 3 2 1

Exemplo de Saída:

DIFERENTES

*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* A = new int[N];
    int* B = new int[N];

    // Leitura do vetor A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Leitura do vetor B
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    bool iguais = true;

    // Verifica se cada elemento de A está em B
    for (int i = 0; i < N; i++) {
        bool encontrado = false;
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                encontrado = true;
            }
        }
        // Se algum elemento de A não estiver em B, marcamos iguais como falso
        if (encontrado == false) {
            iguais = false;
        }
    }

    if (iguais)
        cout << "IGUAIS" << endl;
    else
        cout << "DIFERENTES" << endl;

    delete[] A;
    delete[] B;

    return 0;
}
