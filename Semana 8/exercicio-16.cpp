/*


Implemente um programa que receba primeiramente um número inteiro N. Este número representa o número de registros de ponto de uma empresa. Em seguida o seu programa deve ler N valores de entrada e armazenar em um vetor de N posições. Cada valor é um inteiro que identifica o funcionário que marcou seu ponto.

Em seguida você deverá determinar os dois funcionários que marcaram o ponto mais e menos vezes (respectivamente) nesses registros de ponto. Seu programa deverá imprimir os inteiros que identificam o funcionário que mais marcou o ponto e o funcionário que menos marcou o ponto. Em seguida deve imprimir a quantidade de vezes que os funcionários marcaram o ponto.

Os IDs dos funcionários variam de 0 a 99.

    Entradas
    int N - Número de pontos marcados.
    vetor[N] - Vetor de inteiros com o identificador do funcionário que marcou cada ponto. Obs: Utilize alocação dinâmica para alocar o vetor.

    Saídas:
    Identificador do funcionário que mais marcou pontos
    Identificador do funcionário que menos marcou pontos
    Quantos pontos marcou o funcionário que mais marcou pontos.
    Quantos pontos marcou o funcionário que menos marcou pontos.



Exemplo de Entrada:

15
3
6
9
6
4
6
8
7
8
4
7
6
9
6
7


Exemplo de Saída:

6
3
5
1


*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* vetor = new int[N];
    for (int i = 0; i < N; i++) 
        cin >> vetor[i];
    

    int contador[100] = {0};
    for (int i = 0; i < N; i++) 
        contador[vetor[i]]++;
    

    int idMaior = vetor[0];
    int idMenor = vetor[0];
    int maior = contador[idMaior];
    int menor = contador[idMenor];

    for (int i = 0; i < 100; i++) {
        if (contador[i] > maior) {
            maior = contador[i];
            idMaior = i;
        }
        if (contador[i] > 0 && contador[i] < menor) {
            menor = contador[i];
            idMenor = i;
        }
    }

    cout << idMaior << endl;
    cout << idMenor << endl;
    cout << maior << endl;
    cout << menor << endl;

    delete[] vetor;
    return 0;
}