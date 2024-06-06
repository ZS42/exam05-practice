#pragma once

#include <iostream>
#include "ATarget.hpp"

class Polymorph:public ASpell
{
    public:
        Polymorph();
        Polymorph(Polymorph const &object);
        Polymorph &operator=(Polymorph const &object);
        Polymorph(std::string const &name, std::string const &effects);
        ~Polymorph();
        ASpell *clone()const;
};