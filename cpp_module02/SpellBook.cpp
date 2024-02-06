#include "SpellBook.hpp"


SpellBook::SpellBook()
{
}
SpellBook::SpellBook(const SpellBook &object)
{
	*this = object;
}
SpellBook &SpellBook::operator=(const SpellBook &object)
{
	(void)object;
	return(*this);
}
SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it = mySpellBook.begin();
	while (it != mySpellBook.end())
		delete it->second;
	mySpellBook.clear();
}
void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		mySpellBook.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}
void SpellBook::forgetSpell(std::string const & spellName)
{
	if (mySpellBook[spellName])
		delete(mySpellBook[spellName]);
	mySpellBook.erase(spellName);
}
ASpell* SpellBook::createSpell(std::string const & spellName)
{
	std::map<std::string, ASpell *>::iterator it = mySpellBook.find(spellName);
	if (it != mySpellBook.end())
		return(mySpellBook[spellName]);
	return (NULL);
}