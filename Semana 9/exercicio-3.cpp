#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string *palavras = new string[N];

    for (int i = 0; i < N; i++) {
        cin >> palavras[i];
    }

    char letra;
    cin >> letra;

    string resultado = "";
    int maior = -1;

    for (int i = 0; i < N; i++) {
        int contador = 0;

        for (char c : palavras[i]) {
            if (c == letra)
                contador++;
        }
        
        if (contador >= maior) {
            maior = contador;
            resultado = palavras[i];
        }
    }

    cout << resultado << endl;

    delete[] palavras;
    return 0;
}
