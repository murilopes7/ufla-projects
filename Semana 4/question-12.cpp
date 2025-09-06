#include <iostream>
using namespace std;

int main(){
    float v1, v2, ds;
    cin >> v1 >> v2 >> ds;

    if ((ds/ (v1 + v2)) <= 10) cout << "COLISAO" << endl;
    else cout << (ds / (v1 + v2)) << endl;
    
    return 0;
}