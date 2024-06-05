# pragma once

#include <iostream>
#include "ATarget.hpp"

class BrickWall:public ATarget
{
    BrickWall(BrickWall const &object);
    BrickWall &operator=(BrickWall const &object);
    public:
        BrickWall();
        ~BrickWall();
        ATarget *clone()const;
};