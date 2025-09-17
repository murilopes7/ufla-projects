#include <iostream>
using namespace std;

void factor(int n, int m)
{
    if (n >= m)
    {
        for (int i = 1; i <= m; i++){
            if (n % i == 0 and m % i == 0){
                n = n / i;
                m = m / i;
            }
        }

        cout << n << endl << m << endl;

    }

    else {
        for (int i = 1; i <= n; i++){
            if (n % i == 0 and m % i == 0){
                n = n / i;
                m = m / i;
            }
        }

        cout << n << endl << m << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    factor (n, m);
    return 0;
}