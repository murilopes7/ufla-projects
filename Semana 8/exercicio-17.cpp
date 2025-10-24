/*


Faça um programa que, a partir da entrada de um vetor com n elementos do tipo inteiro, gere uma saída no qual estão contidos os números que não estão repetidos em sequência e o resultado de uma operação realizada sobre aqueles que estão repetidos em sequência. Obs: utilize alocação dinâmica para alocar o vetor de entrada .

A operação deve ser realizada da seguinte forma:

    Caso a quantidade de repetições (c) de um número seja par, o resultado deve ser c * número, por exemplo:

    Para o vetor 1 5 5 6, a saída deve ser 1 10 6
    Caso a quantidade de repetições (c) de um número seja ímpar, o resultado deve ser númeroc, por exemplo:

    Para o vetor 1 2 4 4 4, a saída deve ser 1 2 64

Entradas

int n; // tamanho do vetor de entrada

int * vetor; // vetor de entrada

Saída

Vetor resultante das operações realizada sobre o vetor original.

Exemplo de Entrada

4

3 3 4 5

Exemplo de Saída

6 4 5


*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *vetor = new int[n];
    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    int *v2 = new int[n];
    int idx = 0;

    int i = 0;
    while (i < n)
    {
        int count = 1;

        while (i + count < n && vetor[i] == vetor[i + count])
            count++;

        if (count == 1)
            v2[idx++] = vetor[i];

        else
        {
            if (count % 2 == 0)
                v2[idx++] = count * vetor[i];

            else
            {
                int result = 1;
                for (int k = 0; k < count; k++)
                    result *= vetor[i];
                
                v2[idx++] = result;
            }
        }

        i += count;
    }

    for (int j = 0; j < idx; j++)
        cout << v2[j] << " ";
    
    cout << endl;

    delete[] vetor;
    delete[] v2;
    return 0;
}
