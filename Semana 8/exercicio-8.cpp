/*


Faça um programa que armazene, em um vetor alocado dinamicamente, um conjunto N de números inteiros. Em seguida, identifique os elementos que são números ímpares que sejam múltiplos de 3 e crie um novo vetor contendo apenas estes elementos. Os vetores devem ser alocados dinamicamente e, ao final, devem ser impressos na saída padrão o tamanho e os elementos do novo vetor.

Entradas:

    Quantidade N de números inteiros.
    Números armazenados.

Saídas:

    Tamanho do vetor resultante.
    Elementos do vetor resultante.

Exemplo de Entrada:

10
1 2 3 4 5 6 7 8 9 10

Exemplo de Saída:

2
3 9


Exemplo de Entrada:

7
2 4 6 7 8 10 11 

Exemplo de Saída:

0


*/

#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;

    int * numeros = new int[N];
    for (int i = 0; i < N; i++) cin >> numeros[i];
    
    int impar = 0;
    for (int i = 0; i < N; i++)
        if (numeros[i] % 3 == 0 && numeros[i] % 2 != 0) impar++; 

    int * impares = new int[impar];
    
    int pos = 0;
    for (int i = 0; i < N; i++) {
        if (numeros[i] % 3 == 0 && numeros[i] % 2 != 0) {
            impares[pos] = numeros[i];
            pos++;
        }
    }

    cout << impar << endl;
    for (int i = 0; i < impar; i++) cout << impares[i] << " ";

    delete [] impares;
    delete [] numeros;
    return 0;
}