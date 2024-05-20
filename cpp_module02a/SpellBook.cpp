#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}
SpellBook::SpellBook (SpellBook const &object)
{
    *this = object;
}
SpellBook SpellBook::operator=(SpellBook const &object)
{
    (void)object;
    return(*this);
}
SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator it_begin = this->mySpellBook.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->mySpellBook.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        it_begin++;
    }
    this->mySpellBook.clear();
}
void SpellBook::learnSpell(ASpell* spell)
{
    if(spell)
        mySpellBook.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}
void SpellBook::forgetSpell(std::string const &spellName)
{
    if(mySpellBook[spellName])
        delete(mySpellBook[spellName]);
    mySpellBook.erase(spellName);
}
ASpell* SpellBook::createSpell(std::string const &spellName)
{
    if(mySpellBook[spellName])
        return(mySpellBook[spellName]);
    else
        return(NULL);
}
