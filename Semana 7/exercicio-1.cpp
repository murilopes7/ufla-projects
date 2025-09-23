/*
    Dadas as temperaturas que foram registradas diariamente durante uma semana, faça um programa que, usando vetores, calcule e mostre a temperatura média 
    e em quantos dias dessa semana a temperatura esteve acima da média. Informe também a maior temperatura no período.

    Entradas:

        double vet[7] - Vetor de temperaturas (separados por espaços)

    Saída:

        double media - temperatura média calculada
        int total - total de dias com temperatura acima da média
        double maior temperatura

    Exemplo de Entradas e Saída:

    Entradas:

    25 26.8 32 27.5 26.5 28.1 24

    Saída:

    27.1
    3
    32
*/

/* #include <iostream>
#include <iomanip>
using namespace std;

double averageTemperature (double temp[7]){
    double soma = 0.0;
    for (int i = 0; i < 7; i++){
       soma += temp[i];
    }

    return soma / 7.0;
}

int aboveAverage (double temp[7]){
    double average = averageTemperature (temp);
    int contador = 0;
    for (int i = 0; i < 6; i++){
        if (temp[i] > average) contador++; 
    }

    return contador;
}

double highestTemperature (double temp[7]){
    double maior = -253.15;
    for (int i = 0; i < 7; i++){
        if (temp[i] > maior) maior = temp[i];
    }

    return maior;
}

int main (){
    double temperature[7];
    for (int i = 0; i < 7; i++){
        cin >> temperature[i];
    }

    cout << fixed << setprecision(1) << averageTemperature (temperature) << endl;
    cout << aboveAverage (temperature) << endl;
    cout << highestTemperature(temperature) << endl;

    return 0;
} */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double vet[7];
    double soma = 0.0;
    double media;
    int total = 0;
    double maior_temperatura;
    
    // Lê as 7 temperaturas
    for (int i = 0; i < 7; i++) {
        cin >> vet[i];
        soma += vet[i];
    }
    
    // Calcula a média
    media = soma / 7;
    
    // Encontra a maior temperatura
    maior_temperatura = vet[0];
    for (int i = 1; i < 7; i++) {
        if (vet[i] > maior_temperatura) {
            maior_temperatura = vet[i];
        }
    }
    
    // Conta quantos dias tiveram temperatura acima da média
    for (int i = 0; i < 7; i++) {
        if (vet[i] > media) {
            total++;
        }
    }
    
    // Exibe os resultados
    cout << fixed << setprecision(1) << media << endl;
    cout << total << endl;
    cout << maior_temperatura << endl;
    
    return 0;
}