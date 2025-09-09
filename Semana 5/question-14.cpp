/*
    Você e seu colega combinaram de trocar um número em código. Para isso, vão usar um arquivo com diversas palavras. O código será formado a partir do número de palavras que não se repetem em uma dada sequência. A contagem de um dado dígito sempre se reinicia à cada vez que uma palavra é igual à anterior. Por exemplo considere o seguinte texto em um arquivo:

    café pedra pão açúcar feijão feijão arroz tomate abacaxi maçã maçã pera pera uva tomate café

    Tem-se 4 palavras até a primeira repetição (feijão), então o primeiro dígito é 4. Da primeira palavra após a repetição (feijão) até a segunda repetição (maçã), temos 3 palavras (arroz tomate abacaxi). Da primeira palavra após segunda repetição (maçã) até a terceira repetição (pera) não temos nenhuma palavra, ou seja o dígito é zero. Após essa última repetição, temos 3 palavras até o fim do arquivo. Assim o código é 4303.

    Em outras palavras, as palavras repetidas funcionam como separadores e o dígito a ser utilizado é o número de palavras entre esses separadores. Para simplificar, considere que cada palavra repetida só irá se repetir uma única vez na sequência.

    Dessa maneira, elabore um programa que recebe o nome de um arquivo de texto e imprima o código associado ao texto do arquivo. O nome do arquivo a ser aberto deverá ser digitado pelo usuário e o código associado escrito na saída padrão.

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

    cantemos abc abc toda crianca tem que ler ler e escrever abc abc toda toda crianca tem que ler e e escrever

    Exemplo de saída:

    142041 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string gerarCodigo(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    
    if (!arquivo.is_open()) {
        return "";
    }
    
    string codigo = "";
    int contador = 0;
    string palavraAnterior = "";
    string palavraAtual;
    bool primeiraLeitura = true;
    
    while (arquivo >> palavraAtual) {
        if (primeiraLeitura) {
            // Primeira palavra do arquivo
            contador = 1;
            primeiraLeitura = false;
        } else {
            // Verifica se há repetição consecutiva
            if (palavraAtual == palavraAnterior) {
                // Encontrou repetição - adiciona contador atual (sem incluir a repetição)
                codigo += to_string(contador - 1);
                contador = 0; // Reinicia contador
            } else {
                // Não há repetição, incrementa contador
                contador++;
            }
        }
        palavraAnterior = palavraAtual;
    }
    
    // Adiciona o último segmento se houver palavras restantes
    if (contador > 0) {
        codigo += to_string(contador);
    }
    
    arquivo.close();
    
    // Se não gerou código algum, arquivo estava vazio
    if (codigo.empty()) {
        return "0";
    }
    
    return codigo;
}

int main() {
    string nomeArquivo;
    getline(cin, nomeArquivo);
    
    // Remove espaços em branco
    size_t inicio = nomeArquivo.find_first_not_of(" \t\n\r");
    if (inicio != string::npos) {
        size_t fim = nomeArquivo.find_last_not_of(" \t\n\r");
        nomeArquivo = nomeArquivo.substr(inicio, fim - inicio + 1);
    }
    
    string codigo = gerarCodigo(nomeArquivo);
    if (!codigo.empty()) {
        cout << codigo << endl;
    }
    
    return 0;
}