#include <iostream>
using namespace std;

int main() {
    int genero, idade;
    float anos;
    cin >> genero >> idade >> anos;

    if (genero < 0 || genero > 1 || idade < 0 || anos < 0)
        return -1;

    if (genero == 0) { // mulher
        if (anos > 15) {
            float faltam = 30 - anos;
            float pedagio = faltam * 0.3;
            cout << idade + faltam + pedagio << endl;
        } else {
            cout << 62 << endl;
        }
    } else { // homem
        if (anos > 20) {
            float faltam = 35 - anos;
            float pedagio = faltam * 0.3;
            cout << idade + faltam + pedagio << endl;
        } else {
            cout << 65 << endl;
        }
    }
}