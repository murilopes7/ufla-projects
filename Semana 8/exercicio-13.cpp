/*


Você tem um conjunto de números reais e deseja filtrar alguns deles. Mais precisamente, você deseja descartar aqueles que estiverem fora de um determinado limite com relação à média. Faça um programa que leia a quantidade inicial de números a serem lidos e aloque, dinamicamente, um vetor com essa capacidade. Em seguida, leia a diferença máxima tolerada em relação à média dos valores lidos e imprima na saída padrão apenas aqueles valores que estejam dentro do limite estabelecido (para mais ou para menos), ou seja, valores entre a média mais a diferença máxima e a média menos a diferença máxima.

Entradas:

    A quantidade de valores.
    Cada um dos valores.
    A diferença máxima com relação à média (pode ser para mais ou para menos).

Saídas:

    A média dos valores.
    A diferença entre cada valor e a média dos valores, na forma de um número não negativo.
    Cada número que esteja dentro do limite, na ordem original. Se a diferença em relação à média for igual à diferença máxima, o valor está dentro do limite.

Exemplo de entradas:

5
19.01 66.70 49.34 71.96 82.88 
9.1

Exemplo de saídas:

57.978
38.968 8.72199 8.638 13.982 24.902 
66.7 49.34


*/

#include <iostream>
using namespace std;

float absoluto(float x) {
    if (x < 0) return -x;
    else return x;
}

float mediaValores(float valores[], int tamanho){
    float media = 0, soma = 0.0;
    for (int i = 0; i < tamanho; i++) soma += valores[i];
    media = (float) soma / tamanho;
    return media;
}

float* diferenca (float valores[], int tamanho){
    float *diferenca = new float [tamanho];
    float media = mediaValores(valores, tamanho);

    for (int i = 0; i < tamanho; i++) {
        diferenca[i] = valores[i] - media;
        if (diferenca[i] < 0) diferenca[i] = -diferenca[i];
    }

    return diferenca;
}

void mostrarDentroDoLimite(float valores[], int tamanho, float difMax) {
    for (int i = 0; i < tamanho; i++) {
        double diferenca = absoluto(valores[i] - mediaValores(valores, tamanho));
        if (diferenca <= difMax) {
            cout << valores[i] << " ";
        }
    }

    cout << endl;
}

int main(){
    int quantidade;
    cin >> quantidade;

    float * valores = new float[quantidade];
    for (int i = 0; i < quantidade; i++) cin >> valores[i];

    float diff = 0.0;
    cin >> diff;

    float media = mediaValores (valores, quantidade);
    cout << media << endl;

    float * diference = diferenca(valores, quantidade);
    for (int i = 0; i < quantidade; i++) cout << diference[i] << " ";
    cout << endl;

    mostrarDentroDoLimite(valores, quantidade, diff);

    delete [] valores;
    delete [] diference;

}