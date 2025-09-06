#include <iostream>
using namespace std;

int main() {
    char t;      // tipo de monstro
    int pessoas; // número de pessoas no quarto
    int dias;    // tempo de hospedagem

    cin >> t >> pessoas >> dias;

    int andar = 0;
    int corredor = 0;
    int finalq = 0;

    // Definindo o andar
    if (t == 'z' || t == 'm') {
        andar = 1;
    } 
    else if (t == 'l' || t == 'd') {
        andar = 2;
    } 
    else if (t == 'h' || t == 's') {
        andar = 3;
    } 
    else if (t == 'v' || t == 'f') {
        andar = 4;
    }

    // Definindo o corredor
    if (pessoas == 1) {
        corredor = 1;
    } 
    else if (pessoas == 2) {
        corredor = 2;
    } 
    else if (pessoas >= 3) {
        corredor = 3;
    }

    // Definindo o número do quarto no corredor
    if (dias == 1 || dias == 2) {
        finalq = 1;
    } 
    else if (dias == 3 || dias == 4) {
        finalq = 2;
    } 
    else if (dias == 5 || dias == 6) {
        finalq = 3;
    } 
    else if (dias >= 7) {
        finalq = 4;
    }

    int quarto = andar * 100 + corredor * 10 + finalq;
    cout << quarto << endl;

    return 0;
}