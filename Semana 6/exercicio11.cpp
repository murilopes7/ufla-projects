#include <iostream>
using namespace std;

void piramide (int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if(j % 2 == 0) cout << "*";
            else cout << "=";
        }
        
        cout << endl;
    }
}

int main(){
    int numero;
    cin >> numero;

    piramide (numero);
    return 0;
}