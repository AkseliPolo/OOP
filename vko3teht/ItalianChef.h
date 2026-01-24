#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H

#include "Chef.h"

class ItalianChef : public Chef
{
private:
    std::string password = "pizza";
    int flour;
    int water;

    int makePizza(); // salainen

public:
    ItalianChef(std::string name);
    ~ItalianChef();

    bool askSecret(std::string pwd, int flour, int water);
};

#endif // ITALIAN_CHEF_H
