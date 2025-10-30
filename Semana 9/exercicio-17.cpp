#include <iostream>
#include <string>
using namespace std;

int main() {
    const int UMPRIMO = 97;
    const int M = 100;

    int n;
    cin >> n; // número de palavras
    long somaTotal = 0;

    for (int i = 0; i < n; i++) {
        string palavra;
        cin >> palavra;

        long hash = 0;
        for (unsigned j = 0; j < palavra.size(); j++) {
            hash = (UMPRIMO * hash + palavra[j]) % M;
        }

        cout << hash;
        if (i < n - 1) cout << " ";
        somaTotal += hash;
    }

    cout << " " << somaTotal << endl;

    return 0;
}

