#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int codigo, pais;
    float peso;

    cin >> codigo;
    cin >> peso;
    cin >> pais;

    cout << fixed << setprecision(1) << peso * 1000.0 << endl;

    // Preço bruto
    if (codigo >= 1 and codigo <= 4)
        cout << fixed << setprecision(1) << peso * 1000.0 * 10 << endl;
    else if (codigo >= 5 and codigo <= 7)
        cout << fixed << setprecision(1) << peso * 1000.0 * 25 << endl;
    else
        cout << fixed << setprecision(1) << peso * 1000.0 * 35 << endl;

    // Imposto
    if (codigo >= 1 and codigo <= 4)
    {
        if (pais == 1)
            cout << fixed << setprecision(1) << peso * 1000.0 * 10 * 0 << endl;
        else if (pais == 2)
            cout << fixed << setprecision(1) << peso * 1000.0 * 10 * 0.15 << endl;
        else
            cout << fixed << setprecision(1) << peso * 1000.0 * 10 * 0.25 << endl;
    }

    else if (codigo >= 5 and codigo <= 7){
        if (pais == 1)
            cout << fixed << setprecision(1) << peso * 1000.0 * 25 * 0 << endl;
        else if (pais == 2)
            cout << fixed << setprecision(1) << peso * 1000.0 * 25 * 0.15 << endl;
        else
            cout << fixed << setprecision(1) << peso * 1000.0 * 25 * 0.25 << endl;
    }
    
    else {
        if (pais == 1)
            cout << fixed << setprecision(1) << peso * 1000.0 * 35 * 0 << endl;
        else if (pais == 2)
            cout << fixed << setprecision(1) << peso * 1000.0 * 35 * 0.15 << endl;
        else
            cout << fixed << setprecision(1) << peso * 1000.0 * 35 * 0.25 << endl;
    }

    // Preço total
    if (codigo >= 1 and codigo <= 4)
    {
        if (pais == 1)
            cout << fixed << setprecision(1) << peso * 1000.0 * 10 + peso * 1000.0 * 10 * 0 << endl;
        else if (pais == 2)
            cout << fixed << setprecision(1) << peso * 1000.0 * 10 + peso * 1000.0 * 10 * 0.15 << endl;
        else
            cout << fixed << setprecision(1) << peso * 1000.0 * 10 + peso * 1000.0 * 10 * 0.25 << endl;
    }

    else if (codigo >= 5 and codigo <= 7){
        if (pais == 1)
            cout << fixed << setprecision(1) << peso * 1000.0 * 25 + peso * 1000.0 * 25 * 0 << endl;
        else if (pais == 2)
            cout << fixed << setprecision(1) << peso * 1000.0 * 25 + peso * 1000.0 * 25 * 0.15 << endl;
        else
            cout << fixed << setprecision(1) << peso * 1000.0 * 25 + peso * 1000.0 * 25 * 0.25 << endl;
    }
    
    else {
        if (pais == 1)
            cout << fixed << setprecision(1) << peso * 1000.0 * 35 + peso * 1000.0 * 35 * 0 << endl;
        else if (pais == 2)
            cout << fixed << setprecision(1) << peso * 1000.0 * 35 + peso * 1000.0 * 35 * 0.15 << endl;
        else
            cout << fixed << setprecision(1) << peso * 1000.0 * 35 + peso * 1000.0 * 35 * 0.25 << endl;
    }

    return 0;
}