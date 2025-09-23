#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int N = 15;
    int lista[N];

    ifstream inFile("entrada.txt");
    if (!inFile) {
        cerr << "Erro ao abrir entrada.txt" << endl;
        return 1;
    }

    // Lê os 15 números do arquivo
    for (int i = 0; i < N; i++) {
        inFile >> lista[i];
    }
    inFile.close();

    int qtd = 0;
    int distintos[N]; // armazena somente os valores diferentes

    for (int i = 0; i < N; i++) {
        if (lista[i] == 0) continue; // ignora zeros

        bool jaExiste = false;
        for (int j = 0; j < qtd; j++) {
            if (distintos[j] == lista[i]) {
                jaExiste = true;
                break;
            }
        }

        if (!jaExiste) {
            distintos[qtd] = lista[i];
            qtd++;
        }
    }

    // Saída apenas no cout
    cout << qtd << endl;

    return 0;
}
