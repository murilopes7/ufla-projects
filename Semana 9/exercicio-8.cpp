#include <iostream>
using namespace std;

string insercaoTexto(string palavra, int posicao, string insercao) {
    // pré-aloca tamanho suficiente para a string final
    string resultado(palavra.length() + insercao.length(), ' ');

    int k = 0; // índice para preencher a string resultado

    // copia os caracteres antes da posição
    for (int i = 0; i < posicao; i++) {
        resultado[k++] = palavra[i];
    }

    // insere a nova string
    for (unsigned int i = 0; i < insercao.length(); i++) {
        resultado[k++] = insercao[i];
    }

    // copia o restante da palavra original
    for (unsigned int i = posicao; i < palavra.length(); i++) {
        resultado[k++] = palavra[i];
    }

    return resultado;
}

int main() {
    string palavra;
    cin >> palavra;

    int posicao;
    cin >> posicao;

    string insercao;
    cin >> insercao;

    string newWord = insercaoTexto(palavra, posicao, insercao);
    cout << newWord << endl;

    return 0;
}
