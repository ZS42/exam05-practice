#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh:public ASpell
{
    public:
    Fwoosh();
    Fwoosh(Fwoosh const &object);
    Fwoosh &operator=(Fwoosh const &object);
    ~Fwoosh();
    ASpell *clone()const;
};