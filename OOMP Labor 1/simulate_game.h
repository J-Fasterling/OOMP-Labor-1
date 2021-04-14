#pragma once
class simulate_game
{
public:

	int iTop = 100;
	int iBottom = 1;
	int iTries = 1;

	enum class eStatus
	{
		tooHigh,
		tooLow,
		fits,
		error
	};
	
	eStatus guess();
	int pickNumber();

	simulate_game();
	~simulate_game();

private:
	int iNumberToGuess;
};

