#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Reading from a file
    ifstream inFile("entrada.txt");

    // Writing to a file
    ofstream outFile("saida.txt");

    int n;
    string nome;
    float nota1, nota2;

    inFile >> n;
    
    for (int i = 0; i < n; i++){
        inFile >> nome >> nota1 >> nota2;

        float media = (nota1 + nota2) / 2;
        if (media < 7.0) outFile << nome << endl;
    }
    

    /*
        float media = (nota1 + nota2) / 2;
        if (media < 7.0) outFile << nome << endl;
        i++;
    */
    inFile.close();
    outFile.close();
    return 0;
}