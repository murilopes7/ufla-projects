#include <iostream>
using namespace std;

int main()
{
	float largura,altura,area,litros;
	cin >> largura >> altura;

	area=(largura*altura);
	litros= area/2;
	
	cout << litros * 3 << " Litros" << endl ;
	
    return 0;
}
