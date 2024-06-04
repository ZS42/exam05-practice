#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class BrickWall:public ATarget
{
    public:
        BrickWall();
        BrickWall(BrickWall const &object);
        BrickWall &operator=(BrickWall const &object);
        ~BrickWall();
        ATarget *clone()const;
};