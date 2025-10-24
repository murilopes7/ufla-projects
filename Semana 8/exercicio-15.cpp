/*


Faça um programa que lê dois vetores de caracteres. Determine quais caracteres estão nos dois vetores, procurando os valores do segundo vetor no primeiro e os escreva. Se não existir intersecção entre os vetores, o programa deve escrever -1. Suponha que não existem caracteres repetidos nos vetores. Obs: Utilize alocação dinâmica para alocar os vetores.

Entradas:

    Tamanho do primeiro vetor;
    os caracteres do primeiro vetor (existem brancos entre os caracteres, não existem repetições);
    tamanho do segundo vetor;
    os caracteres do segundo vetor (existem brancos entre os caracteres, não existem repetições).

Saídas:

    Os elementos do segundo vetor que aparecem no primeiro, na ordem que aparecem no segundo vetor (ou -1 caso não haja intersecção).

Exemplo de entradas:

5
T
R
U
C
O
3
B
O
R

Exemplo de saídas:

O
R

*/

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cin >> n1;
    char* A = new char[n1];
    for (int i = 0; i < n1; i++) {
        cin >> A[i];
    }

    cin >> n2;
    char* B = new char[n2];
    for (int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    bool encontrouAlgum = false;

    for (int i = 0; i < n2; i++) {
        bool encontrou = false;

        for (int j = 0; j < n1; j++) {
            if (B[i] == A[j]) {
                encontrou = true; 
            }
        }

        if (encontrou) {
            cout << B[i] << " ";
            encontrouAlgum = true;
        }
    }

    if (!encontrouAlgum) {
        cout << -1;
    }

    cout << endl;

    delete[] A;
    delete[] B;

    return 0;
}
