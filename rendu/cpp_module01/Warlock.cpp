#include "Warlock.hpp"

Warlock::Warlock()
{

}
Warlock::Warlock(Warlock const &object)
{
    *this = object;
}
Warlock &Warlock::operator=(Warlock const &object)
{
    if (this != &object)
    {
        _name = object._name;
        _title = object._title;
    }
    return(*this);
}
Warlock::Warlock(std::string const &name, std::string const &title):_name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day.\n";
}
Warlock::~Warlock()
{
    for (std::map<std::string, ASpell *>::iterator it = mySpells.begin(); it != mySpells.end(); it++)
        delete it->second;
    std::cout << _name << ": My job here is done!\n";
}
std::string const &Warlock::getName()const
{
    return(_name);
}
std::string const &Warlock::getTitle()const
{
    return(_title);
}
void    Warlock::setTitle(std::string const &title)
{
    _title = title;
}
void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}
void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        mySpells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}
void Warlock::forgetSpell(std::string spellName)
{
    std::map<std::string, ASpell *>::iterator it = mySpells.find(spellName);
    if (it != mySpells.end())
    {
        delete it->second;
        mySpells.erase(it);
    }
}
void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
    if (mySpells.find(spellName) != mySpells.end())
        mySpells[spellName]->launch(target);
}