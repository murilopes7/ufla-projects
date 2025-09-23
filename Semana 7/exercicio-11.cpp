/*

    Faça um programa que leia 2 vetores A e B, de 10 posições cada. Faça um terceiro vetor C com a média do primeiro valor do vetor A com o último valor 
    do vetor B, colocado na primeira posição do vetor C, o segundo valor do vetor A com o penúltimo valor do vetor B, colocando na segunda posição do vetor C, 
    assim sucessivamente. Em seguida descubra o maior valor e o segundo maior valor dos vetores A e B.

    Entradas:

        float VetA[10], VetB[10]. - Vetores que devem ser preenchidos.

    Saídas:

        Vetor C, com a média dos dos vetores, como no exemplo. (float).
        Maior e segundo maior elemento do vetor A. (float).
        Maior e segundo maior elemento do vetor B. (float).

    Exemplos de Entradas e Saídas:

    Entradas:

    //Vetor A: 
    10   5   6   7   8   9   4   3   2   1

    //Vetor B: 
    5   4   9   6   8   7   1   3   2   10

    Saídas:

    10
    3.5
    4.5
    4
    7.5
    8.5
    5
    6
    3
    3
    
    10
    9
    
    10
    9

*/

#include <iostream>
using namespace std;

int main() {
    float VetA[10], VetB[10], VetC[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> VetA[i];
    }
    
    for (int i = 0; i < 10; i++) {
        cin >> VetB[i];
    }
    
    for (int i = 0; i < 10; i++) {
        VetC[i] = (VetA[i] + VetB[9 - i]) / 2.0;
    }
    
    for (int i = 0; i < 10; i++) {
        if (VetC[i] == (int)VetC[i]) {
            cout << (int)VetC[i] << endl;
        } else {
            cout << VetC[i] << endl;
        }
    }
    
    cout << endl;
    
    float maiorA = VetA[0];
    float segundoMaiorA = -999999;
    
    for (int i = 1; i < 10; i++) {
        if (VetA[i] > maiorA) {
            segundoMaiorA = maiorA;
            maiorA = VetA[i];
        } else if (VetA[i] > segundoMaiorA && VetA[i] != maiorA) {
            segundoMaiorA = VetA[i];
        }
    }
    
    float maiorB = VetB[0];
    float segundoMaiorB = -999999;
    
    for (int i = 1; i < 10; i++) {
        if (VetB[i] > maiorB) {
            segundoMaiorB = maiorB;
            maiorB = VetB[i];
        } else if (VetB[i] > segundoMaiorB && VetB[i] != maiorB) {
            segundoMaiorB = VetB[i];
        }
    }
    
    if (maiorA == (int)maiorA) {
        cout << (int)maiorA << endl;
    } else {
        cout << maiorA << endl;
    }
    
    if (segundoMaiorA == (int)segundoMaiorA) {
        cout << (int)segundoMaiorA << endl;
    } else {
        cout << segundoMaiorA << endl;
    }
    
    cout << endl;
    
    if (maiorB == (int)maiorB) {
        cout << (int)maiorB << endl;
    } else {
        cout << maiorB << endl;
    }
    
    if (segundoMaiorB == (int)segundoMaiorB) {
        cout << (int)segundoMaiorB << endl;
    } else {
        cout << segundoMaiorB << endl;
    }
    
    return 0;
}