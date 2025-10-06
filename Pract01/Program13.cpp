
#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    cout << "Point 1 : \n";
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;

    cout << "Point 2 : \n";
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;

    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << "Distance between the two points : " << setprecision(3) << distance;

}
