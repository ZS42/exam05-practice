#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock
{
    std::string _name;
    std::string _title;
    Warlock();
    Warlock(Warlock const &object);
    Warlock &operator=(Warlock const &object);
    SpellBook spellCollection;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        const std::string &getName()const;
        const std::string &getTitle()const;
        void setTitle(std::string const &title);
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget const &target);
        void introduce() const;
};