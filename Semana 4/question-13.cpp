#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, n6, n7;
    float valor;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    valor = 28.9 * n1 + 19.9 * n2 + 7.95 * n3 + 2.99 * n4 + 1.5 * n5 + 1.85 * n6 + 8.7 * n7;

    if (valor <= 200.0)
    {
        cout << valor << endl;
        cout << valor * 0.05 << endl;
        cout << valor - valor * 0.05 << endl;
    }
    else if (valor > 200.0)
    {
        cout << valor << endl;
        cout << valor * 0.1 << endl;
        cout << valor - valor * 0.1 << endl;
    }

    return 0;
}