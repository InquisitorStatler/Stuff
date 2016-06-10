#include <iostream>
using namespace std;

int addieren(int, int);
int addieren(int);
double addieren(double, double);
double addieren(double);
int addieren(double, double, double);

int main()
{
	cout << "Summe ist: " << addieren(20) << endl;
	cout << "Summe ist: " << addieren(20, 10) << endl;
	cout << "Summe ist: " << addieren(5.5) << endl;
	cout << "Summe ist: " << addieren(5.1, 6.123) << endl;
	cout << "Summe ist: " << addieren(1.2, 1.3, 1.6) << endl;
	return 0;
}

int addieren(int wert1, int wert2)
{
	return wert1 + wert2;
}

int addieren(int wert1)
{
	return wert1;
}

double addieren(double wert1, double wert2)
{
	return wert1 + wert2;
}

double addieren(double wert1)
{
	return wert1;
}

int addieren(double wert1, double wert2, double wert3)
{
	return wert1 + wert2 + wert3;
}