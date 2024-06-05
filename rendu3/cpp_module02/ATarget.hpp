# pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    ATarget(ATarget const &object);
    ATarget &operator=(ATarget const &object);
    protected:
        std::string _type;
    public:
        ATarget();
        ATarget(std::string const &type);
        virtual ~ATarget();
        const std::string &getType()const;
        void getHitBySpell(ASpell const &spell)const;
        virtual ATarget *clone()const = 0;
};