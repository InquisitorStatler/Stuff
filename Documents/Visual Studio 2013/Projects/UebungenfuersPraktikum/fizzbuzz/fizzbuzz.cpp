#include <iostream>

using namespace std;

int fizzbuzz(int max, int fizz, int buzz); //berechnet fizzbuzz und gibt es aus

int main()
{
	int max;
	int fizz;
	int buzz;
	cout << "Maximalen Wert eingeben: \n";
	cin >> max;
	cout << "Was soll dein Fizz sein? \n";
	cin >> fizz;
	cout << "Was soll dein Buzz sein? \n";
	cin >> buzz;
	fizzbuzz(max, fizz, buzz); 
	return 0;
}

int fizzbuzz(int max, int fizz, int buzz)
{
	for (int currentNumber = 1; currentNumber <= max; currentNumber++)
	{
		if (currentNumber % fizz == 0 && currentNumber % buzz == 0)
		{
			cout << "Fizzbuzz " << currentNumber << endl;
		}
		else if (currentNumber % fizz == 0)
		{
			cout << "fizz " << currentNumber << endl;
		}
		else if (currentNumber % buzz == 0)
		{
			cout << "buzz " << currentNumber << endl;
		}
		else if (currentNumber % fizz != 0 && currentNumber % buzz != 0) // enthält currentNumber einen fizz oder einen buzz
		{																//  ohne das er durch fizz oder buzz teilbar ist
			int changingNumber = currentNumber;
			while (changingNumber != 0)
			{
				int moduloOfNumber = changingNumber % 10;
				cout << moduloOfNumber << " " << changingNumber << endl;
				if (moduloOfNumber == fizz)
				{
					cout << "fizz " << currentNumber << endl;
					break;
				}
				else if (moduloOfNumber == buzz)
				{
					cout << "buzz " << currentNumber << endl;
					break;
				}
				changingNumber = changingNumber / 10;
				cout << changingNumber << endl;
			}
			if (changingNumber == 0)
			{
				cout << currentNumber << endl;
			}
		}

	}
	return 0;
}