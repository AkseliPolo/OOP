#include "Chef.h"
#include "ItalianChef.h"

int main()
{
    Chef chef("Gordon");
    chef.makeSalad(11);
    chef.makeSoup(14);

    ItalianChef italian("Mario");
    italian.askSecret("pizza", 20, 15);

    return 0;
}
