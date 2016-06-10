#include <string>
#include "classBsp.h"
using namespace std;

unsigned long Automat::get_geld()
{
	return geld;
}

void Automat::set_geld(unsigned long g)
{
	geld = g;
}

string Automat::get_standort()
{
	return standort;
}

void Automat::set_standort(string s)
{
	standort = s;
}

void Automat::init(unsigned long g = 0, string s = "")
{
	set_geld(g);
	set_standort(s);
}