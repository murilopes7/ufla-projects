#include <iostream>
#include <cmath>
using namespace std;


int main(){
    float ds, ds_dt;

    cin >> ds;
    ds_dt = 14.6 * sqrt(ds);

    cout << round(ds_dt * 1000.0) / 1000.0 << endl;

    return 0;
}