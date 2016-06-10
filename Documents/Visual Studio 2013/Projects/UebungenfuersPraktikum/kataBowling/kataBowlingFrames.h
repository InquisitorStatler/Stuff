#ifndef _KATABOWLINGFRAMES_H_
#define _KATABOWLINGFRAMES_H_
#include <iostream>
using namespace std;

class Game;

class Frame
{
	Game& game;
	Game& getGame();
	int score;
	int totalScoreFrame;
	int totalScoreGame;
	int frameScore;
public:
	Frame(Game& useGame);
	void setScore(int frame);
	int getScore(); // Punktzahl nur dieses Frame
	void setFrameScore(int frame); //Gesamte Punkte des Frames
	int getFrameScore();
	void setTotalScore(int i); //Gesamtpunktzahl des Spiels
	int getTotalScore();

};
#endif