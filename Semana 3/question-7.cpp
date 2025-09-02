/*
    Faça um programa que leia duas palavras, cada uma de um arquivo diferente. Os nomes dos arquivos serão informados pelos usuários. 
    O programa deve escrever, em um terceiro arquivo, o conteúdo dos dois primeiro arquivos, separados por um único espaço, sabendo que cada arquivo 
    contém apenas uma única string como conteúdo.

    Entrada:

        Nome do primeiro arquivo (o arquivo contém uma única palavra como conteúdo)
        Nome do segundo arquivo (o arquivo contém uma única palavra como conteúdo)
        Nome do terceiro arquivo

    Saída (terceiro arquivo):

        Texto resultado da impressão do conteúdo dos dois primeiros arquivos, separados por um espaço

    Exemplo de Entrada:

    arq1.txt
    arq2.txt
    arq3.txt

    Conteúdo de (arq1.txt):

    Super

    Conteúdo de (arq2.txt):

    Algoritmo

    Exemplo de Saída (arquivo arq3.txt):

    Super Algoritmo

    Exemplo de Entrada:

    primeiro.txt
    segundo.txt
    terceiro.txt

    Conteúdo de (primeiro.txt):

    Vou

    Conteúdo de (segundo.txt):

    passar!

    Exemplo de Saída (arquivo terceiro.txt):

    Vou passar!
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> // Para formatar a saída com precisão

using namespace std;

int main()
{
    string file_1, file_2, file_3;
    cin >> file_1 >> file_2 >> file_3;

    ifstream arquivo1 (file_1);
    ifstream arquivo2 (file_2);

    string conteudo1 , conteudo2, conteudo;
    arquivo1 >> conteudo1;
    arquivo2 >> conteudo2;
    conteudo = conteudo1 + ' ' + conteudo2;

    ofstream arquivo3 (file_3);

    arquivo3 << conteudo << endl;
    cout << conteudo << endl;


    arquivo1.close();
    arquivo2.close();
    arquivo3.close();

    return 0;
}