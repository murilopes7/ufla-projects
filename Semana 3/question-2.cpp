/*
    Faça um programa que lê um nome de arquivo e uma palavra qualquer (texto sem espaços) e depois escreve essa palavra num arquivo cujo nome é o nome lido. 
    Use o comportamento padrão de escrita em arquivos: se o arquivo não existe, ele deve ser criado, se já existe, o conteúdo anterior deve ser substituído.

    Entradas:

        Nome do arquivo de texto que será escrito (não terá espaços).
        Uma palavra (texto sem espaços).

    Saída (arquivo cujo nome foi lido anteriormente):

        A palavra lida anteriormente.

    Exemplo de entradas:

        arquivo_de_texto.txt
        AlgumConteudoParaOArquivo

    Exemplo de saída (arquivo_de_texto.txt):

        AlgumConteudoParaOArquivo
*/


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nome;
    cin >> nome;

    ofstream conteudo (nome);
    string text;
    cin >> text;
    
    conteudo << text << endl;
    conteudo.close();

    return 0;
}
