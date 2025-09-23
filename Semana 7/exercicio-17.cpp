#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], C[5]; // C armazenará A - B
    int tamanho = 0;       // quantidade de elementos na diferença

    // Ler vetor A
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }

    // Ler vetor B
    for (int i = 0; i < 5; i++) {
        cin >> B[i];
    }

    // Calcular diferença A - B
    for (int i = 0; i < 5; i++) {
        bool foundInB = false;
        // Verifica se A[i] está em B
        for (int j = 0; j < 5; j++) {
            if (A[i] == B[j]) {
                foundInB = true;
                break;
            }
        }

        // Se A[i] não estiver em B, adiciona a C
        if (!foundInB) {
            C[tamanho] = A[i];
            tamanho++;
        }
    }

    // Imprimir resultado
    if (tamanho == 0) {
        cout << "VAZIO" << endl;
    } else {
        for (int i = 0; i < tamanho; i++) {
            cout << C[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
