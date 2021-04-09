#include "play_game.h"
#include <iostream>


//Methode, um geschätzen wert einzugeben.
play_game::eHighLow play_game::guess(int iChosenNumber, int iSelectedNumber)
{
	std::cout << "Geben Sie einen Tipp ab:";
	std::cin >> iChosenNumber;

	//Die richtige Zahl wurde erraten
	if (iChosenNumber == iSelectedNumber)
	{
		return play_game::eHighLow::fits;
	}
	//Die zahl war zu niedrig
	else if (iChosenNumber < iSelectedNumber)
	{
		return play_game::eHighLow::tooLow;
	}
	//Die Zahl war zu hoch
	else if (iChosenNumber > iSelectedNumber)
	{
		return play_game::eHighLow::tooHigh;
	}
	//Die Eingabe war ungültig
	else
	{
		return play_game::eHighLow::error;
	}
}

play_game::play_game()
{

}

