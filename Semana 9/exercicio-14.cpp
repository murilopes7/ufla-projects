#include <iostream>
using namespace std;

int main(){
  string palavra;
  cin >> palavra;

  bool found = false;
  unsigned int len = palavra.size();
  char letra = '\0';

  for (size_t i = 0; i < len && !found; i++) {
        bool repeat = false;
        for (size_t j = 0; j < len && !repeat; j++) {
            if (i != j && palavra[i] == palavra[j]) {
                repeat = true; 
            }
        }
        if (!repeat) {     
            letra = palavra[i];
            found = true;            
        }
    }

  cout << letra << endl;

  return 0;
}
