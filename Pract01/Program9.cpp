
#include <iostream>

using namespace std;
int main()
{
    cout << "Enter the coefficients: \n";
    double a = 0, b = 0, c = 0;
    cout << "a = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "\nc = ";
    cin >> c;
    double d = b*b - 4 * a * c;
    double x1 = ((-b) + sqrt(d)) / 2 * a;
    double x2 = ((-b) - sqrt(d)) / 2 * a;

    cout << "x1 = " << x1 << ", x2 = " << x2;

}

