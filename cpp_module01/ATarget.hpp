#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
	std::string _type;
	public:
	ATarget();
	ATarget(ATarget &object);
	ATarget &operator=(ATarget &object);
	ATarget(const std::string &type);
	// no need to write virtual in cpp
	virtual ~ATarget();
	const std::string &getType()const;
// needs to be const function
	void getHitBySpell(const ASpell &spell)const;
// dont forget the const
	virtual ATarget *clone() const = 0;
};
