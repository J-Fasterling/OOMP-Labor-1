#include <iostream>

#pragma once
class play_game
{
public:
	bool bNamed;
	enum class eHighLow
	{
		tooHigh,
		tooLow,
		fits,
		error
	};

	eHighLow guess(int iChosenNumber, int iSelectedNumber);

	play_game();
	~play_game();

private:
	int iChosenNumber;
};

