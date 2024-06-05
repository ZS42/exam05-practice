# pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    ASpell(ASpell const &object);
    ASpell &operator=(ASpell const &object);
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();
        const std::string &getName()const;
        const std::string &getEffects()const;
        void launch(ATarget const &target)const;
        virtual ASpell *clone()const = 0;
};