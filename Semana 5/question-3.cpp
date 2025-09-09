#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("senha.txt"); // Open file for reading
    ofstream outFile("saida.txt"); // Create/open a file for writing
    int N, potencia = 1, mersenne = 0;
    inFile >> N;

    while (mersenne <= N)
    {
        outFile << mersenne;
        potencia *= 2;           // próxima potência de 2
        mersenne = potencia - 1; // gera próximo Mersenne
        if (mersenne <= N)
        {
            outFile << " ";
        }
    }

    inFile.close();
    outFile.close(); // Close the file
    return 0;
}