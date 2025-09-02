/*
    O cálculo de resto de uma divisão inteira tem uma grande importância na criptografia moderna. Vários dos métodos são baseados em propriedades envolvendo restos de divisão por números primos, inclusive.

    Nesta atividade, seu objetivo é implementar um método bastante simples para codificar um valor. Você irá receber um valor, a partir da entrada padrão e, na sequência, ler três números primos em um arquivo de entrada denominado chaves.txt. Na sequência, você irá calcular o resto da divisão do valor inicial por cada um dos valores primos, escrevendo o resultado no arquivo codigo.txt.

    Entrada padrão:

        Um valor inteiro positivo qualquer.

    Entrada pelo arquivo chaves.txt:

        Três números primos.

    Saídas (arquivo codigo.txt):

        Resto da divisão do valor fornecido na entrada padrão por cada um dos números primos informados.

    Exemplo de Entrada:

    920

    Exemplo de Arquivo chaves.txt:

    3
    5
    7

    Exemplo de Saída (arquivo codigo.txt):

    2
    0
    3

    Exemplo de Entrada:

    11234

    Exemplo de Arquivo chaves.txt:

    7
    11
    13

    Exemplo de Saída (arquivo codigo.txt):

    6
    3
    2
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Lê o valor da entrada padrão
    int valor;
    cout << "Digite o valor: ";
    cin >> valor;
    
    // Abre o arquivo chaves.txt para leitura
    ifstream arquivoChaves("chaves.txt");
    if (!arquivoChaves.is_open()) {
        cerr << "Erro ao abrir o arquivo chaves.txt" << endl;
        return 1;
    }
    
    // Lê os três números primos
    int primo1, primo2, primo3;
    arquivoChaves >> primo1 >> primo2 >> primo3;
    arquivoChaves.close();
    
    // Calcula os restos das divisões
    int resto1 = valor % primo1;
    int resto2 = valor % primo2;
    int resto3 = valor % primo3;
    
    // Abre o arquivo codigo.txt para escrita
    ofstream arquivoCodigo("codigo.txt");
    if (!arquivoCodigo.is_open()) {
        cerr << "Erro ao criar o arquivo codigo.txt" << endl;
        return 1;
    }
    
    // Escreve os resultados no arquivo
    arquivoCodigo << resto1 << endl;
    arquivoCodigo << resto2 << endl;
    arquivoCodigo << resto3 << endl;
    
    arquivoCodigo.close();
    
    cout << "Codificação realizada com sucesso!" << endl;
    cout << "Restos calculados: " << resto1 << ", " << resto2 << ", " << resto3 << endl;
    
    return 0;
}