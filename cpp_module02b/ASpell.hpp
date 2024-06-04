#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        ASpell(ASpell const &object);
        ASpell &operator=(ASpell const &object);
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();
        
        const std::string &getName()const;
        const std::string &getEffects()const;

        void launch(ATarget const &target)const;

        virtual ASpell *clone()const=0;
};