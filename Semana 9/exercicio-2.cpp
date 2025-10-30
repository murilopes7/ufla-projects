#include <iostream>
using namespace std;

int main() {
    string P;
    int N;
    
    cin >> P;    
    cin >> N;      
    
    string palavra, resultado;
    int max_iguais = -1;

    for (int i = 0; i < N; i++) {
        cin >> palavra;
        int iguais = 0;
        for (int j = 0; j < 5; j++) {
            if (P[j] == palavra[j]) {
                iguais++;
            }
        }

        if (iguais >= max_iguais) {
            max_iguais = iguais;
            resultado = palavra;
        }
    }

    cout << resultado << endl;

    return 0;
}
