/*

Na matemática, um número Harshad é um número natural que é divisível pela soma dos seus dígitos. O número 6804, por exemplo, é um número Harshad pois 6+8+0+4 = 18, e 6804 é divisível por 18.

Escreva um programa que verifica se um número é número Harshad. É preciso criar dois subprogramas:

    Um subprograma que recebe um número natural e retorna a soma de seus dígitos.
    Um subprograma que recebe um número natural e retorna um valor lógico, indicando se ele é um número Harshad.

Para uma boa nota, é preciso um bom planejamento. Não repita código, não repita processamento, escolha nomes significativos, não use parâmetros que não entradas dos subprogramas e não misture interface e processamento (esses dois subprogramas não podem ter operações de leitura ou escrita).

Entradas:

    Um número inteiro e positivo.

Saídas:

    O resto da divisão do número pela soma de seus digitos.
    Um texto (sim/nao), indicando se o número tem a propriedade em questão. Atenção para a ausência de acento em "nao".

Exemplo de Entrada:

81

Exemplo de Saída:

0 sim

Exemplo de Entrada:

143

Exemplo de Saída:

7 nao
*/

#include <iostream>
using namespace std;

int sumDigits (int num){
    int soma = 0, digito = 0;    
    while (true){
        digito = num % 10;
        soma += digito;
        num = num / 10;

        if (num == 0) break;
    }

    return soma;
}

bool harshard (int num){
    bool condition;
    string resposta = "";

    int soma = sumDigits(num);

    if (num % soma == 0) condition = true;
    else condition = false;

    return condition;
}

int main(){
    int numero;
    cin >> numero;

    int soma = sumDigits(numero);

    int resto = numero % soma;

    if (harshard(numero) == true) cout << resto << " sim" << endl;
    else cout << resto << " nao" << endl;
    
    return 0;
}