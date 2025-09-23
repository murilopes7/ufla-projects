/*
    A cada final de semestre letivo a UFLA solicita a cada aluno uma avaliação das disciplinas cursadas. Essa avaliação é feita atribuindo-se notas 
    (valores inteiros) uma escala de 1 a 5, com o seguinte significado: 5 = MUITO BOM, 4 = BOM, 3 = REGULAR, 2 = RUIM, 1 = PÉSSIMO. Escreva um programa que 
    leia um vetor de respostas de avaliação de 9 disciplinas e imprima a frequência relativa de cada resposta conforme ilustrado nos exemplos a seguir. 
    A saída deve seguir o padrão "nota: frequência relativa".

    Entradas:

        A nota dada para cada uma das 9 disciplinas (valores inteiros no intervalo [1,5]). Assuma que todos os valores são fornecidos em uma única linha.

    Saídas:

        Relação da frequência relativa de cada nota (da maior nota para a menor).

    Exemplo de entrada:

    1 2 3 4 5 3 4 5 5

    Exemplo de saída:

    5: 0.333333
    4: 0.222222
    3: 0.222222
    2: 0.111111
    1: 0.111111
*/

#include <iostream>
using namespace std;

int main() {
    int notas[9];
    
    // Ler as 9 notas
    for (int i = 0; i < 9; i++) {
        cin >> notas[i];
    }

    // Contar a frequência de cada nota (1 a 5)
    int contagem[5] = {0}; // índice 0 = nota 1, índice 4 = nota 5
    for (int i = 0; i < 9; i++) {
        contagem[notas[i] - 1]++; // decrementa 1 para encaixar no índice 0..4
    }

    // Criar um array de notas (1 a 5) para "ordenar" pela frequência decrescente
    int valores[5] = {1, 2, 3, 4, 5};

    // Ordenar manualmente em ordem decrescente pela nota (não pela frequência)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (valores[i] < valores[j]) { // maior nota primeiro
                int temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }

    // Imprimir frequência relativa em ordem decrescente
    for (int i = 0; i < 5; i++) {
        int nota = valores[i];
        double freq = (double)contagem[nota - 1] / 9.0;
        cout << nota << ": " << freq << endl;
    }

    return 0;
}