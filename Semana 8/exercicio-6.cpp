/*

Luthor irá mais uma vez tentar algo contra o Super-Homem. Dessa vez, ele irá tentar o plano XTPO-3000-PlusAzul. Para isso, ele fez uma lista com os materiais necessários e verificou que alguns itens estavam em falta. Ele tem uma relação em computador dos itens que precisa para a invenção e uma lista dos itens que tem em posse na sua fábrica (alguns dos quais não serão necessários no plano, inclusive). Assim, ele precisa verificar quais itens da primeira lista não constam na segunda lista para poder ir buscá-los em seu estoque no subsolo.

Para ajudá-lo, você irá implementar um algoritmo que recebe duas listas de materiais (dois vetores de strings) e imprime todos os itens que constam na primeira lista mas não constam na segunda lista. Os vetores devem ser implementados utilizando alocação dinâmica. A impressão deverá ser feita seguindo a ordem da primeira lista. Considere que os itens das listas não possuem espaço, cada lista contém o número de materiais no topo e que nenhuma lista possui itens repetidos na própria lista. Caso todos os itens da primeira lista estejam presentes na segunda, imprima NADA (todo em maiúsculo).

Entradas:

    Número de ingredientes da primeira lista.
    ingredientes (strings) da primeira lista, separados por espaço.
    Número de ingredientes da segunda lista.
    ingredientes (strings) da segunda lista, separados por espaço.

Saídas:

    Elementos da lista resultante.

Exemplo de Entrada:

5
rubi_axial
kriptonita_rosa
xisto
cesio137
uranio_enriquecido
6
uranio_enriquecido
sulfato_de_titanio
bateria_18650
kriptonita_rosa
xisto
virus_simancol

Exemplo de Saída:

rubi_axial
cesio137

Exemplo de Entrada:

5
rubi_axial
kriptonita_rosa
xisto
cesio137
uranio_enriquecido
6
rubi_axial
kriptonita_rosa
xisto
cesio137
uranio_enriquecido
bateria_18650

Exemplo de Saída:

NADA

*/

#include <iostream>
using namespace std;

// Função para medir o tamanho de uma string manualmente
int tamanhoString(const char *str) {
    int tam = 0;
    while (str[tam] != '\0')
        tam++;
    return tam;
}

// Função para comparar duas strings caractere por caractere
bool iguais(const char *a, const char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return false;
        i++;
    }
    // São iguais se terminarem ao mesmo tempo
    return (a[i] == '\0' && b[i] == '\0');
}

// Função para copiar uma string (caractere por caractere)
void copiaString(char *dest, const char *origem) {
    int i = 0;
    while (origem[i] != '\0') {
        dest[i] = origem[i];
        i++;
    }
    dest[i] = '\0'; // adiciona o terminador
}


int main(){
    int n1 = 0;
    cin >> n1;

    char ** lista1 = new char*[n1];
    
    // Lê e copia manualmente cada string da primeira lista
    for (int i = 0; i < n1; i++) {
        char palavraTemp[101];
        cin >> palavraTemp;

        int tam = tamanhoString(palavraTemp);
        lista1[i] = new char[tam + 1]; // aloca espaço exato
        copiaString(lista1[i], palavraTemp);
    }
    
    int n2 = 0;
    cin >> n2;

    char ** lista2 = new char*[n2];
    for (int i = 0; i < n2; i++) {
        char palavraTemp[101];
        cin >> palavraTemp;

        int tam = tamanhoString(palavraTemp);
        lista2[i] = new char[tam + 1];
        copiaString(lista2[i], palavraTemp);
    }

     bool faltando = false;

    // Para cada item da primeira lista, verifica se está na segunda
    for (int i = 0; i < n1; i++) {
        bool achou = false;

        for (int j = 0; j < n2; j++) {
            if (iguais(lista1[i], lista2[j])) {
                achou = true;
                break;
            }
        }

        if (!achou) {
            cout << lista1[i] << endl;
            faltando = true;
        }
    }

    if (!faltando)
        cout << "NADA" << endl;

    // Libera toda a memória alocada
    for (int i = 0; i < n1; i++)
        delete[] lista1[i];
    delete[] lista1;

    for (int i = 0; i < n2; i++)
        delete[] lista2[i];
    delete[] lista2;


    return 0;
}