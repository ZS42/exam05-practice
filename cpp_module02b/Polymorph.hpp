#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class Polymorph:public ASpell
{
    public:
        Polymorph();
        Polymorph(Polymorph const &object);
        Polymorph &operator=(Polymorph const &object);
        ~Polymorph();
        ASpell *clone()const;
};