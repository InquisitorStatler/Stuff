#ifndef _KATABOWLINGGAME_H_
#define _KATABOWLINGGAME_H_
#include <iostream>
#include <vector>
#include "kataBowlingFrames.h"
using namespace std;

class Game
{
	Frame frame;
	int frameScore;
	int pins;
	int rollInFrame;
	int totalScoreFrame;
	vector<int> roll; 
	vector<int> scorePerFrame; //Anzahl der Frames
public:
	Game();
	int theGame();
	int rolling(int pinsScored);
	int getFrameRoll(int frameNumber);
	int getFrameScore(int frameNumber);
	Frame& getFrame();
};
#endif