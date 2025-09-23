#include <iostream>
using namespace std;

int main(){
    int A[5] = {0}, B[5] = {0};
    int vetor[10] = {0};
    int tamanho = 0;

    for (int i = 0; i < 5; i++) {
        cin >> A[i];
        vetor[tamanho] = A[i]; 
        tamanho++;
    }


    // Ler B
    for (int i = 0; i < 5; i++) {
        cin >> B[i];
        bool existe = false;
        // verifica se B[i] já está em C
        for (int j = 0; j < tamanho; j++) {
            if (B[i] == vetor[j]) {
                existe = true;
                break; // já existe, não precisa adicionar
            }
        }
        if (!existe) {
            vetor[tamanho] = B[i]; // adiciona B[i] se não existe
            tamanho++;
        }
    }


    // Imprimir o vetor união
    for (int i = 0; i < tamanho; i++) 
        cout << vetor[i] << " ";
        
    cout << endl;

    return 0;
}