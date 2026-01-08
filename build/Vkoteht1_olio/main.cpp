#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    srand(time(nullptr));
    int maxnum = 40;

    int arvaustenMaara = game(maxnum);

    cout << "Arvasit oikein " << arvaustenMaara << " yrityksella." << endl;

    return 0;
}

int game(int maxnum)
{
    int satunnaisluku = rand() % maxnum + 1;
    int arvaus;
    int laskuri = 0;

    do {
        cout << "Arvaa luku 1-" << maxnum << ": ";
        cin >> arvaus;
        laskuri++;

        if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi." << endl;
        }
        else if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi." << endl;
        }
        else {
            cout << "Oikein!" << endl;
        }

    } while (arvaus != satunnaisluku);

    return laskuri;
}
