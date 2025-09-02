/* 
    As coordenadas geográficas expressam de forma exata em graus a posição de qualquer ponto na superfície do globo terrestre. A medida de grau possui duas 
    notações, grau em notação sexagesimal (grau, minuto e segundo) e grau em notação decimal. A notação sexagesimal é obtida a partir da notação decimal da seguinte 
    maneira:
    * O Grau corresponde ao valor da parte inteira da notação decimal.
    * O minuto é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, pegando somente a parte inteira deste resultado.
    * O segundo é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, e multiplicando a parte fracionária deste resultado por 60.
    Faça um programa para calcular os graus, minutos e segundos de um valor inserido pelo usuário na notação de grau em decimal, armazenando o resultado em um 
    arquivo coordenadas.txt.
    Entradas:
    1. Grau em notação decimal (valor em ponto flutuante)
    Saídas (arquivo coordenadas.txt):
    1. Grau em notação sexagesimal: grau, minuto, segundo. Os valores exibidos são inteiros, um em cada linha.
    Exemplo de Entrada:

    48.764169

    Exemplo de Saída (arquivo coordenadas.txt):

    48
    45
    51

    Vou criar um programa em Python que converte coordenadas de notação decimal para sexagesimal e salva o resultado em um arquivo.
    Conversor de Coordenadas Geográficas
    Code 

    O programa está pronto! Ele funciona da seguinte forma:

    Como funciona a conversão:

        Grau: Pega a parte inteira do número decimal
        Minuto: Multiplica a parte fracionária por 60 e pega a parte inteira
        Segundo: Multiplica a parte fracionária do resultado do minuto por 60 e pega a parte inteira

    Exemplo com 48.764169:

        Grau: 48 (parte inteira)
        Minuto: 0.764169 × 60 = 45.85014 → 45 (parte inteira)
        Segundo: 0.85014 × 60 = 51.0084 → 51 (parte inteira)

    Funcionalidades do programa:

        Solicita o valor decimal do usuário
        Realiza a conversão seguindo a fórmula especificada
        Salva o resultado no arquivo coordenadas.txt com cada valor em uma linha
        Exibe o resultado na tela para confirmação
        Inclui tratamento de erros para entradas inválidas

    Para usar o programa, execute-o e digite o valor decimal quando solicitado (por exemplo, 48.764169). 
    O resultado será salvo automaticamente no arquivo coordenadas.txt no formato especificado.

    em c++
    Conversor de Coordenadas Geográficas em C++
    Code ∙ Version 2 

    Agora o programa está em C++! Aqui estão as principais características da implementação:

    Estruturas e Funções:

        Struct Sexagesimal: Organiza os valores de grau, minuto e segundo
        Função decimalParaSexagesimal(): Realiza a conversão seguindo a fórmula especificada
        Função salvarArquivo(): Salva os resultados no arquivo coordenadas.txt

    Como funciona:

        Usa static_cast<int>() para converter de double para int (truncamento)
        Usa abs() para garantir valores absolutos na parte fracionária
        Inclui verificação de entrada inválida com cin.fail()
        Trata erros de abertura de arquivo

    Para compilar e executar:
    bash

    g++ -o coordenadas coordenadas.cpp
    ./coordenadas

    Exemplo de uso:

    Digite o grau em notação decimal: 48.764169
    Conversão realizada com sucesso!
    Resultado salvo em 'coordenadas.txt':
    Grau: 48
    Minuto: 45
    Segundo: 51

    O arquivo coordenadas.txt será criado com:

    48
    45
    51

    O programa mantém a mesma lógica de conversão
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

// Estrutura para armazenar coordenadas sexagesimais
struct Sexagesimal {
    int grau;
    int minuto;
    int segundo;
};

/**
 * Converte grau em notação decimal para sexagesimal (grau, minuto, segundo)
 * 
 * @param grauDecimal Valor do grau em notação decimal
 * @return Estrutura com grau, minuto e segundo como números inteiros
 */
Sexagesimal decimalParaSexagesimal(double grauDecimal) {
    Sexagesimal resultado;
    
    // 1. Grau: parte inteira da notação decimal
    resultado.grau = static_cast<int>(grauDecimal);
    
    // 2. Minuto: valor absoluto da parte fracionária * 60 (parte inteira)
    double parteFracionaria = abs(grauDecimal - resultado.grau);
    double minutoDecimal = parteFracionaria * 60.0;
    resultado.minuto = static_cast<int>(minutoDecimal);
    
    // 3. Segundo: parte fracionária do minuto * 60
    double parteFracionariaMinuto = minutoDecimal - resultado.minuto;
    resultado.segundo = static_cast<int>(parteFracionariaMinuto * 60.0);
    
    return resultado;
}

/**
 * Salva as coordenadas sexagesimais no arquivo coordenadas.txt
 * 
 * @param coord Estrutura com as coordenadas sexagesimais
 * @return true se salvou com sucesso, false caso contrário
 */
bool salvarArquivo(const Sexagesimal& coord) {
    ofstream arquivo("coordenadas.txt");
    
    if (!arquivo.is_open()) {
        cerr << "Erro: Não foi possível criar o arquivo coordenadas.txt" << endl;
        return false;
    }
    
    arquivo << coord.grau << endl;
    arquivo << coord.minuto << endl;
    arquivo << coord.segundo << endl;
    
    arquivo.close();
    return true;
}

int main() {
    double grauDecimal;
    
    // Solicita entrada do usuário
    cout << "Digite o grau em notação decimal: ";
    cin >> grauDecimal;
    
    // Verifica se a entrada é válida
    if (cin.fail()) {
        cerr << "Erro: Por favor, digite um número válido." << endl;
        return 1;
    }
    
    // Converte para sexagesimal
    Sexagesimal coordenadas = decimalParaSexagesimal(grauDecimal);
    
    // Salva no arquivo
    if (salvarArquivo(coordenadas)) {
        cout << "Conversão realizada com sucesso!" << endl;
        cout << "Resultado salvo em 'coordenadas.txt':" << endl;
        /* cout << "Grau: " << coordenadas.grau << endl;
        cout << "Minuto: " << coordenadas.minuto << endl;
        cout << "Segundo: " << coordenadas.segundo << endl; */
    } else {
        cerr << "Erro ao salvar o arquivo." << endl;
        return 1;
    }
    
    return 0;
}
