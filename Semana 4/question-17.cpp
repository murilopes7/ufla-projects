/*


Os moradores do município de Passa ou Fica pediram para o prefeito da cidade a instalação de radares nas ruas da cidade. O prefeito, como bom gestor, atendeu às solicitações da população e realizou a instalação dos aparelhos. No entanto, ainda falta o sistema para cálculo das multas. Por isso, o prefeito solicitou que sua empresa desenvolvesse o sistema de cálculo das multas.

O valor base da multa estipulada pela Secretaria de trânsito varia de radar para radar. Esse valor de multa ainda pode ser aumentado, conforme variação da velocidade do motorista, descrito na tabela abaixo:

Velocidade do veículo 	Cálculo da multa
Até 30% (incluso) acima da velocidade da pista 	Não se aplica
Acima de 30% da velocidade da pista 	Multa mais acréscimo de 50% do valor da multa

Escreva um programa que calcule a multa recebida por um determinado motorista a partir do valor base da multa, da velocidade da pista e da velocidade registrada no radar para esse motorista.

Entradas:

    Um número real indicando o valor da multa.
    Um número inteiro indicando a velocidade máxima da pista.
    Um número inteiro indicando a velocidade registrada pelo radar.

Saída:

    Valor da multa a ser paga pelo motorista. A saída pode ser um número real precedido da string "R$" ou o texto "NAO SE APLICA".

Exemplo de entrada:

100.00
80
89

Exemplo de saída:

NAO SE APLICA

Exemplo de entrada:

100.00
30
90

Exemplo de saída:

R$ 150.0

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valorMulta;
    int velocidadeMaxima, velocidadeRadar;

    cin >> valorMulta >> velocidadeMaxima >> velocidadeRadar;

    double limite = velocidadeMaxima * 1.3;

    if (velocidadeRadar <= limite) {
        cout << "NAO SE APLICA" << endl;
    } else {
        double multaFinal = valorMulta * 1.5;
        cout << fixed << setprecision(1);
        cout << "R$ " << multaFinal << endl;
    }

    return 0;
}