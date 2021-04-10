#include <iostream>
#pragma once
class play_game
{
public:
	int iTries = 1;
	enum class eHighLow
	{
		tooHigh,
		tooLow,
		fits,
		error
	};

	eHighLow guess(int RandomNumber);
	play_game();
	~play_game();

private:
	int iNumberToGuess;
};

