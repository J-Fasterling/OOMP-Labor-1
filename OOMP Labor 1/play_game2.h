#pragma once
class play_game2
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
	play_game2();
	~play_game2();

private:
	int iNumberToGuess;
};

