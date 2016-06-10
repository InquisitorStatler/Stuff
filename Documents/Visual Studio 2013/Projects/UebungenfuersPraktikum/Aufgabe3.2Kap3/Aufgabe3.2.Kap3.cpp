#include <iostream>
using namespace std;

double Flaeche(double x, double y);
double Umfang(double x, double y);

int main()
{
	double x;
	double y;
	cout << "Bitte die Laenge eingeben: \n";
	cin >> x;
	cout << "Bitte die Breite eingeben: \n";
	cin >> y;
	Flaeche(x, y);
	Umfang(x, y);
	return 0;
}

double Flaeche(double x, double y)
{
	double flaeche = (x * y);
	cout << "Die Flaeche ist " << flaeche << endl;
	return 0;
}

double Umfang(double x, double y)
{
	double umfang((2 * x) + (2 * y));
	cout << "Der Umfang ist " << umfang << endl;
	return 0;
}