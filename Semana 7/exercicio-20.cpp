#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int N = 10;
    int vet[N];
    int cont[N]; // vetor auxiliar para contagens / marcação

    ifstream inFile("entrada.txt");
    if (!inFile) return 1; // erro ao abrir (pode ajustar mensagem se quiser)

    // Ler 10 valores
    for (int i = 0; i < N; i++) inFile >> vet[i];
    inFile.close();

    // Inicializa contagens com 0
    for (int i = 0; i < N; i++) cont[i] = 0;

    // Para cada posição i, conta quantas vezes vet[i] aparece
    // e marca repetições posteriores com -1
    for (int i = 0; i < N; i++) {
        if (cont[i] != 0 && cont[i] != -1) continue; // já contado (não estritamente necessário)
        int c = 1;
        for (int j = i + 1; j < N; j++) {
            if (vet[j] == vet[i]) {
                c++;
                cont[j] = -1; // marca como repetição
            }
        }
        cont[i] = c;
    }

    // Achar a maior frequência (maior valor em cont[], ignorando -1)
    int maior = 0;
    for (int i = 0; i < N; i++) {
        if (cont[i] > maior) maior = cont[i];
    }

    // Contar quantas modas (quantas posições i têm cont[i] == maior)
    int qtdModas = 0;
    for (int i = 0; i < N; i++) {
        if (cont[i] == maior) qtdModas++;
    }

    ofstream outFile("saida.txt");
    if (!outFile) return 1;

    // Escrever quantidade de modas
    outFile << qtdModas << endl;

    // Escrever os valores das modas (na ordem de primeira ocorrência)
    bool first = true;
    for (int i = 0; i < N; i++) {
        if (cont[i] == maior) {
            if (!first) outFile << " ";
            outFile << vet[i];
            first = false;
        }
    }
    outFile << endl;

    outFile.close();
    return 0;
}
