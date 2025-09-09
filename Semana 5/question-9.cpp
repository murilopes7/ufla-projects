#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream boliche("boliche.txt");

    string linha;
    int contadorLinha = 1; // Começamos na linha 1
    int strikesJogador1 = 0;
    int strikesJogador2 = 0;

    while (boliche >> linha)
    {
        if (linha == "VERDE")
        { // VERDE significa strike
            if (contadorLinha % 2 != 0)
            { // linhas ímpares -> jogador 1
                strikesJogador1++;
            }
            else
            { // linhas pares -> jogador 2
                strikesJogador2++;
            }
        }

        contadorLinha++;
    }

    if (strikesJogador1 > strikesJogador2)
        cout << "Jogador 1 é o ganhador da aposta" << endl;
    else
        cout << "Jogador 2 é o ganhador da aposta" << endl;
    boliche.close();
    return 0;
}