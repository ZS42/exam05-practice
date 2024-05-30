#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock
{
    std::string _name;
    std::string _title;

    Warlock();
    Warlock(Warlock const &object);
    Warlock &operator=(Warlock const &object);
    
    std::map<std::string, ASpell *> mySpells;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName()const;
        std::string const &getTitle()const;

        void    setTitle(std::string const &title);

        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget const &target);
};