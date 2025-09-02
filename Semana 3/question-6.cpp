/*
    Faça um programa que leia do arquivo dados.txt oito valores. O programa deve calcular e imprimir em um arquivo media.txt a média aritmética dos 
    valores informados. Use setprecision() para informar o resultado com três casas decimais

    Entrada (arquivo dados.txt):

        Oito valores em ponto flutuante, separados por espaço ou quebra de linha

    Saída (arquivo media.txt):

        Média dos valores informados (em ponto flutuante, com três casas decimais)

    Exemplo de Entrada (dados.txt):

    50 30 60 20 70 50
    13.1 14.3

    Exemplo de Saída media.txt):

    38.425

    Exemplo de Entrada (dados.txt):

    50.4
    60.5
    70.3
    1 2 3 4 5

    Exemplo de Saída media.txt):

    24.525
*/


#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    // Declara as variáveis para as coordenadas e a distância
    float v1, v2, v3, v4, v5, v6, v7, v8, media;

    // Abre o arquivo de entrada
    ifstream entrada("dados.txt");
    entrada >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 >> v7 >> v8;

    // Verifica se o arquivo foi aberto com sucesso
    if (!entrada.is_open()) {
        cerr << "Erro ao abrir o arquivo 'entrada.txt'" << endl;
        return 1; // Retorna 1 para indicar erro
    }

    // Fecha o arquivo após a leitura
    entrada.close();

    media = (v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 )/8;

    // Exibe o resultado com a precisão desejada (5 casas decimais)
    ofstream saida ("media.txt");
    saida << fixed << setprecision(3) << media << endl;
    //cout << fixed << setprecision(2) << media << endl;

    saida.close();

    return 0;
}