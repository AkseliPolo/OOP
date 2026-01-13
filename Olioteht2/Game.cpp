#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumber)
{
    cout << "DEBUG: Game constructor called" << endl;

    this->maxNumber = maxNumber;
    guessCount = 0;

    srand(time(0));
    randomNumber = (rand() % maxNumber) + 1;

    cout << "DEBUG: maxNumber = " << this->maxNumber << endl;
    cout << "DEBUG: randomNumber generated" << endl;
}

void Game::play()
{
    cout << "DEBUG: play() started" << endl;

    int userGuess = 0;

    while (userGuess != randomNumber)
    {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> userGuess;
        guessCount++;

        cout << "DEBUG: userGuess = " << userGuess << endl;

        if (userGuess < randomNumber)
        {
            cout << "Lukusi on liian pieni" << endl;
        }
        else if (userGuess > randomNumber)
        {
            cout << "Lukusi on liian suuri" << endl;
        }
    }

    cout << "DEBUG: Correct guess" << endl;
    printGameResult();
}

void Game::printGameResult()
{
    cout << "DEBUG: printGameResult() called" << endl;
    cout << "Oikea vastaus: " << randomNumber << endl;
    cout << "Arvauksia tarvittiin: " << guessCount << endl;
}
