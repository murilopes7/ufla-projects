#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main()
{
    float c, f, k;
    ofstream arquivo("temperatura.txt");
    cin >> c;
    
    k = c + 273;
    f = 1.8 * c + 32;

    cout << k << " K\n" << f << " F" << endl;

    arquivo << k << " K\n" << f << " F" << endl;
    arquivo.close();
    return 0;
}
