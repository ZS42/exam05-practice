#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class SpellBook
{
    SpellBook(SpellBook const &object);
    SpellBook &operator=(SpellBook const &object);
    std::map<std::string, ASpell *> mySpells;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellName);
        ASpell *createSpell(std::string const &spellName);
};