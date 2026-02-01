#include "Asiakas.h"
#include <iostream>

int main() {
    Asiakas a1("Matti Meikäläinen", 2000);
    Asiakas a2("Teppo Testaaja", 1500);

    a1.talletus(500);
    a1.luotonNosto(300);

    a2.talletus(200);

    a1.tiliSiirto(150, a2);

    a1.showSaldo();
    std::cout << std::endl;
    a2.showSaldo();

    return 0;
}
