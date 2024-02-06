#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>


class SpellBook
{
	SpellBook(const SpellBook &object);
	SpellBook &operator=(const SpellBook &object);
	std::map<std::string, ASpell *> mySpellBook;
	public:
	SpellBook();
	~SpellBook();
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const & spellName);
	ASpell* createSpell(std::string const & spellName);
};