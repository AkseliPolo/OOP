#include "Asiakas.h"
#include <iostream>

Asiakas::Asiakas(const std::string& n, double luottoraja)
    : nimi(n), pankkitili(n), luottotili(n, luottoraja) {}

void Asiakas::showSaldo() const {
    std::cout << nimi << " saldot:\n";
    std::cout << "  Pankkitili: " << pankkitili.getBalance() << "\n";
    std::cout << "  Luottotili: " << luottotili.getBalance() << "\n";
}

bool Asiakas::talletus(double amount) {
    return pankkitili.deposit(amount);
}

bool Asiakas::nosto(double amount) {
    return pankkitili.withdraw(amount);
}

bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}

bool Asiakas::tiliSiirto(double amount, Asiakas& vastaanottaja) {
    if (amount <= 0)
        return false;

    if (!pankkitili.withdraw(amount))
        return false;

    return vastaanottaja.pankkitili.deposit(amount);
}
