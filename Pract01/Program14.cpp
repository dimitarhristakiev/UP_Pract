
#include <iostream>

using namespace std;

int main()
{
    long long cardNumber=0;
    cout << "Enter card number: ";
    cin >> cardNumber;
    int lastFour = cardNumber % 10000;
    
    cout << "XXXXXXXXXXXX" << lastFour;
}

