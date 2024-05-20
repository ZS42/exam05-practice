#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
    SpellBook (SpellBook const &object);
    SpellBook operator=(SpellBook const &object);
    // why is this private? 
    std::map<std::string, ASpell*> mySpellBook;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const &spellName);
        ASpell* createSpell(std::string const &spellName);
};