#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char texto[254], procura[254];
  cin >> texto >> procura;

  int posicao = -1;

  bool encontrou = false;
  for (unsigned int i = 0; i <= strlen(texto) - strlen(procura) && !encontrou; i++) {
    bool igual = true;  
    for (unsigned int j = 0; j < strlen(procura) && igual; j++) {
      if (texto[i + j] != procura[j]) 
        igual = false;
          
    }
    
    if (igual) {
      posicao = i;
      encontrou = true;
    }
  }

  cout << posicao << endl;
  return 0;
}

