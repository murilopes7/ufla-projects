#include <iostream>
using namespace std;

string probabilidade(string pai, string mae, string corDesejada) {
    // Verificar se as cores dos pais são válidas
    if (pai != "Marrom" && pai != "Verde" && pai != "Azul") {
        return "ERRO";
    }
    if (mae != "Marrom" && mae != "Verde" && mae != "Azul") {
        return "ERRO";
    }
    
    // Verificar se a cor desejada do filho é válida
    if (corDesejada != "Verde" && corDesejada != "Azul") {
        return "ERRO";
    }
    
    // Usar estrutura condicional para determinar a probabilidade
    if (pai == "Marrom" && mae == "Marrom") {
        if (corDesejada == "Verde") return "8.33%";
        if (corDesejada == "Azul") return "2.78%";
    }
    else if (pai == "Marrom" && mae == "Verde") {
        if (corDesejada == "Verde") return "27.78%";
        if (corDesejada == "Azul") return "5.56%";
    }
    else if (pai == "Marrom" && mae == "Azul") {
        if (corDesejada == "Verde") return "16.67%";
        if (corDesejada == "Azul") return "16.67%";
    }
    else if (pai == "Verde" && mae == "Marrom") {
        if (corDesejada == "Verde") return "27.78%";
        if (corDesejada == "Azul") return "5.56%";
    }
    else if (pai == "Verde" && mae == "Verde") {
        if (corDesejada == "Verde") return "88.64%";
        if (corDesejada == "Azul") return "10.86%";
    }
    else if (pai == "Verde" && mae == "Azul") {
        if (corDesejada == "Verde") return "66.42%";
        if (corDesejada == "Azul") return "33.08%";
    }
    else if (pai == "Azul" && mae == "Marrom") {
        if (corDesejada == "Verde") return "16.67%";
        if (corDesejada == "Azul") return "16.67%";
    }
    else if (pai == "Azul" && mae == "Verde") {
        if (corDesejada == "Verde") return "66.42%";
        if (corDesejada == "Azul") return "33.08%";
    }
    else if (pai == "Azul" && mae == "Azul") {
        if (corDesejada == "Verde") return "0.50%";
        if (corDesejada == "Azul") return "99%";
    }
    
    return "ERRO";
}

int main() {
    string pai, mae, corDesejada;
    
    // Ler as três strings na mesma linha
    cin >> pai >> mae >> corDesejada;
    
    // Calcular e imprimir a probabilidade
    cout << probabilidade(pai, mae, corDesejada) << endl;
    
    return 0;
}