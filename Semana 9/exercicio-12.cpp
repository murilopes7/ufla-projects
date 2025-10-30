#include <iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;

    string * palavras = new string[numero];
    for (int i = 0; i < numero; i++)
        cin >> palavras[i];

    int maior = -1;
    for (int i = 0; i < numero; i++){
        int len = palavras[i].size();
        if (len > maior) maior = len;
    }

    string * formatado = new string[numero];
    for (int i = 0; i < numero; i++){
        int len = palavras[i].size();
        int stars = maior - len;

        formatado[i] = "";
        for (int j = 0; j < stars; j++)
          formatado[i] += '*';
        
        for (int j = 0; j < len; j++)
          formatado[i] += palavras[i][j];
    }

    for (int i = 0; i < numero; i++)
        cout << formatado[i] << endl;

    delete [] palavras;
    delete [] formatado;
    return 0;
}




