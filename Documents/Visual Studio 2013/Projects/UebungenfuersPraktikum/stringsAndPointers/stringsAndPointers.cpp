#include <iostream>
#define MAX 5
using namespace std;

int main()
{
	int iarray[MAX] = { 11, 22, 33, 44, 55 };
	int *ipointer;
	// ipointer verweist auf erstes Element von iarray
	ipointer = iarray;
	// Ausgabe-Beispiele über den Pointer
	cout << "iarr[0] : " << *ipointer << endl;
	cout << "iarr[4] : " << *(ipointer + 4) << endl;
	// Wert über den Pointer ändern
	*ipointer = 66;			//iarray[0] = 66
	*(ipointer + 3) = 77;	//iarray[3] = 77
	//Alle Ausgeben
	for (size_t i = 0; i < MAX; i++)
	{
		cout << i << " : " << *(ipointer + i) << endl;
	}
	return 0;
}