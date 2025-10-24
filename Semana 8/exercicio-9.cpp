/*


Gargamel irá mais uma vez tentar algo contra os Smurfs. Dessa vez, ele irá tentar não apenas uma, mas duas poções mágicas de uma única vez. Para isso, ele fez uma lista com os ingredientes de cada poção, para poder comprá-los na Lojinha da Maga Patalógica. Como ele fez duas listas, uma para cada poção, ele precisa agora juntá-las, mas destacando os itens da primeira lista que não fazem parte da segunda.

Para ajudá-lo, você irá implementar um algoritmo que armazena os valores da primeira lista em um vetor alocado dinamicamente. Em seguida, irá receber, via dispositivo de entrada padrão, cada item da segunda lista. Caso o item lido ainda não esteja presente na lista armazenada, o vetor deve ser redimensionado com o aumento de uma posição e o valor armazenado. Caso contrário, um novo valor é lido. Considere que os itens das listas não possuem espaço e que nenhuma lista possui itens repetidos na própria lista. Ao final, imprima o tamanho resultante do vetor e os seus itens.

Entradas:

    Quantidade de ingredientes da primeira lista.
    Ingredientes (strings) da primeira lista.
    Quantidade de ingredientes da segunda lista.
    Ingredientes (strings) da segunda lista.

Saídas:

    Tamanho do vetor resultante.
    Elementos da lista resultante.

Exemplo de Entrada:

5
asa_de_aranha
pe_de_piranha
pelo_de_minhoca
olho_de_pedra
glitter_rosa
6
glitter_rosa
dente_de_rosa
piolho_de_peixe
pe_de_piranha
pelo_de_minhoca
bolor_laranja

Exemplo de Saída:

8
asa_de_aranha
pe_de_piranha
pelo_de_minhoca
olho_de_pedra
glitter_rosa
dente_de_rosa
piolho_de_peixe
bolor_laranja


*/

#include <iostream>
using namespace std;

// Funções auxiliares
int tamanhoString(const char *str) {
    int tam = 0;
    while (str[tam] != '\0') tam++;
    return tam;
}

bool iguais(const char *a, const char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

void copiaString(char *dest, const char *origem) {
    int i = 0;
    while (origem[i] != '\0') {
        dest[i] = origem[i];
        i++;
    }
    dest[i] = '\0';
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

    for (int i = 0; i < n1; i++) {
        char palavraTemp[101];
        cin >> palavraTemp;
        int tam = tamanhoString(palavraTemp);
        lista1[i] = new char[tam + 1];
        copiaString(lista1[i], palavraTemp);
    }

    int n2;
    cin >> n2;
    char **lista2 = new char*[n2];

    for (int i = 0; i < n2; i++) {
        char palavraTemp[101];
        cin >> palavraTemp;
        int tam = tamanhoString(palavraTemp);
        lista2[i] = new char[tam + 1];
        copiaString(lista2[i], palavraTemp);
    }

    // Vetor resultante
    char **vetC = new char*[n1 + n2];
    int tamC = 0;

    for (int i = 0; i < n1; i++) {
        if (!existe(vetC, tamC, lista1[i])) {
            vetC[tamC] = lista1[i];
            tamC++;
        }
    }

    for (int i = 0; i < n2; i++) {
        if (!existe(vetC, tamC, lista2[i])) {
            vetC[tamC] = lista2[i];
            tamC++;
        }
    }

    cout << tamC << endl;
    for (int i = 0; i < tamC; i++) {
        cout << vetC[i] << endl;
    }

    for (int i = 0; i < n1; i++) delete[] lista1[i];
    for (int i = 0; i < n2; i++) delete[] lista2[i];
    delete[] lista1;
    delete[] lista2;
    delete[] vetC;

    return 0;
}
