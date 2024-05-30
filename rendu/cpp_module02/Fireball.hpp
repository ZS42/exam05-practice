#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fireball:public ASpell
{
    public:
        Fireball();
        Fireball(Fireball const &object);
        Fireball &operator=(Fireball const &object);
    
        ~Fireball();

        ASpell *clone()const;
};