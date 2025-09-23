#include <iostream>
using namespace std;

int main(){
    char gabarito[10], prova1[10], prova2[10];
    string resp1, resp2;

    for (int i = 0; i < 10; i++)
        cin >> gabarito[i];
    
    for (int i = 0; i < 10; i++)
        cin >> prova1[i];
    
    for (int i = 0; i < 10; i++)
        cin >> prova2[i];

    int contador1 = 0;
    for (int i = 0; i < 10; i++)
        if (prova1[i] == gabarito[i]) contador1++;
    
    if (contador1 >= 6) resp1 = "APROVADO";
    else resp1 = "REPROVADO";

    int contador2 = 0;
    for (int i = 0; i < 10; i++)
        if (prova2[i] == gabarito[i]) contador2++;
    
    if (contador2 >= 6) resp2 = "APROVADO";
    else resp2 = "REPROVADO";

    cout << contador1 << endl << resp1 << endl << contador2 << endl << resp2 << endl;
    
    return 0;
}