#include <iostream>
#include <vector>
using namespace std;

int getDigit(int number, int whichNumber);
int isHappyNumber(int number, int size);
int getNewNumber(int number, int size);


int main()
{
	int number = 0;
	int newnumber = 0;

	cout << "Ist deine Zahl eine Happy Number?\n";
	cin >> number;

	int originalNumber = number;

	while (number != 1 && number != 4)
	{
		int digit = 0;
		int counter = 0;
		int amount = (int)(log10(number));
		vector<int> singles(amount + 1);
		while (amount >= 0)
		{
			singles[amount] = getDigit(number, amount);	// fügt jede Ziffer einem Platz im Vektor digits hinzu
			amount--;
		}
		number = 0;
		while (counter != singles.size())
		{
			newnumber = getNewNumber(singles[digit], singles.size());
			counter++;
			digit++;
			number = number + newnumber;
		}
	}
	if (newnumber == 1)
	{
		cout << originalNumber << " :) " << endl;
	}
	else
	{
		cout << originalNumber << " :( " << endl;
	}
	return 0;
}

int getDigit(int number, int amount) // bestimmt die einzelnen Ziffern von number
{
	int counter = 1;;
	if (counter <= amount)
	while (counter <= amount)
	{
		number = number / 10;
		counter++;
	}
	if (number != 0)
	{
		number = number % 10;
	}
	return number;
}

int isHappyNumber(int digit, int size) // happy number berechnung
{
	int happyOrNot = digit;
	if (happyOrNot != 1)
	{
		{
			happyOrNot = (digit * digit);
		}
	}
	return happyOrNot;
}

int getNewNumber(int number, int size)
{
	int newnumber = 0;
	newnumber = isHappyNumber(number, size);
	return newnumber;
}