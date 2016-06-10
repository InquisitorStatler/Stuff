#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "classBsp.h"
using namespace std;

int main()
{
	int counter = 0;
	while (counter != 2)
	{
		std::unique_ptr<Automat> device_ptr(new Automat);
		vector<Automat> Vdevice(2);
		Automat device;
		// Initialisieren
		device_ptr->init(10000, "Bonn, Hauptstraﬂe 123");

		Vdevice[0].init(20000, "Augsburg, Fuggerweg 345");
		Vdevice[1].set_geld(25000);
		Vdevice[1].set_standort("Berlin, Berliner Allee 567");

		device.init(123456, "Frankfurt, Goethestraﬂe 123");

		// Ausgabe
		cout << device_ptr->get_geld() << endl;
		cout << device_ptr->get_standort() << endl;

		for (size_t i = 0; i < Vdevice.size(); i++)
		{
			cout << Vdevice[i].get_geld() << endl;
			cout << Vdevice[i].get_standort() << endl;
		}
		cout << device.get_geld() << endl;
		cout << device.get_standort() << endl;
		counter++;
	}
	return 0;
}