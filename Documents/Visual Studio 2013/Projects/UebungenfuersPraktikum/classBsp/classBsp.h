#ifndef _AUTOMAT_H_
#define _AUTOMAT_H_
#include <string>
using namespace std;

class Automat
{
private:
	//Daten der Klasse
	unsigned long geld;
	string standort;
public:
	//Elementfunktionen
	unsigned long get_geld();
	void set_geld(unsigned long g);
	string get_standort();
	void set_standort(string s);
	void init(unsigned long g, string s);
};
#endif