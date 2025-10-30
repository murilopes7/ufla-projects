#include <iostream>
using namespace std;

int main() {
    string expressao;
    cin >> expressao;

    int balance = 0;  

    bool condicao = false;
    for (char c : expressao) {
        if (c == '(') balance++;
        else if (c == ')') balance--;

        if (balance < 0) condicao = true;

    }

    if (!condicao && balance == 0)
        cout << "parenteses corretos" << endl;
    else
        cout << "parenteses incorretos" << endl;

    return 0;
}
