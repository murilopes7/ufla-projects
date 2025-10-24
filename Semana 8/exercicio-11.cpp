/*


Um palíndromo é um texto que pode ser lido igualmente da esquerda para a direita e da direita para a esquerda. Por exemplo, sem considerar sinais gráficos, acentos e letras maiúsculas e minúsculas: "socorram me subi no onibus em marrocos". Outros exemplos de palíndromos ocorrem com números (por exemplo: 12321) ou com datas (por exemplo: 20-02-2002).

Faça um programa que leia vários caracteres, armazenando-os num vetor alocado dinamicamente. Depois determine se esse vetor é um palíndromo ou não. Em caso positivo, escreva "sim", em caso negativo, escreva "nao". Além do resultado final, o programa deve, enquanto as comparações forem verdadeiras, escrever as posições e os elementos comparados.

Entradas:

    A quantidade de valores que deve ser lida para criar o vetor.
    Linha contendo os caracteres do vetor.

Saídas:

    Sequencia de posições e elementos enquanto as comparações forem verdadeiras.
    Uma palavra ("sim" ou "nao" - em minúsculas, sem acentos) que indica se a sequência é palíndromo ou não.

Exemplo de entrada:

5
a b c b a

Exemplo de saída:

0 a 4 a 1 b 3 b
sim

Exemplo de entrada:

6
a b c d b a

Exemplo de saída:

0 a 5 a 1 b 4 b
nao

Exemplo de entrada:

8
a b c d d c b a

Exemplo de saída:

0 a 7 a 1 b 6 b 2 c 5 c 3 d 4 d
sim

Exemplo de entrada:

7
a b c d c b e

Exemplo de saída:

nao


*/

#include <iostream>
using namespace std;

bool palindromo(char *vetor, int numero)
{
    bool printed = false;

    for (int i = 0; i < numero / 2; i++)
    {
        if (vetor[i] == vetor[numero - 1 - i])
        {
            cout << i << " " << vetor[i] << " "
                 << numero - 1 - i << " " << vetor[numero - 1 - i] << " ";
            printed = true;
        }
        else
        {
            if (printed)
                cout << endl;
            return false;
        }
    }

    if (printed)
        cout << endl;
    return true;
}

int main()
{
    int n;
    cin >> n;

    char *vetor = new char[n];
    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    bool palindrome = palindromo(vetor, n);

    if (palindrome)
        cout << "sim" << endl;
    else
        cout << "nao" << endl;

    delete[] vetor;
    return 0;
}
