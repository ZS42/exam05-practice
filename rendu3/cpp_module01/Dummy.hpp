#pragma once

#include <iostream>
#include "ASpell.hpp"

class Dummy:public ATarget
{
    public:
        Dummy();
        Dummy(Dummy const &object);
        Dummy &operator=(Dummy const &object);
        Dummy(std::string const &name, std::string const &effects);
        ~Dummy();
        ATarget *clone()const;
};