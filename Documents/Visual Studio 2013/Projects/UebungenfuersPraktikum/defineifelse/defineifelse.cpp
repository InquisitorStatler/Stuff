#include <iostream>
using namespace std;

#ifdef __APPLE__
	#define MySYS cout << "Code fuer sonstige Rechner\n"
#elif WIN32
	#define MySYS cout << "Code fuer Windows-Rechner\n";
#elif __unix__
	#define MySYS cout << "Code fuer Unix-Rechner\n";
#elif __linux__
	#define MySYS cout << "Code fuer Linux-Rechner\n";
#else
	#define MySYS cout << "Code fuer sonstige Rechner\n";
#endif

int main()
{
	MySYS
	return 0;
}