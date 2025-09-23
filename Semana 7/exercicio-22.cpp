#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void printNumber(double x)
{
    long long inteiro = llround(x);
    if (fabs(x - inteiro) < 1e-9)
    {
        cout << inteiro; // se for inteiro exato
    }
    else
    {
        // tirar zeros desnecessários
        int casas = 0;
        while (fabs(x * pow(10, casas) - round(x * pow(10, casas))) > 1e-9 && casas < 10)
        {
            casas++;
        }
        cout.setf(ios::fixed);
        cout.precision(casas);
        cout << x;
        cout.unsetf(ios::fixed);
    }
}

int main()
{
    const int N = 15;
    double V[N];

    ifstream fin("valores.txt");
    if (!fin)
    {
        cerr << "Erro: nao foi possivel abrir valores.txt" << endl;
        return 1;
    }

    for (int i = 0; i < N; i++)
        fin >> V[i];

    fin.close();

    int M;
    cin >> M;
    int indices[M];
    for (int i = 0; i < M; i++)
        cin >> indices[i];

    double mult;
    cin >> mult;

    for (int i = 0; i < M; i++)
    
        V[indices[i]] *= mult;
    

    for (int i = 0; i < N; i++)
    {
        printNumber(V[i]);
        if (i != N - 1)
            cout << " ";
    }
    
    cout << endl;

    return 0;
}
