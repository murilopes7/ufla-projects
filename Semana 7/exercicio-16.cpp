#include <iostream>
using namespace std;

int main(){
    int A[5], B[5], vetor[5]; // vetor armazenará a interseção
    int tamanho = 0;

    // Ler A
    for (int i = 0; i < 5; i++) 
        cin >> A[i];

    // Ler B
    for (int i = 0; i < 5; i++) 
        cin >> B[i];

    // Calcular interseção
    for (int i = 0; i < 5; i++) {
        bool foundInB = false;
        // Verifica se A[i] está em B
        for (int j = 0; j < 5; j++) {
            if (A[i] == B[j]) {
                foundInB = true;
                break; // já encontramos em B
            }
        }

        if (foundInB) {
            bool alreadyInC = false;
            // Verifica se A[i] já foi adicionado ao vetor
            for (int k = 0; k < tamanho; k++) {
                if (A[i] == vetor[k]) {
                    alreadyInC = true;
                    break;
                }
            }
            if (!alreadyInC) {
                vetor[tamanho] = A[i];
                tamanho++;
            }
        }
    }

    // Imprimir resultado
    if (tamanho == 0) 
        cout << "VAZIO" << endl;

    else {
        for (int i = 0; i < tamanho; i++) 
            cout << vetor[i] << " ";
        
        cout << endl;
    }

    return 0;
}
