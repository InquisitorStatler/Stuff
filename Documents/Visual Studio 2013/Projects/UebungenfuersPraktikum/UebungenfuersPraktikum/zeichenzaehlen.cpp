#include <iostream>
#include <map>
#include <string>
using namespace std;

void counting();

int main()
{
	int z = 0;
	cout << "Gib eine Buchstabenkette ein";
	counting();
	return 0;
}
void counting()
{
	int number = 0;
	string letters;
	cin >> letters;
	map<char, int> Map;
	for (string::size_type i = 0; i < letters.length(); i++)
	{
		char c = letters[i];
		if (Map.find(c) == Map.end())
		{
			Map[c] = 1;
		}
		else
		{
			Map[c]++;
		}
	}


	map<char, int>::iterator amount;
	for (amount = Map.begin(); amount != Map.end(); amount++)
	{
		cout << "letter: " << amount->first << ", amount: " << amount->second << endl;
	}
}

