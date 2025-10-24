/*
Faça um programa que recebe dois vetores de caracteres de tamanhos m e n, respectivamente. Sabendo que os dois vetores nunca são vazios e já se encontram ordenados em ordem crescente, intercale-os em um novo vetor, de tamanho m+n, mantendo os dados ordenados. Obs 1: os dois vetores podem conter caracteres repetidos. Obs 2: os vetores devem ser alocados dinamicamente.

Entradas:

    int m - Tamanho do primeiro vetor
    int n - Tamanho do segundo vetor
    char vet1[m] - Vetor de caracteres (separados por espaços)
    char vet2[n] - Vetor de caracteres (separados por espaços)

Saída:

    char vet[m+n] - Vetor de caracteres (separados por espaços)

Exemplo de Entradas e Saída:

Entradas:

6 7
a b b d m z
b d e k n u w

Saída:

a b b b d d e k m n u w z

Entradas:

5 4
a d k n z
b m u w

Saída:

a b d k m n u w z

*/

#include <iostream>
using namespace std;

void insertionSort(char arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i]; 
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; 
    }
}

int main(){
    int m = 0, n = 0;
    cin >> m >> n;

    char * v1 = new char[m];
    char * v2 = new char[n];
    char * v3 = new char[m + n];

    for (int i = 0; i < m; i++) cin >> v1[i];
    for (int i = 0; i < n; i++) cin >> v2[i];

    int tam_3 = m + n;

    for (int i = 0; i < m; i++) v3[i] = v1[i];
    for (int i = 0; i < n; i++) v3[m + i] = v2[i];

    insertionSort (v3, tam_3);

    for (int i = 0; i < tam_3; i++)
        cout << v3[i] << " ";
    cout << endl;

    delete [] v1;
    delete [] v2;
    delete [] v3;

    return 0;
}