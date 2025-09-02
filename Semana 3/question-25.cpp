#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Variáveis para armazenar os dados
    double valorVista;
    int numeroPrestacoes;
    
    // Abrir arquivo de entrada e ler os dados
    ifstream arquivoVenda("venda.txt");
    arquivoVenda >> valorVista;
    arquivoVenda >> numeroPrestacoes;
    arquivoVenda.close();
    
    // Cálculos conforme o problema
    // 1. Total que o cliente pagaria antes da reclamação (valor à vista + 10%)
    double totalAntesReclamacao = valorVista * 1.10;
    
    // 2. Valor de cada prestação antes da reclamação
    double prestacaoAntesReclamacao = totalAntesReclamacao / numeroPrestacoes;
    
    // 3. Valor atualizado de cada prestação (10% de desconto sobre a prestação anterior)
    // Aplicar ceil() para arredondar centavos para cima
    double prestacaoAtualizada = ceil((prestacaoAntesReclamacao * 0.90) * 100.0) / 100.0;
    
    // 4. Valor total que o cliente deverá pagar depois da ordem do dono
    double totalDepoisOrdem = prestacaoAtualizada * numeroPrestacoes;
    
    // Abrir arquivo de saída e escrever os resultados
    ofstream arquivoCliente("cliente.txt");
    
    // Configurar formatação para duas casas decimais
    arquivoCliente << fixed << setprecision(2);
    
    // Escrever os resultados
    arquivoCliente << totalAntesReclamacao << endl;
    arquivoCliente << prestacaoAntesReclamacao << endl;
    arquivoCliente << prestacaoAtualizada << endl;
    arquivoCliente << totalDepoisOrdem << endl;
    
    arquivoCliente.close();
    
    return 0;
}