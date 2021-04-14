#include <iostream>
#include <ctime>
#include "simulate_game.h"



int simulate_game::pickNumber()
{
	//int iGuess = (rand() % ((iTop + 1) - iBottom)) + iBottom;
    int iGuess = ((iTop - iBottom) / 2) + iBottom;

	std::cout << iGuess << std::endl;

	return iGuess;
}





//Methode, um Tipp abzugeben
simulate_game::eStatus simulate_game::guess()
{
	//Tipp abgeben
	std::cout << "Geben Sie einen Tipp ab: ";
	int iGuessedNumber = pickNumber();

	//Eingabe auf Richtigkeit überprüfen

	//Die richtige Zahl wurde erraten
	if (iGuessedNumber == iNumberToGuess) {
		std::cout << "Perfekt du hast es beim " << iTries << ". Versuch geschafft. :)" << std::endl;
		return eStatus::fits;
	}
	//Die zahl war zu niedrig
	else if (iGuessedNumber < iNumberToGuess && iGuessedNumber > 0) {
		std::cout << "Diese Zahl war zu niedrig." << std::endl << std::endl;
		iBottom = iGuessedNumber + 1;
		return eStatus::tooLow;
	}
	//Die Zahl war zu hoch
	else if (iGuessedNumber > iNumberToGuess && iGuessedNumber < 101) {
		std::cout << "Diese Zahl war zu hoch." << std::endl << std::endl;
		iTop = iGuessedNumber - 1;
		return eStatus::tooHigh;
	}
	//Die Eingabe war ungültig
	else {
		std::cout << "Deine Eingabe war außerhalb des gültigen Zahlenbereichs." << std::endl << std::endl;
		return eStatus::error;
	}

}


simulate_game::simulate_game()
{
	std::cout << "                     Ratespiel                    " << std::endl;
	std::cout << "__________________________________________________" << std::endl << std::endl;

	//Zu bestimmende Zahl zwischen 1 und 100 wählen
	srand(time(NULL));
	iNumberToGuess = rand() % 100 + 1;

	while (guess() != eStatus::fits)
	{
		iTries++;
	}
}



simulate_game::~simulate_game()
{

}
