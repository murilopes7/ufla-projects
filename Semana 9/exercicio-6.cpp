#include <iostream>
#include <string>
using namespace std;

int main() {
    string principal, teste;

    cin >> principal;
    cin >> teste;

    int contador = 0;

    for (size_t i = 0; i + teste.size() <= principal.size(); i++) {
        bool igual = true;

        for (size_t j = 0; j < teste.size(); j++) {
            if (principal[i + j] != teste[j]) {
                igual = false;
                break; 
            }
        }

        if (igual) contador++;
    }

    cout << contador << endl;

    return 0;
}
