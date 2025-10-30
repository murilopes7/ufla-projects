#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int temp = n;
    int digits = 0;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    string numero(digits, '0'); 

    for (int i = digits - 1; i >= 0; i--) {
        numero[i] = '0' + (n % 10);
        n /= 10;
    }

    unsigned int len = numero.size();

    // Separar os dois últimos dígitos
    char decimal[3]; // dois últimos dígitos + '\0'
    decimal[0] = numero[len - 2];
    decimal[1] = numero[len - 1];
    decimal[2] = '\0';

    // Parte inteira = resto do número
    int lenInt = len - 2;
    char inteiro[50];
    int i;
    for (i = 0; i < lenInt; i++) {
        inteiro[i] = numero[i];
    }
    inteiro[lenInt] = '\0';

    // Contar quantos pontos serão necessários
    int dotCount = (lenInt - 1) / 3;
    int newLenInt = lenInt + dotCount;

    char formatado[60];
    formatado[newLenInt] = '\0';

    // Preencher formatado da direita para a esquerda
    int pos = newLenInt - 1;
    int contador = 0;
    int idx = lenInt - 1;

    while (idx >= 0) {
        formatado[pos] = inteiro[idx];
        pos--;
        contador++;
        idx--;
        if (contador == 3 && pos >= 0) {
            formatado[pos] = '.';
            pos--;
            contador = 0;
        }
    }

    // Adicionar vírgula e os dois últimos dígitos
    char resultado[70];
    i = 0;
    int j = 0;
    while (formatado[i] != '\0') {
        resultado[j++] = formatado[i++];
    }

    resultado[j++] = ',';
    resultado[j++] = decimal[0];
    resultado[j++] = decimal[1];
    resultado[j] = '\0';

    cout << resultado << endl;
    return 0;
}

