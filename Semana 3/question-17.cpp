/*
    Faça um programa que receba o salário​ base de um funcionário, calcule e mostre o seu salário a receber, mostrando descontos e adicionais. Você receberá da entrada os seguintes valores: salário base, gratificação e percentual de imposto sobre o salário base. Escreva no arquivo holerite.txt os seguintes dados: valor total bruto, valor do desconto, valor líquido a ser recebido. Utilize fixed e setprecision() para imprimir os valores com duas casas decimais.

    Entradas:

        Valor do salário base do funcionário (float).
        Valor da gratificação do funcionário (float).
        Percentual do imposto sobre o salário base do funcionário (float).

    Saídas (arquivo holerite.txt):

        Salário final bruto (salário + gratificação)
        Valor do desconto com imposto
        Salário final líquido

    Exemplo de Entrada:

    920
    80
    15

    Exemplo de Saída (arquivo holerite.txt):

    1000.00
    150.00
    850.00

    Exemplo de Entrada:

    3210
    50
    25

    Exemplo de Saída (arquivo holerite.txt):

    3260.00
    815.00
    2445.00
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    float salarioBase, gratificacao, percentualImposto;
    
    // Entrada de dados
    cout << "Digite o salário base: ";
    cin >> salarioBase;
    
    cout << "Digite a gratificação: ";
    cin >> gratificacao;
    
    cout << "Digite o percentual de imposto (%): ";
    cin >> percentualImposto;
    
    // Cálculos
    float salarioBruto = salarioBase + gratificacao;
    float valorDesconto = (percentualImposto / 100.0) * salarioBruto;
    float salarioLiquido = salarioBruto - valorDesconto;
    
    // Criação do arquivo holerite.txt
    ofstream arquivo("holerite.txt");
    
    if (arquivo.is_open()) {
        // Configuração para 2 casas decimais
        arquivo << fixed << setprecision(2);
        
        // Escrita dos dados no arquivo
        arquivo << salarioBruto << endl;
        arquivo << valorDesconto << endl;
        arquivo << salarioLiquido << endl;
        
        arquivo.close();
        
        cout << "\nHolerite gerado com sucesso no arquivo 'holerite.txt'!" << endl;
        
        // Exibição dos resultados na tela
        cout << "\nResumo do Holerite:" << endl;
        cout << fixed << setprecision(2);
        cout << "Salário Bruto: R$ " << salarioBruto << endl;
        cout << "Desconto (Imposto): R$ " << valorDesconto << endl;
        cout << "Salário Líquido: R$ " << salarioLiquido << endl;
        
    } else {
        cout << "Erro ao criar o arquivo holerite.txt!" << endl;
    }
    
    return 0;
}