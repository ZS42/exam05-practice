#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(Warlock &object);
	Warlock operator=(Warlock &object);
	std::map<std::string, ASpell *> mySpells;
	public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock();
	const std::string &getName()const;
	const std::string &getTitle()const;
	void setTitle(const std::string &title);
	void learnSpell(ASpell *spell);
// none of the new functions are constant
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, const ATarget &target);
	void introduce() const;
};
