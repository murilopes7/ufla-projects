#include <iostream>
using namespace std;

// Função para calcular os minutos que Daniela pode dormir
int calcularMinutosSono(int h1, int m1, int h2, int m2) {
    // Converte horário atual para minutos desde 00:00
    int minutos_atuais = h1 * 60 + m1;
    
    // Converte horário do alarme para minutos desde 00:00
    int minutos_alarme = h2 * 60 + m2;
    
    int diferenca;
    
    // Se o alarme é no mesmo dia (horário do alarme > horário atual)
    if (minutos_alarme > minutos_atuais) {
        diferenca = minutos_alarme - minutos_atuais;
    }
    // Se o alarme é no dia seguinte (horário do alarme <= horário atual)
    else {
        // Minutos até meia-noite + minutos desde meia-noite até o alarme
        diferenca = (24 * 60 - minutos_atuais) + minutos_alarme;
    }
    
    return diferenca;
}

int main() {
    int h1, m1, h2, m2;
    
    // Lê casos de teste até encontrar 0 0 0 0
    while (cin >> h1 >> m1 >> h2 >> m2) {
        // Verifica condição de parada
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }
        
        // Calcula e imprime os minutos de sono
        cout << calcularMinutosSono(h1, m1, h2, m2) << endl;
    }
    
    return 0;
}