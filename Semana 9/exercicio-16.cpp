#include <iostream>
#include <string>
using namespace std;

int main() {
    const int UMPRIMO = 13;
    const int M = 10;

    int n;
    cin >> n; // número de palavras

    long hashMensagem = 0;

    for (int i = 0; i < n; i++) {
        string palavra;
        cin >> palavra;

        long hash = 0;
        for (unsigned j = 0; j < palavra.size(); j++) {
            hash = (UMPRIMO * hash + palavra[j]) % M;
        }

        cout << hash << " ";
        hashMensagem += hash;
    }

    cout << hashMensagem << endl;

    return 0;
}

