#include <iostream>
using namespace std;

int main(){
    string cor1, cor2;
    int numero;
    cin >> cor1 >> cor2 >> numero;

    int a = numero  / 100000 % 10; // 1st digit
    int b = numero  / 10000 % 10;  // 2nd digit
    int c = numero  / 1000 % 10;   // 3rd digit
    int d = numero  / 100 % 10;    // 4th digit
    int e = numero  / 10 % 10;     // 5th digit
    int f = numero  / 1 % 10;      // 6th digit

    if ((a == f) and (b == e) and (c == d)) cout << cor1 << endl;
    else cout << cor2 << endl;

   
    return 0;

}