#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int dias;
    float valorLiquido;
    
    ifstream entrada("entrada");
    ofstream saida("saida");
    
    if (entrada.is_open()) {
        // Lê o valor de dias do arquivo de entrada
        entrada >> dias;
        
        // Calcula o valor líquido
        valorLiquido = (dias * 60) - (dias * 60 * 0.08);
        
        if (saida.is_open()) {
            saida << "R$ " << valorLiquido << endl;
        }
    }
    
    entrada.close();
    saida.close();
    
    return 0;
}