#include <iostream>
#include "kataBowlingFrames.h"
#include "kataBowlingGame.h"
using namespace std;

Frame::Frame(Game& useGame) :
	score(0),
	game(useGame)
{
}

void Frame::setScore(int frame)
{
	score = game.getFrameRoll(frame);
}


int Frame::getScore()
{
	return score;
}

void Frame::setFrameScore(int frame)
{
	frameScore = game.getFrameScore(frame);
}

int Frame::getFrameScore()
{
	return frameScore;
}

void Frame::setTotalScore(int i)
{
	for (int i = 1; i <= 10; i++)
	{
		totalScoreGame = totalScoreGame + game.getFrameScore(i);
	}
}

int Frame::getTotalScore()
{
	return totalScoreGame;
}
