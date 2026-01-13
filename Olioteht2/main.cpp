#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    cout << "DEBUG: main() started" << endl;

    int maxValue;
    cout << "Give max value" << endl;
    cin >> maxValue;

    Game game(maxValue);   // Game-olio luodaan
    game.play();           // Peli käynnistetään

    cout << "DEBUG: main() ending" << endl;
    return 0;
}
