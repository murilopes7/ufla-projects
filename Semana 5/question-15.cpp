/*
    Você e seu colega combinaram de trocar um número em código. Para isso, vão usar um arquivo com diversas palavras. O código será formado a partir do 
    número de palavras que se repetem em sequência. A contagem de um dado dígito sempre se reinicia à cada vez que uma palavra é diferente da anterior. 
    Por exemplo considere o seguinte texto em um arquivo:

    café café pedra pão pão pão pão pão feijão feijão maçã maçã maçã maçã pera pera pera pera pera pera café

    O código gerado é 2152461. Obviamente o código não utiliza o dígito 0 (zero).

    Dessa maneira, elabore um programa que recebe o nome de um arquivo de texto e imprima o código associado ao texto do arquivo. O nome do arquivo a ser 
    aberto deverá ser digitado pelo usuário e o código associado escrito na saída padrão.

    Entradas:

        entrada padrão
            o nome do arquivo de onde serão lidas as palavras
        arquivo texto
            várias palavras separadas por espaços

    Saída:

        O código associado ao arquivo.

    Exemplo de entrada:

    arquivo-a-ser-aberto.txt

    Exemplo de arquivo:

    abc abc abc abc toda crianca crianca crianca tem que ler ler ler ler ler ler ler ler e e e e e e e e e escrever 

    Exemplo de saída:

    41311891 
*/

#include <iostream>
#include <fstream>
#include <cstring>   // strcmp, strcpy
using namespace std;

int main() {
    char nomeArquivo[100];
    cin >> nomeArquivo;  // lê o nome do arquivo

    ifstream arquivo(nomeArquivo);
    if (!arquivo) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    char palavra[101], anterior[101];
    int contador = 0;
    bool primeira = true;

    while (arquivo >> palavra) {
        if (primeira) {
            strcpy(anterior, palavra);
            contador = 1;
            primeira = false;
            continue;
        }

        if (strcmp(palavra, anterior) == 0) {
            contador++;
        } else {
            cout << contador;   // imprime o grupo anterior
            contador = 1;       // reinicia contagem
            strcpy(anterior, palavra);
        }
    }

    // imprime último grupo
    if (!primeira) {
        cout << contador;
    }

    cout << endl;

    arquivo.close();
    return 0;
}
