#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, area;
    ifstream entrada("triangulo.txt");
    ofstream saida("saida.txt");

    if (entrada.is_open())
    {
        entrada >> a >> b;
        area = a * b / 2;

        saida << area << endl;
        cout << area << endl;
    }

    entrada.close();
    saida.close();
    return 0;
}
