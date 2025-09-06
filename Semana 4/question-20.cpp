/*


Thanos aguarda pacientemente a chegada de seus comparsas, que irá lhe trazer, finalmente, mais jóias do infinito. Como ele está muito ansioso e irritado, implemente um algoritmo para calcular quanto tempo, em minutos, você, fiel escudeiro de Thanos, terá que suportar sua irritação. Para isso, você receberá o horário de saída da nave do comparsa e o horário prevista para chegada, que é informado em dois inteiros representando, respectivamente, horas e minutos. Para o cálculo, você irá levar em consideração que o tempo de viagem é inferior a 24 horas, já que os comparsas seriam destruídos caso demorassem mais que isso.

Entradas:

    Horário de saída da nave (dois inteiros representado horas e minutos)
    Horário previsto para chegada da nave (dois inteiros representado horas e minutos)

Saída:

    Tempo de espera, em minutos

Exemplo de Entrada:

12 59
18 01

Exemplo de Saída:

302

Exemplo de Entrada:

21 13
05 07

Exemplo de Saída:

474


*/

#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    int wait;
    if (end >= start) {
        wait = end - start;
    } else {
        wait = (24 * 60 - start) + end;
    }

    cout << wait << endl;
    return 0;
}