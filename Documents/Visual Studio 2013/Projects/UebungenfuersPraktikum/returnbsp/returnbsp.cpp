#include <iostream>
using namespace std;

int addieren(int, int);

int main()
{
	int wert1, wert2, summe;
	cout << "Gib die 1. Zahl ein: ";
	cin >> wert1;
	cout << "Gib die 2. Zahl ein: ";
	cin >> wert2;
	summe = addieren(wert1, wert2);
	cout << "Die Summe ist: " << summe << endl;
	return 0;
}

int addieren(int wert1, int wert2)
{
	return wert1 + wert2;
}