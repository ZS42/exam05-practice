# pragma once

#include <iostream>
#include "ASpell.hpp"

class Polymorph:public ASpell
{
    Polymorph(Polymorph const &object);
    Polymorph &operator=(Polymorph const &object);
    public:
        Polymorph();
        ~Polymorph();
        ASpell *clone()const;
};