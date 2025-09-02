/* 
    O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba, em um arquivo dados.txt, o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e escreva num arquivo custo.txt: a) O valor correspondente ao lucro do distribuidor; b) O valor correspondente aos impostos; c) O preço final do veículo.

    A saída deve ser formatada utilizando duas casas decimais. Para isso, utilize a biblioteca iomanip e as funções fixed e setprecision().

    Entradas (arquivo dados.txt):

        Preço de fábrica (float).
        Percentual de lucro do distribuidor (float).
        Percentual de impostos (float).

    Saídas (custo.txt):

        O valor correspondente ao lucro do distribuidor.
        O valor correspondente aos impostos.
        O preço final do veículo.

    Exemplo de Entrada (arquivo dados.txt):

    25000.00
    0.15
    0.05

    Exemplo de Saída custo.txt:

    3750.00
    1250.00
    30000.00
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    // Variáveis para armazenar os dados
    float precoFabrica;
    float percentualLucro;
    float percentualImpostos;
    
    // Abrir arquivo de entrada e ler os dados
    ifstream arquivoDados("dados.txt");
    arquivoDados >> precoFabrica;
    arquivoDados >> percentualLucro;
    arquivoDados >> percentualImpostos;
    arquivoDados.close();
    
    // Calcular os valores
    float valorLucro = precoFabrica * percentualLucro;
    float valorImpostos = precoFabrica * percentualImpostos;
    float precoFinal = precoFabrica + valorLucro + valorImpostos;
    
    // Abrir arquivo de saída e escrever os resultados
    ofstream arquivoCusto("custo.txt");
    
    // Configurar formatação para duas casas decimais
    arquivoCusto << fixed << setprecision(2);
    
    // Escrever os resultados
    arquivoCusto << valorLucro << endl;
    arquivoCusto << valorImpostos << endl;
    arquivoCusto << precoFinal << endl;
    
    arquivoCusto.close();
    
    return 0;
}