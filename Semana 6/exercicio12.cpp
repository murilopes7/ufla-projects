#include <iostream>
#include <iomanip>
using namespace std;

// Função para calcular o fatorial
double fatorial(int numero) {
    if (numero <= 1) return 1.0;
    
    double resultado = 1.0;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

// Versão otimizada - calcula fatorial incrementalmente
double calcularEuler(int n) {
    double euler = 1.0;  // Começa com 1/0! = 1
    double fat = 1.0;    // Fatorial atual
    
    for (int i = 1; i <= n; i++) {
        fat *= i;        // Calcula i! baseado em (i-1)!
        euler += 1.0 / fat;
    }
    
    return euler;
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(5) << calcularEuler(n) << endl;
    return 0;
}
