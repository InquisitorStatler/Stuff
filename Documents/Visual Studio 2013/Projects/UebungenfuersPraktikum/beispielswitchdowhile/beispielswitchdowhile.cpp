#include <iostream>
using namespace std;

int main()
{
	int choice;
	double m;
	do
	{

		cout << "Streckenumrechnung\n" << "-1- inch\n" << "-2- foot\n"
			<< "-3- yard\n" << "-4- mile\n" << "-5- End Program\n";
		cout << "Suchs dir aus: \n";
		if (!(cin >> choice))
		{
			cerr << "Nope\n";
			return 1;
		}
		if ((choice < 1) || (choice > 5))
		{
			cout << "Fehler bei der Auswahl\n";
			return 1;
		}
		if (choice == 5)
		{
			cout << "Goodbye\n";
			return 0;
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
		}
	} while (choice != 5);
	return 0;
}