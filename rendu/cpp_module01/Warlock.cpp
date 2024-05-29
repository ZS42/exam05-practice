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
Warlock::Warlock(std::string const &name, std::string const &title):_name(name),_title(title)
{
    std::cout << _name << ": This looks like another boring day.\n";
}
Warlock::~Warlock()
{ 
    for (std::map<std::string, ASpell*>::iterator it=spellCollection.begin(); it != spellCollection.end() ;it++)
        delete it->second;
        // spellCollection.erase(it);
    std::cout << _name << ": My job here is done!\n";
}
const std::string &Warlock::getName()const
{
    return(_name);
}
const std::string &Warlock::getTitle()const
{
    return(_title);
}
void Warlock::setTitle(std::string const &title)
{
    _title = title;
}
void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name <<", " << _title << "!\n";
}
void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        spellCollection.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}
void Warlock::forgetSpell(std::string spellName)
{
    std::map<std::string, ASpell *>::iterator it = spellCollection.find(spellName);
    if (it != spellCollection.end())
        spellCollection.erase(spellName);
}
void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
    ASpell *spell = spellCollection[spellName];
    if (spell)
        spell->launch(target);
}
// void	Warlock::learnSpell(ASpell* spell)
// {
// 	if (spell)
// 		spellCollection[spell->getName()] = spell->clone();
// }

// void	Warlock::forgetSpell(std::string spell)
// {
// 	std::map<std::string, ASpell*>::iterator delIt = spellCollection.find(spell);
// 	if (delIt != spellCollection.end())
// 	{
// 		delete delIt->second;
// 		spellCollection.erase(delIt);
// 	}
// }
// void	Warlock::launchSpell(std::string spell, const ATarget& target)
// {
// 	if (spellCollection.find(spell) != spellCollection.end())
// 		spellCollection[spell]->launch(target);
// }