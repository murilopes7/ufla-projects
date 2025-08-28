#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float valorInicial, valorFinal;
    ifstream entrada("entrada");

    if (entrada.is_open())
    {
        entrada >> valorInicial;

        valorFinal = valorInicial - valorInicial * 0.09;
        cout << "R$ " << round(valorFinal * 10.0) / 10.0 << endl;
    }

    entrada.close();

    return 0;
}