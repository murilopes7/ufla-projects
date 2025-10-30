#include <iostream>
#include <string>
using namespace std;

double pesoTotal(const string &fita, unsigned int pos = 0) {
    if (pos >= fita.length()) return 0.0; // caso base

    double massaAtual = 0.0; // inicializa seguro
    switch(fita[pos]) {
        case 'A': massaAtual = 71.03711 + 18.01056; break;
        case 'C': massaAtual = 103.00919 + 18.01056; break;
        case 'G': massaAtual = 57.02146 + 18.01056; break;
        case 'T': massaAtual = 101.04768 + 18.01056; break;
        // sem mensagem de erro, valores inválidos serão considerados 0
    }

    return massaAtual + pesoTotal(fita, pos + 1);
}

int main() {
    string DNA;
    cin >> DNA;

    double peso = pesoTotal(DNA);

    // Imprime o peso com máxima precisão do double
    cout.precision(17);
    cout << peso << endl;

    return 0;
}

