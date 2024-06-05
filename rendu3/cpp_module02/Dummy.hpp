# pragma once

#include <iostream>
#include "ATarget.hpp"

class Dummy:public ATarget
{
    Dummy(Dummy const &object);
    Dummy &operator=(Dummy const &object);
    public:
        Dummy();
        ~Dummy();
        ATarget *clone()const;
};