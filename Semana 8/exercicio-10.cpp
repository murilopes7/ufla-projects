#include <iostream>
using namespace std;

// Funções auxiliares
int tamanhoString(const char *str) {
    int tam = 0;
    while (str[tam] != '\0') tam++;
    return tam;
}

void copiaString(char *dest, const char *origem) {
    int i = 0;
    while (origem[i] != '\0') {
        dest[i] = origem[i];
        i++;
    }
    dest[i] = '\0';
}

bool iguais(const char *a, const char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

bool existe(char **vet, int tam, char *valor) {
    for (int i = 0; i < tam; i++) {
        if (iguais(vet[i], valor)) return true;
    }
    return false;
}

int main() {
    int n1;
    cin >> n1;
    
    char **lista1 = new char*[n1];
    for (int i = 0; i < n1; i++){
        char * palavraTemp = new char[n1];
        cin >> palavraTemp;
        int tam = tamanhoString(palavraTemp);

        lista1[i] = new char[tam + 1];
        copiaString(lista1[i], palavraTemp);
    }
        
    int n2;
    cin >> n2;

    char **lista2 = new char*[n2];
    for (int i = 0; i < n2; i++){
        char * palavraTemp = new char[n2];
        cin >> palavraTemp;
        int tam = tamanhoString(palavraTemp);

        lista2[i] = new char[tam + 1];
        copiaString(lista2[i], palavraTemp);
    }
    

    // Vetor resultante
    char **vetC = new char*[n1+n2];
    int tamC = 0;

    
    for (int i = 0; i < n1; i++) {
        if (!existe(lista2, n2, lista1[i])) {
            vetC[tamC] = lista1[i];
            tamC++;
        }
    }

    for (int i = 0; i < tamC; i++) {
        cout << vetC[i] << " ";
    }


    for (int i = 0; i < n1; i++) delete[] lista1[i];
    for (int i = 0; i < n2; i++) delete[] lista2[i];
    delete[] lista1;
    delete[] lista2;
    delete[] vetC;

    return 0;
}
