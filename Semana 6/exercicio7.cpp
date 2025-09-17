#include <iostream>
#include <string>
using namespace std;

string arabicoParaRomano(int numero) {
    string resultado = "";
    
    // L = 50
    while (numero >= 50) {
        resultado += "L";
        numero -= 50;
    }
    
    // XL = 40
    while (numero >= 40) {
        resultado += "XL";
        numero -= 40;
    }
    
    // X = 10
    while (numero >= 10) {
        resultado += "X";
        numero -= 10;
    }
    
    // IX = 9
    while (numero >= 9) {
        resultado += "IX";
        numero -= 9;
    }
    
    // V = 5
    while (numero >= 5) {
        resultado += "V";
        numero -= 5;
    }
    
    // IV = 4
    while (numero >= 4) {
        resultado += "IV";
        numero -= 4;
    }
    
    // I = 1
    while (numero >= 1) {
        resultado += "I";
        numero -= 1;
    }
    
    return resultado;
}

int main() {
    int numero;
    
    while (true) {
        cin >> numero;
        
        // Se número negativo, encerra o programa
        if (numero < 0) {
            break;
        }
        
        // Verifica se está no intervalo válido [1,50]
        if (numero < 1 || numero > 50) {
            cout << "NUMERO INVALIDO" << endl;
        } else {
            // Chama o subprograma e exibe o resultado
            string romano = arabicoParaRomano(numero);
            cout << romano << endl;
        }
    }
    
    return 0;
}