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
    for (std::map<std::string, ASpell*>::iterator it=mySpellBook.begin(); it != mySpellBook.end() ;it++)
        delete it->second;
}
void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        mySpellBook.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}
void SpellBook::forgetSpell(std::string spellName)
{
    std::map<std::string, ASpell *>::iterator it = mySpellBook.find(spellName);
    if (it != mySpellBook.end())
        mySpellBook.erase(spellName);
}
ASpell *SpellBook::createSpell(std::string spellName)
{
    if (mySpellBook.find(spellName) != mySpellBook.end())
        return (mySpellBook[spellName]->clone());
    else
        return (NULL);
}
// void	SpellBook::learnSpell(ASpell* spell)
// {
// 	if (spell)
// 		spellCollection[spell->getName()] = spell->clone();
// }

// void	SpellBook::forgetSpell(std::string spell)
// {
// 	std::map<std::string, ASpell*>::iterator delIt = spellCollection.find(spell);
// 	if (delIt != spellCollection.end())
// 	{
// 		delete delIt->second;
// 		spellCollection.erase(delIt);
// 	}
// }
// void	SpellBook::launchSpell(std::string spell, const ATarget& target)
// {
// 	if (spellCollection.find(spell) != spellCollection.end())
// 		spellCollection[spell]->launch(target);
// }