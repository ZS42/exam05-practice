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
    for (std::map<std::string, ASpell *>::iterator it = mySpells.begin(); it != mySpells.end(); it++)
        delete it->second;
}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        mySpells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}
void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell *>::iterator it = mySpells.find(spellName);
    if (it != mySpells.end())
    {
        delete it->second;
        mySpells.erase(it);
    }
}
ASpell *SpellBook::createSpell(std::string const &spellName)
{
    if (mySpells.find(spellName) != mySpells.end())
        return (mySpells[spellName]);
    else
        return(NULL);
}