#include <iostream>
using namespace std;

int main()
{
    float extras, faltas, minutos;
    cin >> extras >> faltas;
    minutos = (extras - (2.0 / 3.0 * (faltas)))* 60;

    if (minutos > 2400)
        cout << 500 << endl;
    else if (minutos > 1800 and minutos <= 2400)
        cout << 400 << endl;
    else if (minutos > 1200 and minutos <= 1800)
        cout << 300 << endl;
    else if (minutos > 600 and minutos <= 1200)
        cout << 200 << endl;
    else if (minutos <= 600)
        cout << 100 << endl;
}