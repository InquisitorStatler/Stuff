#include <iostream>
using namespace std;

int main()
{
	double km = 0;
	double miles = 1.6;
	cout << "Kilometer werden in Meilen umgerechnet. \n" << "Bitte Kilometeranzahl eingeben: \n";
	cin >> km;
	miles = km * miles;
	cout << km << " Kilometer sind " << miles << " Meilen. \n";
}