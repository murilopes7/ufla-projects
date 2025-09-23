/*
    Um jogador de RPG gostaria de saber se seu D6 (dado de seis lados) está viciado. Para tanto, ele jogou o dado 20 vezes e registrou os resultados 
    obtidos em cada jogada. Faça um programa que receba os resultados das vinte jogadas e exiba no dispositivo de saída padrão a frequência com que cada um 
    dos valores possíveis apareceu. A saída deve seguir o padrão face do dado: frequência.

    Entradas:

        Sequência de 20 valores inteiros no intervalo [1,6].

    Saídas:

        Relação da frequência de cada lado do dado.

    Exemplo de entrada:

    4 4 5 5 6 2 3 4 3 2 1 2 5 6 5 4 3 2 4 2

    Exemplo de saída:

    1: 0.05
    2: 0.25
    3: 0.15
    4: 0.25
    5: 0.2
    6: 0.1

*/

#include <iostream>
using namespace std;

int main(){
    int valores[20];
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0;

    for (int i = 0; i < 20; i++){
        cin >> valores[i];
    }

    for (int i = 0; i < 20; i++){
             if (valores[i] == 1) cont1++;
        else if (valores[i] == 2) cont2++;
        else if (valores[i] == 3) cont3++;
        else if (valores[i] == 4) cont4++;
        else if (valores[i] == 5) cont5++;
        else if (valores[i] == 6) cont6++;
    }

    int soma = cont1 + cont2 + cont3 + cont4 + cont5 + cont6;

    cout << "1: " << (double) cont1 / (soma) << endl;
    cout << "2: " << (double) cont2 / (soma) << endl;
    cout << "3: " << (double) cont3 / (soma) << endl;
    cout << "4: " << (double) cont4 / (soma) << endl;
    cout << "5: " << (double) cont5 / (soma) << endl;
    cout << "6: " << (double) cont6 / (soma) << endl;
    

    return 0;
}