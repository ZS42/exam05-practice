#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class Fwoosh:public ASpell
{
    public:
        Fwoosh();
        Fwoosh(Fwoosh const &object);
        Fwoosh &operator=(Fwoosh const &object);
        ~Fwoosh();
        ASpell *clone()const;
};