#include <iostream>
#include <ctime>
#include "kataBowlingGame.h"
using namespace std;

int main()
{
	std::srand(std::time(0));
	int userInput;
	Game game;
	Frame& f = game.getFrame();
	game.theGame();
	f.setTotalScore(10);
	cout << "Endergebnis: " << f.getTotalScore() << " Punkte! " << endl;
	cout << endl;
	cout << "Von welchem Frame willst du das Ergebnis?" << endl;
	cin >> userInput;

	cout << "Frame: " << userInput << endl;


	f.setScore((userInput * 2 - 1));
	cout << f.getScore() << " & ";
	f.setScore(userInput  * 2);
	cout << f.getScore();
	f.setFrameScore(userInput);
	cout << " | Insgesamt diesen Frame: " << f.getFrameScore() << endl;

	return 0;
}