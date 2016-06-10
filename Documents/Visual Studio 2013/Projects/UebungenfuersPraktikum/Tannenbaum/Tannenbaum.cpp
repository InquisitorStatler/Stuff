#include <iostream>
#include <string>
using namespace std;

int draw(int x ,int y);

int main()
{
	int height;
	int choice;
	cout << "Gib die Hoehe des Baumes ein: \n";
	cin >> height;
	cout << "Soll der Baum einen Stern haben? \n";
	cout << "1: Ja" << endl << "2: Nein \n";
	cin >> choice;
	draw(height,choice);
	return 0;
}

int draw(int x,int y)
{
	int counter;
	int counter2;
	int row = x;
	int cross = 1;
	int space = x;
	int star = y;

	//Stern
	if (y != 2)
	{
		for (counter = 1; counter <= space; counter++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	// Baum
	for (counter2 = 1; counter2 <= row; counter2++)
	{
		for (counter = 1; counter <= space; counter++)
		{
			cout << " ";
		}
		space--;
		for (counter = 1; counter <= cross; counter++)
		{
			cout << "X";
		}
		cross = cross + 2;
		cout << endl;
	}
	//Stamm
	for (counter2 = 1; counter2 <= 2; counter2++)
	{
		for (counter = 1; counter <= row; counter++)
		{
			cout << " ";
		}
		for (counter = 1; counter <= 2; counter++)
		{
			cout << "X";
		}
		cout << endl;
	}


	return 0;
}
