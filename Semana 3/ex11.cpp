#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main()
{
    ofstream arquivo("salario.txt");
    float real, dolar, euro, libra;
    cin >> real;

    dolar = real / 2.13;
    euro = real / 2.84;
    libra = real / 3.34;

    arquivo << round(dolar * 100.0) / 100.0 << endl;
    arquivo << round(euro * 100.0) / 100.0 << endl;
    arquivo << round(libra * 100.0) / 100.0 << endl;
    arquivo.close();
    return 0;
}
