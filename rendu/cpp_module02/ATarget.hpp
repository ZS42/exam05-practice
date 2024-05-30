#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;
    public:
        ATarget();
        ATarget(ATarget const &object);
        ATarget &operator=(ATarget const &object);
    
        ATarget(std::string const &type);
        virtual~ATarget();

        std::string const &getType()const;

        void    getHitBySpell(ASpell const &spell)const;

        virtual ATarget *clone()const=0;
};