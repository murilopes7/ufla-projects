#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char trigonometry, angle_unity;
    float angle;

    const double EPSILON = 1e-8;

    cin >> trigonometry >> angle_unity >> angle;
    if (trigonometry == 's')
    {
        if (angle_unity == 'g')
        {
            if (fabs(sin(angle * M_PI / 180.0)) < EPSILON)
                cout << 0 << endl;
            else
                cout << fixed << setprecision(4) << sin(angle * M_PI / 180.0) << endl;
        }
        else if (angle_unity == 'r')
        {
            if (fabs(sin(angle) < EPSILON))
                cout << 0 << endl;
            else
                cout << fixed << setprecision(4) << sin(angle) << endl;
        }
        else
            return -1;
    }

    else
    {
        if (angle_unity == 'g'){
             if (fabs(cos(angle * M_PI / 180.0)) < EPSILON)
                cout << 0 << endl;
            else
                cout << fixed << setprecision(4) << cos(angle * M_PI / 180.0) << endl;
        }
        else if (angle_unity == 'r'){
            if (fabs(cos(angle) < EPSILON))
                cout << 0 << endl;
            else
                cout << fixed << setprecision(4) << cos(angle) << endl;
        }
        else
            return -1;
    }
}
