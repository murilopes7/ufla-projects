/*

Dado um vetor com N (N>1) posições identifique o menor e o maior número e coloque-os nos extremos, o menor na primeira posição e o maior na última posição. Imprima o vetor após as alterações. Obs: utilize alocação dinâmica para alocar o vetor .

Obs: Não haverá elementos repetidos no vetor.

Entradas:

    int n - Tamanho do vetor.
    int *vetor - Elementos do vetor.

Saídas:

    Vetor ordenado nos extremos.


Exemplos de Entradas e Saídas:

Entradas:

10
5 10 3 4 8 9 1 2 7 6

Saídas:

1 6 3 4 8 9 5 2 7 10

*/

#include <iostream>
using namespace std;

int maior(int *vetor, int tamanho)
{
    int maior = vetor[0];
    for (int i = 0; i < tamanho; i++)
        if (vetor[i] > maior)
            maior = vetor[i];

    return maior;
}

int menor(int *vetor, int tamanho)
{
    int menor = vetor[0];
    for (int i = 0; i < tamanho; i++)
        if (vetor[i] < menor)
            menor = vetor[i];

    return menor;
}

void sorting(int *vetor, int tamanho)
{
    int large = maior(vetor, tamanho);
    int smaller = menor(vetor, tamanho);

    int temp1 = 0, temp2 = 0;

    for (int j = 0; j < tamanho; j++)
    {
        if (vetor[j] == large)
        {
            temp1 = vetor[j];                
            vetor[j] = vetor[tamanho - 1]; 
            vetor[tamanho - 1] = temp1;      
        }

        if (vetor[j] == smaller){
            temp2 = vetor[j];               
            vetor[j] = vetor[0]; 
            vetor[0] = temp2;      
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;

    int *vetor = new int[n];
    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    sorting (vetor, n);

    for (int i = 0; i < n; i++) cout << vetor[i] << " ";
    
    return 0;
}