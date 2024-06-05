# pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh:public ASpell
{
    Fwoosh(Fwoosh const &object);
    Fwoosh &operator=(Fwoosh const &object);
    public:
        Fwoosh();
        ~Fwoosh();
        ASpell *clone()const;
};