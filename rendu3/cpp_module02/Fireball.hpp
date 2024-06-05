# pragma once

#include <iostream>
#include "ASpell.hpp"

class Fireball:public ASpell
{
    Fireball(Fireball const &object);
    Fireball &operator=(Fireball const &object);
    public:
        Fireball();
        ~Fireball();
        ASpell *clone()const;
};