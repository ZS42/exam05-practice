#pragma once

#include <iostream>
#include "ATarget.hpp"

class Fireball:public ASpell
{
    public:
        Fireball();
        Fireball(Fireball const &object);
        Fireball &operator=(Fireball const &object);
        Fireball(std::string const &name, std::string const &effects);
        ~Fireball();
        ASpell *clone()const;
};