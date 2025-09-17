#include <iostream>
#include <math.h>
using namespace std;

// Função recursiva para calcular phi usando série de raízes aninhadas
double calcularPhiRecursivo(int termos){
    if (termos == 1) return sqrt(1.0);
    
    return sqrt(1.0 + calcularPhiRecursivo(termos - 1));
}

// Procedimento que chama a função recursiva e retorna por referência
void calcularPhi(int numTermos, double& resultado) {
    resultado = calcularPhiRecursivo(numTermos);
}

int main()
{
    int termos;
    double phi;
    cin >> termos;

    // Verifica se o número de termos é válido
    if (termos <= 0) return 1;
    
    // Chama o procedimento para calcular phi
    calcularPhi(termos, phi);

    cout << phi << endl;

    return 0;
}