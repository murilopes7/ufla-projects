#include <iostream>
using namespace std;

int main(){
  string mensagem;
  getline(cin, mensagem);

  char c1, c2;
  cin >> c1 >> c2;

  unsigned int len = mensagem.size();
  for (unsigned int i = 0; i < len; i++){
    if (mensagem[i] == c1) mensagem[i] = c2;
  }

  cout << mensagem << endl;

  return 0;
}
