#include "Luottotili.h"
#include <cmath>

Luottotili::Luottotili(const std::string& nimi, double raja)
    : Pankkitili(nimi), luottoraja(-std::abs(raja)) {}

bool Luottotili::withdraw(double amount) {
    if (amount <= 0)
        return false;

    if (saldo - amount < luottoraja)
        return false;

    saldo -= amount;
    return true;
}

bool Luottotili::deposit(double amount) {
    if (amount <= 0)
        return false;

    if (saldo + amount > 0)
        saldo = 0;
    else
        saldo += amount;

    return true;
}
