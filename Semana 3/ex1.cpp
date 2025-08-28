#include <iostream>
#include <cmath>
using namespace std;

/*
int main(){
    float n;
    cin >> n;

    cout << n * n << endl;
    cout << n * n * n << endl;
    cout << sqrt(n) << endl;

    return 0;

}*/

int main(){
    int x = 61;
    float y = x % 7;

    float div = x / y;

    cout << "Resultado: " << div << endl;

    return 0;
}