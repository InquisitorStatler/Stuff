#include <iostream>
using namespace std;

void byValue(int a, int b);
void byReference(int* a, int* b);

int main()
{
	int wert1 = 123, wert2 = 456;
	cout << "call by value:\n";
	byValue(wert1, wert2);
	cout << wert1 << ' ' << wert2 << "\n\n";

	cout << "call by reference:\n";
	byReference(&wert1, &wert2);
	cout << wert1 << ' ' << wert2 << "\n\n";
	return 0;
}

void byValue(int a, int b)
{
	cout << a << " * " << b << " = "
		<< (a*b) << '\n';
	//Werte auf 0 setzen
	a = 0;
	b = 0;
}

void byReference(int* a, int* b)
{
	cout << *a << " * " << *b << " = " 
		<< (*a) * (*b) << '\n';
	// Werte auf 0 setzen
	*a = 0;
	*b = 0;
}