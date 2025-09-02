/*
    As vendas parceladas se tornaram uma ótima opção para lojistas, que a cada dia criam novas promoções para tentar conquistar novos clientes. 
    Faça um programa em que o lojista possa entrar com o preço de alguma coisa, no arquivo valor.txt e receba as seguintes informações no arquivo opcoes.txt:

        O valor com 8% de desconto com o pagamento à vista.
        O valor da prestação para parcelar sem juros em 4x.
        O valor da prestação com juros, em 10x, com 10% de acréscimo no valor do produto.

    Utilize fixed e setprecision() para garantir que os valores sejam impressos com duas casas decimais.

    Entrada (arquivo valor.txt):

        Número real referente ao preço do produto.

    Saídas (arquivo opcoes.txt):

        O valor referente à 8% de desconto para venda à vista.
        O valor de uma prestação em 4x.
        O valor da prestação com juros, em 10x, com 10% de acréscimo no valor do produto.

    Exemplo de entrada (arquivo valor.txt):

    1100.00

    Exemplo de saída (arquivo opcoes.txt):

    1012.00
    275.00
    121.00

    Exemplo de Entrada (arquivo valor.txt):

    649.95

    Exemplo de Saída (arquivo opcoes.txt):

    597.95
    162.49
    71.49
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main(){
    ifstream arquivo ("valor.txt");
    ofstream opcoes ("opcoes.txt");

    float preco;

    arquivo >> preco;

    opcoes << fixed << setprecision(2) << preco * 0.92 << endl;
    opcoes << fixed << setprecision(2) << preco / 4 << endl;
    opcoes << fixed << setprecision(2) << (preco / 10) + preco * 0.01 << endl;

    arquivo.close();
    opcoes.close();
}