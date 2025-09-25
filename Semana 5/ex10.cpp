#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream arquivo("tentativas.txt");
    long long tentativa;        // para armazenar senhas de 8 dígitos
    long long senha = 23031999; // senha correta
    int tentativas = 0;
    bool acertou = false;

    while (tentativas < 4 && arquivo >> tentativa) {
        tentativas++;
        if (tentativa == senha) {
            acertou = true;
            break;
        }
    }
    
    if (acertou)
        cout << "acessou " << tentativas << endl;
    else
        cout << "nao " << tentativas << endl;
        
    return 0;
}