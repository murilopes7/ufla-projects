/*


Na matemática a união de dois conjuntos A e B é representada por A ∪ B e é formada por todos os elementos pertencentes a A ou B. Por exemplo, seja A = {1, 2, 3} e B = {4, 5}, então a união destes dois conjuntos será A ∪ B = {1, 2, 3, 4, 5}, porém caso um elemento esteja em ambos os conjuntos ele não irá aparecer duas vezes no conjunto união, por exemplo, seja A = {1, 2, 3} e B = {1, 2, 4}, assim a união será A ∪ B = {1, 2, 3, 4}.

Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B e determine a união. O tamanho de cada vetor será informado pelo usuário.

Obs.: Considere que não existirão vetores vazios.

Obs.2: Os vetores devem ser alocados dinamicamente.

Entradas:

    Tamanho do vetor A.
    Elementos do vetor A.
    Tamanho do vetor B.
    Elementos do vetor B.

Saídas:

    Vetor C representado a união dos vetores A e B.

Exemplo de Entrada:

3
1 2 3
2
2 4

Exemplo de Saída:

1 2 3 4

Exemplo de Entrada:

3
3 7 5
2
3 4

Exemplo de Saída:

3 7 5 4


*/

#include <iostream>
using namespace std;

bool existe(int *vet, int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        if (vet[i] == valor) return true;
    }
    return false;
}

int main() {
    int tamA, tamB;
    cin >> tamA;

    int *vetA = new int[tamA];
    for (int i = 0; i < tamA; i++) cin >> vetA[i];

    cin >> tamB;
    int *vetB = new int[tamB];
    for (int i = 0; i < tamB; i++) cin >> vetB[i];

    // Aloca vetor C com tamanho máximo possível (A + B)
    int tamCmax = tamA + tamB;
    int *vetC = new int[tamCmax];
    int tamC = 0;

    // Adiciona elementos de A
    for (int i = 0; i < tamA; i++) {
        if (!existe(vetC, tamC, vetA[i])) {
            vetC[tamC] = vetA[i];
            tamC++;
        }
    }

    // Adiciona elementos de B que ainda não estão em C
    for (int i = 0; i < tamB; i++) {
        if (!existe(vetC, tamC, vetB[i])) {
            vetC[tamC] = vetB[i];
            tamC++;
        }
    }

    // Exibir o vetor C (união sem repetição)
    for (int i = 0; i < tamC; i++)
        cout << vetC[i] << " ";
    cout << endl;

    delete[] vetA;
    delete[] vetB;
    delete[] vetC;
    return 0;
}
