#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}
SpellBook::SpellBook(SpellBook const &object)
{
    *this = object;
}
SpellBook &SpellBook::operator=(SpellBook const &object)
{
    (void)object;
    return(*this);
}
SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell *>::iterator it = myspells.begin(); it != myspells.end(); it++)
        delete it->second;
}
void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        myspells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}
void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell *>::iterator it = myspells.find(spellName);
    if (it != myspells.end())
    {
        delete myspells[spellName];
        myspells.erase(spellName);
    }
}
ASpell *SpellBook::createSpell(std::string const &spellName)
{
    if (myspells[spellName])
        return(myspells[spellName]);
    else
        return (NULL);
}