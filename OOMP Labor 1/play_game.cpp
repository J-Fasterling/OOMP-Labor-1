#include <iostream>
#include <ctime>
#include "play_game.h"


//Methode, um Tipp abzugeben
play_game::eHighLow play_game::guess(int iRandomNumber)
{
	int iGuessedNumber = 0;

	//Tipp abgeben
	std::cout << "Geben Sie einen Tipp ab: ";
	std::cin >> iGuessedNumber;

	//Eingabe auf Richtigkeit überprüfen

	//Die richtige Zahl wurde erraten
	if (iGuessedNumber == iRandomNumber){
		std::cout << "Perfekt du hast es beim " << iTries << ". Versuch geschafft. :)" << std::endl;
		return eHighLow::fits;
	}
	//Die zahl war zu niedrig
	else if (iGuessedNumber < iRandomNumber && iGuessedNumber > 0){
		std::cout << "Diese Zahl war zu niedrig." << std::endl << std::endl;
		return eHighLow::tooLow;
	}
	//Die Zahl war zu hoch
	else if (iGuessedNumber > iRandomNumber && iGuessedNumber < 101){
		std::cout << "Diese Zahl war zu hoch." << std::endl << std::endl;
		return eHighLow::tooHigh;
	}
	//Die Eingabe war ungültig
	else{
		std::cout << "Deine Eingabe war außerhalb des gültigen Zahlenbereichs." << std::endl << std::endl;
		return eHighLow::error;
	}

}


play_game::play_game()
{
	std::cout << "                     Ratespiel                    " << std::endl;
	std::cout << "__________________________________________________" << std::endl << std::endl;

	//Zu bestimmende Zahl zwischen 1 und 100 wählen
	srand(time(NULL));
	iNumberToGuess = rand() % 100 + 1;

	while (guess(iNumberToGuess) != eHighLow::fits)
	{
		iTries++;
	}
}



play_game::~play_game() 
{
	iTries = 1;
}