/*
     Faça um programa que receba da entrada padrão um valor inteiro de três dígitos (100 < N < 999). O programa deve calcular e imprimir na saída padrão a soma dos três dígitos e salvar em um arquivo saida.txt (sem acento) o produto entre os três dígitos.

    Entrada:

        Número inteiro de três dígitos.

    Saída (saída padrão):

        A soma entre os três dígitos.

    Saída (saida.txt):

        O produto entre os três dígitos.

    Exemplo de Entrada:

    919

    Exemplo de Saída (saída padrão):

    19

    Exemplo de Saída (saida.txt):

    81

    Exemplo de Entrada:

    254

    Exemplo de Saída (saída padrão):

    11

    Exemplo de Saída (saida.txt):

    40
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    // Declara as variáveis para as coordenadas e a distância
    float nota1, peso1, nota2, peso2, nota3, peso3, media;

    // Abre o arquivo de entrada
    ifstream entrada("notas.txt");

    // Verifica se o arquivo foi aberto com sucesso
    if (!entrada.is_open()) {
        cerr << "Erro ao abrir o arquivo 'entrada.txt'" << endl;
        return 1; // Retorna 1 para indicar erro
    }

    // Lê os quatro valores do arquivo diretamente nas variáveis
    entrada >> nota1 >> peso1 >> nota2 >> peso2 >> nota3 >> peso3;

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    // Fecha o arquivo após a leitura
    entrada.close();

    // Exibe o resultado com a precisão desejada (5 casas decimais)
    ofstream saida ("final.txt");
    saida << fixed << setprecision(2) << media << endl;
    //cout << fixed << setprecision(2) << media << endl;

    saida.close();

    return 0;
}