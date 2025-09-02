/*
    Implemente um programa que receba no arquivo tempo.txt um número que represente o tempo em milissegundos que se passou desde as 00 : 00 : 00 (HORAS : MINUTOS : SEGUNDOS) horas de um dia. O seu programa deve imprimir no arquivo horario.txt a hora representada por este número de milissegundos.

    Entrada (arquivo tempo.txt):

        Número inteiro representando o tempo em milissegundos.

    Saída (arquivo horario.txt):

        Tempo convertido para o formato "HORAS:MINUTOS:SEGUNDOS", conforme essa formatação (itens separados por dois pontos), em que HORAS e MINUTOS são números inteiros e SEGUNDOS um número em ponto flutuante.

    Exemplo de Entrada (arquivo tempo.txt):

    3600001

    Exemplo de Saída horario.txt:

    1:0:0.001

    Exemplo de Entrada (arquivo tempo.txt):

    8746900

    Exemplo de Saída horario.txt:

    2:25:46.9

*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    // Abre o arquivo tempo.txt para leitura
    ifstream arquivoTempo("tempo.txt");
    if (!arquivoTempo.is_open()) {
        cerr << "Erro ao abrir o arquivo tempo.txt" << endl;
        return 1;
    }
    
    // Lê o tempo em milissegundos
    long long milissegundos;
    arquivoTempo >> milissegundos;
    arquivoTempo.close();
    
    // Conversões
    // 1 segundo = 1000 milissegundos
    // 1 minuto = 60 segundos
    // 1 hora = 3600 segundos = 3600000 milissegundos
    
    // Calcula as horas
    long long horas = milissegundos / 3600000;
    milissegundos = milissegundos % 3600000;
    
    // Calcula os minutos
    long long minutos = milissegundos / 60000;
    milissegundos = milissegundos % 60000;
    
    // Calcula os segundos (com parte decimal)
    double segundos = milissegundos / 1000.0;
    
    // Abre o arquivo horario.txt para escrita
    ofstream arquivoHorario("horario.txt");
    if (!arquivoHorario.is_open()) {
        cerr << "Erro ao criar o arquivo horario.txt" << endl;
        return 1;
    }
    
    // Escreve o resultado no formato HORAS:MINUTOS:SEGUNDOS
    arquivoHorario << horas << ":" << minutos << ":";
    
    // Formatação dos segundos - remove zeros desnecessários à direita
    if (segundos == (int)segundos) {
        // Se é um número inteiro, escreve sem casas decimais
        arquivoHorario << (int)segundos;
    } else {
        // Usa uma string stream para formatar e limpar zeros à direita
        ostringstream oss;
        oss << fixed << setprecision(3) << segundos;
        string segundosStr = oss.str();
        
        // Remove zeros à direita após o ponto decimal
        while (segundosStr.back() == '0' && segundosStr.find('.') != string::npos) {
            segundosStr.pop_back();
        }
        // Remove o ponto decimal se não sobrou nenhum dígito após ele
        if (segundosStr.back() == '.') {
            segundosStr.pop_back();
        }
        
        arquivoHorario << segundosStr;
    }
    
    arquivoHorario.close();
    
    cout << "Conversão realizada com sucesso!" << endl;
    cout << "Resultado: " << horas << ":" << minutos << ":" << segundos << endl;
    
    return 0;
}