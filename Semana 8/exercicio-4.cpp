#include <iostream>
using namespace std;

int main(){
    int quantidade = 0;
    cin >> quantidade;

    int * vetor = new int [quantidade];
    for (int i = 0; i < quantidade; i++) cin >> vetor[i];

    int delimitador[2] = {0};
    for (int i = 0; i < 2; i++) cin >> delimitador[i];

    int posA = 0, posB = 0;

    // Encontrar a primeira ocorrência de cada delimitador
    for (int i = 0; i < quantidade; i++) {
        if (vetor[i] == delimitador[0]) 
            posA = i;

        if (vetor[i] == delimitador[1]) 
            posB = i;
        
    }

    int posInicial = 0, posFinal = 0;
    if (posA < posB) {
        posInicial = posA;
        posFinal = posB;
    } else {
        posInicial = posB;
        posFinal = posA;
    }


    // Imprimir elementos entre delimitadores em ordem inversa
    for (int i = posFinal - 1; i > posInicial; i--) 
        cout << vetor[i] << " ";
    

    cout << endl;

    delete [] vetor;
    return 0;
}