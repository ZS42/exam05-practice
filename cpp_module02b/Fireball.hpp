#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class Fireball:public ASpell
{
    public:
        Fireball();
        Fireball(Fireball const &object);
        Fireball &operator=(Fireball const &object);
        ~Fireball();
        ASpell *clone()const;
};