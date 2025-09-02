/*

    Faça um programa que receba a partir do arquivo entrada.txt o valor em reais que um cliente dá ao funcionário e o valor total da compra. 
    Calcule o troco que o funcionário deve dar ao cliente em notas de 20, 10, 5, 2 e 1 e armazene a resposta no arquivo de saída saida.txt.

    A quantidade de notas deve ser a menor possível, ou seja, 6 reais de troco devem ser entregues por meio de uma nota de 5 e uma de 1, ao invés de três notas de 2.

    Entradas (conteúdo do arquivo entrada.txt):

        Valor que o cliente entrega ao funcionário (inteiro),
        Valor total da compra (inteiro).

    Saídas (conteúdo do arquivo saida.txt):

        Quantidade de notas de 20, 10, 5, 2 e 1 (respectivamente) necessárias para o troco.

    Exemplo de entradas (conteúdo do arquivo entrada.txt):

    100 
    43

    Exemplo de saídas (conteúdo do arquivo saida.txt):

    2 
    1 
    1 
    1 
    0

    Exemplo de Entrada (conteúdo do arquivo entrada.txt):

    80
    67

    Exemplo de Saída (conteúdo do arquivo saida.txt):

    0
    1
    0
    1
    1

*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    int valor_pago, valor_compra, troco;
    int n20, n10, n5, n2, n1;
    
    // Lê os dados do arquivo de entrada
    ifstream arquivo_entrada("entrada.txt");
    if (!arquivo_entrada.is_open()) {
        cerr << "Erro: Não foi possível abrir o arquivo 'entrada.txt'." << endl;
        return 1;
    }
    
    if (!(arquivo_entrada >> valor_pago >> valor_compra)) {
        cerr << "Erro: Não foi possível ler os valores do arquivo." << endl;
        arquivo_entrada.close();
        return 1;
    }
    
    arquivo_entrada.close();
    
    // Calcula o troco
    troco = valor_pago - valor_compra;
    
    // Se não há troco, todas as quantidades são zero
    if (troco <= 0) {
        n20 = 0;
        n10 = 0;
        n5 = 0;
        n2 = 0;
        n1 = 0;
    } else {
        // Calcula quantidade de notas de 20 reais
        n20 = troco / 20;
        troco = troco % 20;
        
        // Calcula quantidade de notas de 10 reais
        n10 = troco / 10;
        troco = troco % 10;
        
        // Calcula quantidade de notas de 5 reais
        n5 = troco / 5;
        troco = troco % 5;
        
        // Calcula quantidade de notas de 2 reais
        n2 = troco / 2;
        troco = troco % 2;
        
        // Calcula quantidade de notas de 1 real
        n1 = troco / 1;  // ou simplesmente: n1 = troco;
    }
    
    // Escreve o resultado no arquivo de saída
    ofstream arquivo_saida("saida.txt");
    if (!arquivo_saida.is_open()) {
        cerr << "Erro: Não foi possível criar o arquivo 'saida.txt'." << endl;
        return 1;
    }

    arquivo_saida << n20 << endl << n10 << endl << n5 << endl << n2 << endl << n1 << endl;
    arquivo_saida.close();

    return 0;
}