/*
    Sabe ­se que, para iluminar de maneira correta os cômodos de uma casa, deve ­se usar 18W de potência para cada m2 . Faça um programa que receba as duas dimensões 
    de um cômodo (em metros). Seu programa deverá calcular e escrever no arquivo potencia.txt a área do cômodo (em m2) e a potência de iluminação total que deverá 
    ser utilizada, utilizando uma casa decimal de precisão. Defina em seu programa uma variável constante que deve indicar a potência necessária para cada m2 .

    Dica: utilize a biblioteca iomanip, e as funções fixed e setprecision(), para especificar a precisão desejada na saída (uma casa decimal).

    Entradas:

        Dois números reais que denotam as dimensões do cômodo.

    Saídas (arquivo potencia.txt):

        Número real X que indica a área total do cômodo.
        Número real Y que indica a potência necessária para iluminar o cômodo.

    Exemplo de Entrada:

    5.3 
    7.0 

    Exemplo de Saída (arquivo potencia.txt):

    37.1m2 
    667.8W 
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    ofstream arquivo2 ("potencia.txt");

    float l1, l2;
    cin >> l1 >> l2;

    arquivo2 << fixed << setprecision(1) << l1 * l2 << "m2" << endl;
    arquivo2 << fixed << setprecision(1) << l1 * l2 * 18 << "W" << endl;

    arquivo2.close();

    return 0;
}
