#include <iostream>
using namespace std;
struct produto {
    string nome;
    int quantidade;
    float preco;
};
int main(){
    int totalItens;
    cin >> totalItens;
    produto lista[totalItens] = new produto;
    for (int i = 0; i < totalItens; i++)
    {
        cin >> lista[i]->nome >> lista[i]->quantidade >> lista[i]->preco;
    }

    for (int i = 0; i < totalItens; i++)
    {
        cin >> *lista[i]->nome >> ": " << lista[i]->quantidade >> ", R$ " << lista[i]->preco << endl;
    }

    delete lista;

    return 0;
}