/*
Você foi designado para fazer um programa que converte unidades de distância, que pode ser de metros para centímetros ou vice-versa. Para isso, seu programa deve ter duas funções, uma para converter de metros para centímetros e outra para converter o inverso.

Cada função deve receber a distância como parâmetro (número real) e retornar a distância convertida.
ATENÇÃO! As funções de conversão devem ser utilizadas na função main, onde serão lidos os valores da distância e da unidade para qual a distância deve ser convertida. Na função main, depois de utilizada a função correta deverá ser mostrada na tela a distância convertida.

OBS: Caso seja fornecida uma unidade inválida, o programa deverá exibir a palavra ERRO como resposta.

Entradas:

    Distância (real);
    Unidade para qual deverá ser convertida (minúsculo, singular e sem acento)

Saída:

    Distância convertida, seguida da abreviação da unidade (m ou cm). O valor e a identificação da unidade devem estar separados.

Exemplo de Entrada:

10
centimetro

Exemplo de Saída:

1000 cm

Exemplo de Entrada 2:

250
metro

Exemplo de Saída 2:

2.5 m

Exemplo de Entrada 3:

45.7
VOLT

Exemplo de Saída 3:

ERRO

*/

#include <iostream>
using namespace std;

float cmTometers (float cm){
    return (float) cm * 100.0;
}

float metersTocm (float m){
    return (float) m / 100.0;
}

int main(){
    float distancia;
    cin >> distancia;

    string opcao;
    cin >> opcao;

    if (opcao == "centimetro") cout << cmTometers(distancia) << " cm" << endl;
    else if (opcao == "metro") cout << metersTocm(distancia) << " m" <<  endl;
    else cout << "ERRO" << endl;

    return 0;
}