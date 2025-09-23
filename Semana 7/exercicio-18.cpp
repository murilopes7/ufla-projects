#include <iostream>
using namespace std;

int main(){
    int vector[10] = {0};
    for (int i = 0; i < 10; i++)
        cin >> vector[i];

    int maior = -9999999, menor = 999999;
    int posicao_maior = 0, posicao_menor = 0;

    for (int i = 0; i < 10; i++){
        if (vector[i] > maior){
            maior =  vector[i];
            posicao_maior = i;
        }

        if (vector[i] < menor){
            menor =  vector[i];
            posicao_menor = i;
        }
    }

    cout << maior << " " << posicao_maior << endl << menor << " " << posicao_menor << endl;
    

    return 0;
}