#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string file_name;
    cin >> file_name;

    ifstream arquivo(file_name);
    if (!arquivo)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char charac;

    int contador = 0;

    while (arquivo.get(charac))
    {
        if (charac == 'a' or charac == 'A' or charac == 'e' or charac == 'E' or charac == 'i' or charac == 'I' 
            or charac == 'o' or charac == 'O' or charac == 'u' or charac == 'U')
            contador++;
    }

    arquivo.close();

    cout << contador << endl;

    return 0;
}