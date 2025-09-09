/*
    A tradução automática é o processo automático de tradução de uma mensagem de um idioma original para outro através de um programa de computador. 
    Você foi convidado para fazer um programa que monta um dicionário de palavras em português e sua tradução em inglês. Para isso, você deve ler dois arquivos 
    que contém os dados de entrada. O primeiro arquivo conterá N palavras em portuguës e o segundo arquivo conterá N palavras em inglês. Junte o conteúdo dos 
    dois arquivos e grave em um terceiro arquivo contendo N linhas, em cada linha: palavraEmPortuguês: palavraEmInglês.

    Os nomes dos 3 arquivos deverão ser informados pelo usuário.

    Entradas:

        Nome do arquivo que contém as palavras em português.
        Nome do arquivo que contém as palavras em inglês.
        Nome do arquivo que será o dicionário.

    Saídas:

        Um arquivo com várias linhas, em cada linha uma palavra em português: uma palavra em inglês.

    Exemplo de Entrada:

        portugues.txt
        ingles.txt
        dicionario.txt

    Exemplo de conteúdo de portugues.txt:

        avião
        coração
        macaco
        pipoca

    Exemplo de conteúdo de inglês.txt:

        airplane
        heart
        monkey
        popcorn

    Exemplo de conteúdo de dicionario.txt:

        avião: airplane
        coração: heart
        macaco: monkey
        pipoca: popcorn
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string ptFile, enFile, dictFile;
    
    cin >> ptFile >> enFile >> dictFile;
    
    ifstream pt(ptFile);
    ifstream en(enFile);
    ofstream dict(dictFile);
    
    if (!pt || !en || !dict) {
        cout << "Error opening files" << endl;
        return 1;
    }
    
    string ptWord, enWord;
    while (getline(pt, ptWord) && getline(en, enWord)) {
        dict << ptWord << ": " << enWord << endl;
    }
    
    pt.close();
    en.close();
    dict.close();
    
    return 0;
}