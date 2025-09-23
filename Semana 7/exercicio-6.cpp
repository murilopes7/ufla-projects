/*
    Faça um programa para receber nove números inteiros positivos, armazená-los em um vetor, calcular e exibir no dispositivo de saída padrão aqueles 
    números que são primos e suas respectivas posições no vetor. Se nenhum número primo for fornecido, nenhuma mensagem precisará ser exibida.

    Entradas:

        Nove números inteiros positivos a serem armazenados em um vetor.

    Saídas:

        Sequência de números primos e suas respectivas posições (índices no vetor). Obs.: Aqueles números que forem primos e suas respectivas posições 
        deverão ser exibidos aos pares.

    Exemplo de entrada:

    7 13 49 23 6 21 78 98 3 

    Exemplo de saída:

    7 0
    13 1
    23 3
    3 8

*/

#include <iostream>
using namespace std;

int main()
{
    int numero[9];

    for (int i = 0; i < 9; i++)
        cin >> numero[i];

    for (int i = 0; i < 9; i++){
        if (numero[i] == 2)
            cout << numero[i] << " " << i << endl;

        else {
            int primo = 1;

            // Testa divisores ímpares de 3 até √n
            for (int j = 2; j * j <= numero[i]; j++) {
                if (numero[i] % j == 0){
                    primo = 0;
                    break;
                }
            }

            if (primo == 1) {
                cout << numero[i] << " " << i << endl;
            }
        }
    }

    return 0;
}