/*

Faça um programa que receba a quantidade de números que o usuário digitará e em seguida preencha um vetor com os números inteiros, calcule e mostre: os números múltiplos de 2; os números múltiplos de 3; e os números múltiplos de 2 e 3. Os números múltiplos de 2 e 3 podem aparecer nos casos isolados. Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.

Observação: o vetor deverá ser alocado dinamicamente

Entradas:

    Quantidade de números a serem inseridos pelo usuário/li>
    Sequência de números inteiros

Saídas:

    Números que são múltiplos de 2;
    Números que são múltiplos de 3;
    Números que são múltiplos de 2 e 3 simultaneamente.

Exemplo de entrada:

7
4 6 3 9 7 10 13

Exemplo de saída:

4 6 10
6 3 9 
6


*/

#include <iostream>
using namespace std;

int main() {
    int quantidade;
    cin >> quantidade;

    int *vetor = new int[quantidade];
    int *div_2 = new int[quantidade];
    int *div_3 = new int[quantidade];
    int *div_6 = new int[quantidade];

    for (int i = 0; i < quantidade; i++)
        cin >> vetor[i];

    int cont2 = 0, cont3 = 0, cont6 = 0;

    for (int i = 0; i < quantidade; i++) {
        if (vetor[i] % 2 == 0)
            div_2[cont2++] = vetor[i];
        if (vetor[i] % 3 == 0)
            div_3[cont3++] = vetor[i];
        if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0)
            div_6[cont6++] = vetor[i];
    }

    if (cont2 == 0) cout << 0;
    else for (int i = 0; i < cont2; i++) cout << div_2[i] << " ";
    cout << endl;

    if (cont3 == 0) cout << 0;
    else for (int i = 0; i < cont3; i++) cout << div_3[i] << " ";
    cout << endl;

    if (cont6 == 0) cout << 0;
    else for (int i = 0; i < cont6; i++) cout << div_6[i] << " ";
    cout << endl;

    delete[] vetor;
    delete[] div_2;
    delete[] div_3;
    delete[] div_6;

    return 0;
}
