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
        virtual~ASpell();

        std::string const &getName()const;
        std::string const &getEffects()const;

        void launch(ATarget const &target)const;

        virtual ASpell *clone()const=0;
};