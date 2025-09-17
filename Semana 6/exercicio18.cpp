#include <iostream>
using namespace std;

void desenharTriangulo(int tamanho)
{
    for (int linha = 1; linha <= tamanho; linha++)
    {
        for (int posicao = 1; posicao <= linha; posicao++){
            if (posicao % 2 == 1) cout << "@";
            else cout << "#";
        }

        cout << endl;
    }
}

int main(){
    int altura;

    cin >> altura;

    desenharTriangulo(altura);

    return 0;
}