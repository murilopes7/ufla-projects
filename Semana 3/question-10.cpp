/*
    Cada degrau de uma escada tem uma certa altura. Faça um programa que receba essa altura em centímetros e a altura que o usuário deseja subir na escada em metros, 
    em um arquivo denominado entrada.txt. Calcule e escreva no arquivo degraus.txt quantos degraus o usuário deverá subir para, no mínimo, atingir seu objetivo, 
    sem se preocupar com a altura do usuário.

    Sugestão: use uma biblioteca matemática para arredondamento.

    Entradas (arquivo entrada.txt):

        Altura dos degraus em centímetros (número real).
        Altura que se deseja alcançar em metros (número real).

    Saídas (arquivo degraus.txt):

        Número inteiro de degraus necessários para atingir o objetivo.

    Exemplo de Entrada (arquivo entrada.txt):

    40
    2

    Exemplo de Saída (arquivo degraus.txt):

    5
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    ifstream arquivo1 ("entrada.txt");
    ofstream arquivo2 ("degraus.txt");

    float height_step, height;
    int number;
    arquivo1 >> height_step >> height;
    number = ceil(height * 100/height_step);

    arquivo2 << number << endl;

    arquivo1.close();
    arquivo2.close();

    return 0;
}
