#pragma once

#include <iostream>
#include "ASpell.hpp"

class BrickWall:public ATarget
{
    public:
        BrickWall();
        BrickWall(BrickWall const &object);
        BrickWall &operator=(BrickWall const &object);
        BrickWall(std::string const &name, std::string const &effects);
        ~BrickWall();
        ATarget *clone()const;
};