/*

    Desenvolva um programa que receba do dispositivo de entrada padrão um vetor de 16números reais e um número inteiro N. Seu programa deverá exibir no 
    dispositivo de saída padrão o somatório dos N primeiros números do vetor de entrada. Assuma que o valor de N sempre será menor ou igual a quantidade total 
    de elementos presentes no vetor.

    Entradas:

        Um vetor de 16 números reais. Os elementos do vetor serão fornecidos em uma única linha, separados por espaço.
        Um número inteiro N.

    Saídas:

        Um número real que representa o somatório dos N primeiros números do vetor de entrada. A saída deve ser apresentada com duas casas decimais.

    Exemplo de Entrada:

    2.6 16.1 20.02 -6.3 -4.1 0 37.2 -2.6 -16.1 -20.02 -4.2 4.2 6.3 -4.1 0 37.2
    8

    Exemplo de Saída:

    62.92

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double numeros[16], soma = 0.0;
    int N;

    for (int i = 0; i < 16; i++) 
        cin >> numeros[i];
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
        soma += numeros[i];
    
    cout << fixed << setprecision(2) << soma << endl;
    return 0;
}