#include <iostream>
using namespace std;

float parcelas (int n){
    int i = 1;
    float soma = 0.0;
    while (i <= n){
        soma += (float)(i * (i + 1)) / (i + 3);
        i++;
    }

    return soma;
}

int main(){
    int n;
    cin >> n;

    cout << parcelas (n) << endl;

    return 0;
}