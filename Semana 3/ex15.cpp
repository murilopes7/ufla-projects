#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float n;
    ofstream saida("saida.txt");
    cin >> n;

    saida << (int)n << endl;
    saida << n - (int)n << endl;
    saida << floor(n) << endl;
    saida << ceil(n) << endl;
    saida << round(n) << endl;
    
    saida.close();
    return 0;
}
