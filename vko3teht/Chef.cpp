#include "Chef.h"
#include <iostream>

Chef::Chef(std::string name) : chefName(name)
{
    std::cout << "Chef " << chefName << " constructor!" << std::endl;
}

Chef::~Chef()
{
    std::cout << "Chef " << chefName << " destructor!" << std::endl;
}

std::string Chef::getName() const
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int portions = ingredients / 5;
    std::cout << "Chef " << chefName
              << " with " << ingredients
              << " items can make salad "
              << portions << " portions" << std::endl;
    return portions;
}

int Chef::makeSoup(int ingredients)
{
    int portions = ingredients / 3;
    std::cout << "Chef " << chefName
              << " with " << ingredients
              << " items can make soup "
              << portions << " portions" << std::endl;
    return portions;
}
