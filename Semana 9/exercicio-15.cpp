#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char cifraCesar(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 'A' + ((c - 'A' + 5) % 26);
    }
    return c; // mantém espaços e quebras de linha
}

int main() {
    string nomeArquivo;
    cin >> nomeArquivo; // lê o nome do arquivo (sem espaços)

    ifstream entrada(nomeArquivo);
    
    ofstream saida("cifrado.txt", ios::out);
    
    string linha;
    while (getline(entrada, linha)) {
        for (char &c : linha) c = cifraCesar(c);
        saida << linha << '\n'; // mantém quebras de linha
    }

    entrada.close();
    saida.close();

    return 0;
}

