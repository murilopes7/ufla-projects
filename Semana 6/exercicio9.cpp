#include <iostream>
#include <math.h>
using namespace std;

float rounding (float numero){
    if ((int)numero % 2 == 0) return ceil(numero);
    else return floor(numero);
}

int main(){
    float numero;
    cin >> numero;

    cout << rounding(numero) << endl;
    return 0;
}