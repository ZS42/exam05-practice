#pragma once

#include <iostream>
#include "ATarget.hpp"

class Dummy:public ATarget
{
    public:
    Dummy();
    Dummy(Dummy const &object);
    Dummy &operator=(Dummy const &object);
    ~Dummy();
    ATarget *clone()const;
};