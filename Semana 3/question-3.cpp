/*
    Faça um programa que receba de um arquivo (entrada.txt) dois pontos e calcule a distância entre eles no plano cartesiano. A distância deverá ser exibida na saída padrão.

    Sabe-se que dados dois pontos A = (x1,y1) e B = (x2,y2), a distância entre eles é a raiz quadrada da soma das diferenças das coordenadas ao quadrado.

    Cada ponto será representado por dois valores numéricos, representado as coordenadas x e y do ponto, respectivamente. O exemplo a seguir leva ao cálculo da distância entre (-2.1, 4.6) e (3.3, -1.6).

    Entrada (conteúdo do arquivo entrada.txt):

        Número real da coordenada x do primeiro ponto.
        Número real da coordenada y do primeiro ponto.
        Número real da coordenada x do segundo ponto.
        Número real da coordenada y do segundo ponto.

    Saída

        Número real representando a distância entre os pontos.

    Exemplo de Entrada (arquivo entrada.txt):

    -2.1
    4.6
    3.3
    -1.6

    Exemplo de Saída (saída padrão):

    8.22192

    Exemplo de Entrada (arquivo entrada.txt):

    6
    2.1
    -9.4
    -1.3

    Exemplo de Saída (saída padrão):

    15.77086
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    // Declara as variáveis para as coordenadas e a distância
    float xa, ya, xb, yb, distancia;

    // Abre o arquivo de entrada
    ifstream entrada("entrada.txt");

    // Verifica se o arquivo foi aberto com sucesso
    if (!entrada.is_open()) {
        cerr << "Erro ao abrir o arquivo 'entrada.txt'" << endl;
        return 1; // Retorna 1 para indicar erro
    }

    // Lê os quatro valores do arquivo diretamente nas variáveis
    entrada >> xa >> ya >> xb >> yb;

    // Fecha o arquivo após a leitura
    entrada.close();

    // Calcula a distância usando a fórmula correta
    distancia = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));

    // Exibe o resultado com a precisão desejada (5 casas decimais)
    cout << fixed << setprecision(5) << distancia << endl;

    return 0;
}