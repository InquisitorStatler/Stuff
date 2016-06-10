#include <iostream>
using namespace std;


double addieren(double = 0, double = 0);

int main()
{
	cout << "Summe ist: " << addieren(20) << endl;
	cout << "Summe ist: " << addieren(20, 10) << endl;
	cout << "Summe ist: " << addieren(5.5) << endl;
	cout << "Summe ist: " << addieren(5.1, 6.123) << endl;
	cout << "Summe ist: " << addieren(10, 1.3) << endl;
	return 0;
}

double addieren(double wert1, double wert2)
{
	return wert1 + wert2;
}