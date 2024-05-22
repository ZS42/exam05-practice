#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
	std::string _name;
	std::string _effects;
	public:
	ASpell();
	ASpell(ASpell &object);
// must use get in following bc cant access with just _name in abstarct class
	ASpell &operator=(ASpell &object);
	ASpell(const std::string &name, const std::string &effects);
	virtual ~ASpell();
	const std::string &getName()const;
	const std::string &getEffects()const;
	void launch(const ATarget &target) const;
	virtual ASpell *clone() const = 0;
};
