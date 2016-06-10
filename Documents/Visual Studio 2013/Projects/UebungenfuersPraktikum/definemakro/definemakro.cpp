#include <iostream>
#define SQRE1(x) ((x) * (x))
#define SQRE2(x) (x * x)
using namespace std;

int main()
{
	int ival = 10;
	cout << "SQRE1(ival): " << SQRE1(ival) << '\n';
	cout << "SQRE2(ival): " << SQRE2(ival) << '\n';
	cout << "SQRE1(ival + 1): " << SQRE1(ival + 1) << '\n';
	cout << "SQRE1(ival + 1): " << SQRE2(ival + 1) << '\n';
	return 0;
}