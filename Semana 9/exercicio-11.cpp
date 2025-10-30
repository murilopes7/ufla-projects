#include <iostream>
using namespace std;

int main(){
  string palavra;
  cin >> palavra;
  
  int len = palavra.size();
  int * numero = new int [len];
  
  for (int i = 0; i < len; i++)
    numero[i] = 0;

  int maior = numero[0];

  for (int i = 0; i < len; i++){
    if (numero[i] > maior) maior = numero[i];
  }

  char maisAparencia;
  for (int i = 0; i < len; i++){
    if (maior == numero[i]) maisAparencia = palavra[i];
  }

  cout << maisAparencia << endl;
  delete [] numero;

  return 0;
}
