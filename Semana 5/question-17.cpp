/*
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos dos habitantes. 
    Faça um programa que leia as informações desta pesquisa. Os dados estão armazenados em um arquivo chamado entrada. Para cada habitante, é fornecido o 
    salário, seguido do número de filhos.

    Use a estrutura de repetição while em sua implementação. Assuma que cada dado de entrada será fornecido em uma linha diferente no arquivo.

    Após a leitura de dados, seu programa deverá escrever as seguintes informações:

        Média do salário da população;
        Média do número de filhos;
        Maior salário;
        Percentual de pessoas com salário até R$1.000,00 (inclusive).

    Entradas (para cada habitante)(conteúdo do arquivo entrada):

        Salário do habitante (número real);
        Número de filhos do habitante (número inteiro).

    Saídas:

        Quatro números reais que indicam, nesta ordem, as informações: média dos salários dos habitantes; média do número de filhos dos habitantes; maior salário dentre todos os salários cadastrados; e percentual de pessoas que possuem salários até R$1.000,00 (inclusive).

    Exemplo de entrada (conteúdo do arquivo entrada):

    850.35 
    3 
    3123.00 
    2 
    1000.00 
    2 
    4084.70 
    1 
    3500.00 
    3 

    Exemplo de saída:

    2511.61
    2.2
    4084.70
    0.4
*/


/*
#include <iostream>
#include <fstream>
#include <iomanip> // para setprecision
using namespace std;

int main() {
    ifstream arquivo("entrada");

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    double salario, somaSalario = 0.0, maiorSalario = 0.0;
    int filhos, somaFilhos = 0;
    int totalHabitantes = 0, contadorSalario1000 = 0;

    // leitura: salário e número de filhos
    while (arquivo >> salario >> filhos) {
        somaSalario += salario;
        somaFilhos += filhos;
        totalHabitantes++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 1000.0) {
            contadorSalario1000++;
        }
    }

    arquivo.close();

    if (totalHabitantes == 0) {
        cout << "Nenhum dado no arquivo." << endl;
        return 0;
    }

    double mediaSalario = somaSalario / totalHabitantes;
    double mediaFilhos = (double)somaFilhos / totalHabitantes;
    double percentual = (double)contadorSalario1000 / totalHabitantes;

    // saída com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << mediaSalario << endl;
    cout << mediaFilhos << endl;
    cout << maiorSalario << endl;
    cout << percentual << endl;

    return 0;
}*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream arquivo("entrada");
    
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo 'entrada'" << endl;
        return 1;
    }
    
    double salario;
    int filhos;
    
    // Variáveis para cálculos
    double somaSalarios = 0.0;
    int somaFilhos = 0;
    double maiorSalario = 0.0;
    int pessoasAte1000 = 0;
    int totalPessoas = 0;
    
    // Lê os dados usando while
    while (arquivo >> salario >> filhos) {
        // Acumula dados para médias
        somaSalarios += salario;
        somaFilhos += filhos;
        
        // Verifica maior salário
        if (totalPessoas == 0 || salario > maiorSalario) {
            maiorSalario = salario;
        }
        
        // Conta pessoas com salário até R$1000,00
        if (salario <= 1000.00) {
            pessoasAte1000++;
        }
        
        totalPessoas++;
    }
    
    arquivo.close();
    
    // Calcula e exibe os resultados
    if (totalPessoas > 0) {
        double mediaSalarios = somaSalarios / totalPessoas;
        double mediaFilhos = (double)somaFilhos / totalPessoas;
        double percentualAte1000 = (double)pessoasAte1000 / totalPessoas;
        
        // Saída sem formatação fixa - deixa o sistema decidir
        cout << mediaSalarios << endl;
        cout << mediaFilhos << endl;
        cout << maiorSalario << endl;
        cout << percentualAte1000 << endl;
    }
    
    return 0;
}
