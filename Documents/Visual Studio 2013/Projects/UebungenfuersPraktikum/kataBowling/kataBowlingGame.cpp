#include <iostream>
#include <vector>
#include "kataBowlingGame.h"
using namespace std;

Game::Game() :
	frame(*this)
{
}

int Game::theGame()
{
	int frames = 1;
	int pinsScored = 0;
	int rollCounter = 0;
	int maxRoll = 1;
	while (frames <= 10)
	{
		cout << " " << frames << ". Frame !\n" << endl;
		pinsScored = 0;
		totalScoreFrame = 0;
		int counter = 0;
		if (scorePerFrame.empty())
		{
			scorePerFrame.push_back(0);
		}
		while (rollCounter <= maxRoll)
		{
			if (pinsScored != 10 && counter <= 1)
			{
				pinsScored = rolling(pinsScored);
				rollCounter++;
			}
			counter++;
			totalScoreFrame = totalScoreFrame + pinsScored;
			if (counter == 2)
			{
				break;
			}

		}
		cout << endl;
		frames++;
		maxRoll = maxRoll + 2;
		scorePerFrame.push_back(totalScoreFrame);
	}
	return 0;
}

int Game::rolling(int pinsScored)
{
	int pinsLeft = 10 - pinsScored;
	pinsScored = rand() % (pinsLeft + 1);
	if (pinsScored < 10 && pinsLeft != 0)
	{
		pinsLeft = pinsLeft - pinsScored;
		rollInFrame = 2;
		cout << pinsScored << " getroffen. Noch " << pinsLeft << " uebrig.\n";
	}
	if (pinsLeft <= 0 && rollInFrame == 2)
	{
		cout << " !! SPARE !! \n";
	}
	else if (pinsScored == 10)
	{
		cout << pinsScored << " !! STRIKE !! \n";
	}
	if (roll.empty())
	{
		roll.push_back(0);
	}
	roll.push_back(pinsScored);
	if (pinsScored == 10)
		roll.push_back(0);
	pinsLeft = 10;
	return pinsScored;
}

int Game::getFrameRoll(int frameNumber)
{
	int frameRoll = roll[frameNumber];
	return frameRoll;
}

int Game::getFrameScore(int frameNumber)
{
	int frameScore = scorePerFrame[frameNumber];
	return frameScore;
}

Frame& Game::getFrame()
{
	return frame;
}