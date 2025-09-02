#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Declaração de variáveis
    int area;
    double preco_galao;
    
    // Leitura do arquivo entrada.txt
    ifstream arquivo_entrada("entrada.txt");
    if (!arquivo_entrada.is_open()) {
        cerr << "Erro ao abrir o arquivo entrada.txt" << endl;
        return 1;
    }
    
    arquivo_entrada >> area;
    arquivo_entrada >> preco_galao;
    arquivo_entrada.close();
    
    // Cálculos
    // Rendimento: 1 litro para cada 3 metros quadrados
    double litros_necessarios = (double)area / 3.0;
    
    // Latas de 18 litros cada
    double latas_exatas = litros_necessarios / 18.0;
    
    // Arredonda para cima usando ceil() para obter a quantidade de latas inteiras
    int quantidade_latas = ceil(latas_exatas);
    
    // Preço total
    double preco_total = quantidade_latas * preco_galao;
    
    // Escrita no arquivo saida.txt
    ofstream arquivo_saida("saida.txt");
    if (!arquivo_saida.is_open()) {
        cerr << "Erro ao criar o arquivo saida.txt" << endl;
        return 1;
    }
    
    arquivo_saida << quantidade_latas << endl;
    arquivo_saida << fixed << setprecision(2) << preco_total << endl;
    arquivo_saida.close();
    
    cout << "Processamento concluído! Verifique o arquivo saida.txt" << endl;
    
    return 0;
}