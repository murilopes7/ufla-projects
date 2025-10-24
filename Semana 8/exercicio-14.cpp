/*

Uma professora passou uma lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu número de matrícula. Alguns alunos contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram os números de matrícula de seus amigos fujões. O problema é que muitos alunos são amigos de alunos que fogem da aula e alguns números de matrícula acabaram sendo repetidamente inseridos na lista de presença. Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam!

A professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar um voto de confiança e dar presença a todos os alunos cujos números de matrícula estavam na lista. Como são muitos alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam presença na aula.

Entradas:

A primeira linha da entrada contém um número inteiro N, que informa a quantidade de números de matrícula que apareceram na lista de presença. Cada uma das N linhas seguintes contém um número de matrícula (número inteiro) que foi inserido na lista de presença. Obs: Utilize alocação dinâmica para alocar o vetor.

Saídas:

Seu programa deve escrever uma única linha, contendo apenas um número inteiro: o número de alunos que receberam presença.

Exemplo de entradas:

4
12
13
11
13

Exemplo de saída:

3

*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* alunos = new int[N];
    for (int i = 0; i < N; i++)
        cin >> alunos[i];

    int diferentes = 0;

    for (int i = 0; i < N; i++) {
        bool repetido = false;

        // Verifica se esse aluno já apareceu antes
        for (int j = 0; j < i; j++) {
            if (alunos[i] == alunos[j]) {
                repetido = true;
            }
        }

        if (!repetido)
            diferentes++;
    }

    cout << diferentes << endl;

    delete[] alunos;
    return 0;
}
