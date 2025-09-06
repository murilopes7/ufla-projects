/*


A notação pós-fixada também conhecida como notação polonesa inversa possui a característica de ter o sinal da operação após os números, assim "1 + 2" deve ser escrito na forma "1 2 +", "3 * 5" deve ser "3 5 *", e assim por diante. Faça um programa que leia uma operação na notação pós-fixada e escreva o resultado a operação.

Entradas:

    Dois números inteiros.
    Símbolo representando a operação que será realizada (+, -, *, /).

Saídas:

    Resultado da operação.

Exemplo de Entrada:

16 5 /

Exemplo de Saída:

3


*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> b >> op;

    int result;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        default: 
            cout << "Operação inválida" << endl;
            return 1;
    }

    cout << result << endl;
    return 0;
}