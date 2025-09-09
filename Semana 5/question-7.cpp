#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeArquivo;
    cin >> nomeArquivo;

    ifstream arquivoEntrada(nomeArquivo);
    int anterior, atual;
    int contador = 0;

    // Laço para ler o restante dos números
    while (arquivoEntrada >> atual) {
        if (atual == 2 * anterior) {
            contador++;
        }
        anterior = atual; // atual se torna o anterior para a próxima comparação
    }

    arquivoEntrada.close();

    // Salva o resultado em "dobro.txt"
    ofstream arquivoSaida("dobro.txt");

    arquivoSaida << contador;
    arquivoSaida.close();


    return 0;
}
