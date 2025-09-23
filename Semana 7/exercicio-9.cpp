#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    int i = 0;
    
    // ETAPA 1: Ler apenas números válidos (não negativos)
    while (i < 5) {
        int num;
        cin >> num;
        if (num >= 0) {
            vetor[i] = num;
            i++;
        }
        // Se for negativo, ignora e continua lendo
    }
    
    // ETAPA 2: Substituir do menor para maior
    for (int substituicoes = 0; substituicoes < 5; substituicoes++) {
        
        // Encontrar posição do menor valor que ainda não é -1
        int pos_menor = -1;
        int menor_valor = 999999; // valor muito grande
        
        for (int j = 0; j < 5; j++) {
            if (vetor[j] != -1 && vetor[j] < menor_valor) {
                menor_valor = vetor[j];
                pos_menor = j;
            }
        }
        
        // Substituir o menor por -1
        if (pos_menor != -1) {
            vetor[pos_menor] = -1;
        }
        
        // Mostrar o vetor atual
        for (int j = 0; j < 5; j++) {
            cout << vetor[j];
            if (j < 4) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}