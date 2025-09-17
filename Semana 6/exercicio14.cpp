#include <iostream>
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

double combinatory (int n, int p){
    double fatorial_n = fatorial (n), fatorial_p = fatorial (p), fatorial_np = fatorial (n - p);
    return fatorial_n / (fatorial_p * fatorial_np);
}

int main(){
    int n, p;
    cin >> n >> p;

    cout << combinatory (n, p) << endl;
    return 0;
}