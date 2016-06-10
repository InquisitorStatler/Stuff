#include <iostream>
using namespace std;

int main()
{
	int choice;
	double m;
	cout << "Streckenumrechnung\n" << "-1- inch\n" << "-2- foot\n"
		<< "-3- yard\n" << "-4- mile\n";
	cout << "Suchs dir aus: \n";
	if (!(cin >> choice))
	{
		cerr << "Nope\n";
		return 1;
	}
	cout << "Strecke in Meter: ";
	if (!(cin >> m))
	{
		cerr << "Nope\n";
		return 1;
	}
	switch (choice)
	{
		case 1:
			cout << m << " meter = " << m / 0.0254 << " inch\n";
			break;
		case 2:
			cout << m << " meter = " << m / 0.3048 << " foot\n";
			break;
		case 3:
			cout << m << " meter = " << m / 0.9144 << " yard\n";
			break;
		case 4:
			cout << m << " meter = " << m / 1609.344 << " mile\n";
			break;
		default:
			cout << "Nope\n";
	}
	return 0;
}