
#include <iostream>

using namespace std;

int main()
{
	int sec = 0;
	cout << "Seconds : ";
	cin >> sec;

	int days = sec / 86400;
	sec -= days * 86400;
	int hours = sec / 3600;
	sec -= hours * 3600;
	int minutes = sec / 60;
	sec -= minutes * 60;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << sec << " seconds";
}

