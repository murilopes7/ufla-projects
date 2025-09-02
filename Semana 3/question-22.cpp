/* 
    O dia dos namorados está chegando e você quer presentear a sua linda e querida namorada com o que ela mais gosta: doces! 
    E, para variar, ela gosta dos presentes mais caros e menos dos mais baratos.

    Tabela de preços dos doces:

        Caixa de chocolate - R$ 13,50
        Trufa de chocolate - R$ 2,50
        Pacotinho de Jujuba - R$ 1,50
        Drops de hortelã - R$ 1,00
        Bala de morango - R$ 0,25

    Desenvolva um programa para, a partir de uma certa quantia de dinheiro, calcule quantas caixas de chocolate, quantas trufas, quantos pacotinhos de jujuba, 
    quantos drops e quantas balas de morango ela irá ganhar no dia dos namorados. O resultado deve ser armazenado no arquivo doces.txt.

    Entradas:

        A entrada consiste em um linha contendo um número real (ponto flutuante) que representa a quantidade de dinheiro que o namorado tem para comprar os doces.

    Saídas (arquivo doces.txt:

        Seu programa deve imprimir no arquivo, um em cada linha: o valor do dinheiro gasto pelo namorado, o número de caixas de chocolate, de trufas, 
        de pacotinhos de jujuba, de drops e de balas de morango. O valor do dinheiro gasto pelo namorado deve ser formatado utilizando duas casas decimais. 
        Para isso, utilize a biblioteca iomanip e as funções fixed e setprecision().

    Exemplo de Entrada:

    36.25

    Exemplo de Saída (arquivo doces.txt):

    36.25
    2
    3
    1
    0
    1

    Exemplo de Entrada:

    50.00

    Exemplo de Saída (arquivo doces.txt):

    50.00
    3
    3
    1
    0
    2

    Exemplo de Entrada:

    15.60

    Exemplo de Saída (arquivo doces.txt):

    15.50
    1
    0
    1
    0
    2

*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    // Preços dos doces
    const double PRECO_CAIXA_CHOCOLATE = 13.50;
    const double PRECO_TRUFA = 2.50;
    const double PRECO_JUJUBA = 1.50;
    const double PRECO_DROPS = 1.00;
    const double PRECO_BALA = 0.25;
    
    double dinheiro;
    cin >> dinheiro;
    
    double dinheiroOriginal = dinheiro;
    
    // Contadores para cada tipo de doce
    int caixasChocolate = 0;
    int trufas = 0;
    int jujubas = 0;
    int drops = 0;
    int balas = 0;
    
    // Comprar caixas de chocolate (mais caras primeiro)
    caixasChocolate = (int)(dinheiro / PRECO_CAIXA_CHOCOLATE);
    dinheiro -= caixasChocolate * PRECO_CAIXA_CHOCOLATE;
    
    // Comprar trufas
    trufas = (int)(dinheiro / PRECO_TRUFA);
    dinheiro -= trufas * PRECO_TRUFA;
    
    // Comprar pacotinhos de jujuba
    jujubas = (int)(dinheiro / PRECO_JUJUBA);
    dinheiro -= jujubas * PRECO_JUJUBA;
    
    // Comprar drops
    drops = (int)(dinheiro / PRECO_DROPS);
    dinheiro -= drops * PRECO_DROPS;
    
    // Comprar balas (o que sobrar)
    balas = (int)(dinheiro / PRECO_BALA);
    dinheiro -= balas * PRECO_BALA;
    
    // Calcular o dinheiro efetivamente gasto
    double dinheiroGasto = dinheiroOriginal - dinheiro;
    
    // Escrever no arquivo doces.txt
    ofstream arquivo("doces.txt");
    
    arquivo << fixed << setprecision(2) << dinheiroGasto << endl;
    arquivo << caixasChocolate << endl;
    arquivo << trufas << endl;
    arquivo << jujubas << endl;
    arquivo << drops << endl;
    arquivo << balas << endl;
    
    arquivo.close();
    
    return 0;
}
