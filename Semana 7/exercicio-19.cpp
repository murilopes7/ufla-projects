#include <iostream>
using namespace std;

int main(){
    float A[5] = {0}, B[5] = {0};

    for (int i = 0; i < 5; i++)
        cin >> A[i];
    
    for (int i = 0; i < 5; i++)
        cin >> B[i];

    float soma = 0.0;
    for (int i = 0; i < 5; i++){
        soma += A[i] * B[i];
    }

    cout << (float) soma << endl;
    return 0;
}