#include <iostream>
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

    int * contador = new int[N];
    int cont = 0;
    for (int i = 0; i < N; i++) {
        for (char c : palavras[i]) {
            if (c == letra)
                contador[i]++;
        }
    }

    for (int i = 0; i < N; i++)
        if (contador[i] == 0) cont++;

    cout << cont << endl;

    delete[] palavras;
    return 0;
}
