/* 
    Faça um programa que receba como um entrada um número inteiro N de 6 algarismos, tal que 100000 <= N <= 999999, e a partir dele calcule um novo número inteiro M de 5 algarismos. O dado será lido do arquivo entrada.txt e o resultado será gravado no arquivo saida.txt.

    O valor de M será calculado a partir da divisão inteira dos algarismos de N. O 1º algarismo de M será o resultado da divisão inteira do 1º algarismo de N pelo 2º algarismo de N; o 2º algarismo de M será o resultado da divisão inteira do 2º algarismo de N pelo 3º algarismo de N, e assim sucessivamente. Atente-se ao fato de que, ao final, M será um único número inteiro de cinco algarismos.

    Obs: considere que o número N não tem nenhum algarismo igual a zero e que o número M gerado terá sempre 5 algarismos (ou seja, nunca começará com zero).

    Entradas (arquivo entrada.txt):

        Um número inteiro N de seis algarismos.

    Saídas (arquivo entrada.txt):

        Um número inteiro M de cinco algarismos calculado conforme o enunciado.

    Exemplo de Entrada (arquivo entrada.txt):

    918273

    Exemplo de Saída (arquivo saida.txt):

    90402

    Exemplo de Entrada (arquivo entrada.txt):

    854221

    Exemplo de Saída (arquivo saida.txt):

    11211

*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Abrir arquivo de entrada
    ifstream arquivoEntrada("entrada.txt");
    int N;
    arquivoEntrada >> N;
    arquivoEntrada.close();
    
    // Extrair os 6 dígitos do número N
    int digitos[6];
    int temp = N;
    
    // Extrair dígitos da direita para a esquerda
    for (int i = 5; i >= 0; i--) {
        digitos[i] = temp % 10;
        temp /= 10;
    }
    
    // Calcular os 5 dígitos de M através das divisões inteiras
    int digitosM[5];
    for (int i = 0; i < 5; i++) {
        digitosM[i] = digitos[i] / digitos[i + 1];
    }
    
    // Formar o número M a partir dos dígitos calculados
    int M = 0;
    for (int i = 0; i < 5; i++) {
        M = M * 10 + digitosM[i];
    }
    
    // Gravar o resultado no arquivo de saída
    ofstream arquivoSaida("saida.txt");
    arquivoSaida << M << endl;
    arquivoSaida.close();
    
    return 0;
}