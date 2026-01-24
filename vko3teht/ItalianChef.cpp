#include "ItalianChef.h"
#include <iostream>
#include <algorithm>

ItalianChef::ItalianChef(std::string name)
    : Chef(name), flour(0), water(0)
{
    std::cout << "ItalianChef " << chefName << " constructor!" << std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef " << chefName << " destructor!" << std::endl;
}

bool ItalianChef::askSecret(std::string pwd, int flour, int water)
{
    if (password.compare(pwd) == 0)
    {
        std::cout << "Password ok!" << std::endl;
        this->flour = flour;
        this->water = water;
        makePizza();
        return true;
    }
    else
    {
        std::cout << "Wrong password!" << std::endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    int pizzas = std::min(flour / 5, water / 5);
    std::cout << "ItalianChef " << chefName
              << " can make pizza "
              << pizzas << " portions" << std::endl;
    return pizzas;
}
