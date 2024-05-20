#pragma once

#include <iostream>
// #include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
    std::string _name;
    std::string _title;
    // std::map<std::string, ASpell *> mySpells;
    Warlock();
    Warlock (Warlock &object);
    Warlock operator=(Warlock &object); 
    SpellBook spellCollection;
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        const std::string &getName()const;
        const std::string &getTitle()const;
        void setTitle(const std::string &title);  
        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, const ATarget &target);
};