#include "Warlock.hpp"

Warlock::Warlock()
{

}
Warlock::Warlock(const Warlock &object)
{
	*this = object;
}
Warlock Warlock::operator=(const Warlock &object)
{
	if (this != &object)
	{
		_name = object._name;
		_title = object._title;
	}
	return(*this);
}
Warlock::Warlock(const std::string &name, const std::string &title):_name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day.\n";
}
Warlock::~Warlock()
{
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
void Warlock::setTitle(const std::string &title)
{
	_title = title;
}
void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}
void Warlock::learnSpell(ASpell *spell)
{
	mySpellBook.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spellName)
{
	mySpellBook.forgetSpell(spellName);
}
void Warlock::launchSpell(std::string spellName, const ATarget &target)
{
	ASpell *temp = mySpellBook.createSpell(spellName);
	if (temp)
		temp->launch(target);
}