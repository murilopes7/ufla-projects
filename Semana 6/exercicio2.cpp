/*
Acredita-se que a partir de qualquer número positivo é possível criar uma sequência de números que termina em 1 da seguinte forma:

Se o número for par, o próximo número da sequência será sua metade. Se for impar, o próximo será três vezes o número mais um.

Faça um programa que leia um número positivo, escreva essa sequência de números até o valor 1 e a quantidade de números da sequência (passada por referência para o programa principal). Os valores da sequência devem ser escritos num subprograma. A quantidade de números gerados deve ser escrita no programa principal. O planejamento do subprograma e seus parâmetros é parte importante da avaliação neste problema.

Entradas:

    Um número inteiro positivo.

Saídas:

    Uma sequência de números conforme as regras acima.
    A quantidade de números da sequência.

Exemplo de Entrada:

13

Exemplo de Saída:

13 40 20 10 5 16 8 4 2 1

10


*/

#include <iostream>
using namespace std;

/**
 * Subprograma que gera e escreve a sequência de Collatz
 * 
 * @param numero Número inicial da sequência
 * @param quantidade Referência para retornar a quantidade de números gerados
 */
void gerarSequencia(int numero, int& quantidade) {
    quantidade = 0;
    int atual = numero;
    
    // Gera e escreve a sequência até chegar ao número 1
    while (atual != 1) {
        cout << atual << " ";
        quantidade++;
        
        // Aplica as regras da sequência
        if (atual % 2 == 0) {
            // Se par: divide por 2
            atual = atual / 2;
        } else {
            // Se ímpar: multiplica por 3 e soma 1
            atual = (atual * 3) + 1;
        }
    }
    
    // Escreve o último número (1) e conta ele também
    cout << atual << endl;
    quantidade++;
}

/**
 * Programa principal
 */
int main() {
    int numero;
    int quantidadeNumeros;
    
    // Lê o número positivo
    cin >> numero;
    
    // Chama o subprograma que escreve a sequência
    gerarSequencia(numero, quantidadeNumeros);
    
    // Escreve a quantidade no programa principal
    cout << quantidadeNumeros << endl;
    
    return 0;
}