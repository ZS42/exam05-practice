#pragma once

#include <iostream>
#include "ATarget.hpp"

class Fwoosh:public ASpell
{
    public:
        Fwoosh();
        Fwoosh(Fwoosh const &object);
        Fwoosh &operator=(Fwoosh const &object);
        Fwoosh(std::string const &name, std::string const &effects);
        ~Fwoosh();
        ASpell *clone()const;
};