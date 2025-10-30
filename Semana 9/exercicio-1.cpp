#include <iostream>
using namespace std;

int main()
{
    int dimensao;
    cin >> dimensao;

    char **letras = new char *[dimensao];

    char vogal[5] = {'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < dimensao; i++)
        letras[i] = new char[dimensao];

    // Preencher matriz
    for (int i = 0; i < dimensao; i++){
        for (int j = 0; j < dimensao; j++)
            cin >> letras[i][j];

    }

    bool encontrada = false;
    // Procurar submatriz 2x2 apenas com vogais
    for (int i = 0; i < dimensao - 1 && !encontrada; i++)
    {
        for (int j = 0; j < dimensao - 1 && !encontrada; j++)
        {
            bool soVogais = true;

            // Verificar os 4 elementos da submatriz 2x2
            for (int di = 0; di < 2 && soVogais; di++)
            {
                for (int dj = 0; dj < 2 && soVogais; dj++)
                {
                    bool ehVogal = false;
                    for (int k = 0; k < 5; k++)
                    {
                        if (letras[i + di][j + dj] == vogal[k])
                            ehVogal = true;
                    }

                    if (!ehVogal)
                        soVogais = false;
                }
            }

            if (soVogais)
            {
                cout << letras[i][j] << " " << letras[i][j + 1] << endl;
                cout << letras[i + 1][j] << " " << letras[i + 1][j + 1] << endl;
                encontrada = true;
            }
        }
    }

    if (!encontrada) 
        cout << "submatriz nao encontrada" << endl;
    

    // Liberar memória
    for (int i = 0; i < dimensao; i++)
        delete[] letras[i];

    delete[] letras;

    return 0;
}