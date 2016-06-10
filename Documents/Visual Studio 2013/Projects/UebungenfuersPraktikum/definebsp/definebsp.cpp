#include <iostream>
#define PI 3.1415926f
using namespace std;

double KreisF(double);
double KreisU(double);

int main()
{
	double d;
	cout << "Kreisdurchmesser eingeben: ";
	cin >> d;
	cout << "Die Kreisflaeche: " << KreisF(d) << endl;
	cout << "Der Kreisumfang: " << KreisU(d) << endl;
	return 0;
}

double KreisF(double dval)
{
	return(dval* dval * PI / 4);
}

double KreisU(double dval)
{
	return(dval * PI);
}