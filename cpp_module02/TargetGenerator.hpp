#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>

class ATarget;

class TargetGenerator
{
	TargetGenerator(const TargetGenerator &object);
	TargetGenerator &operator=(const TargetGenerator &object);
	std::map<std::string, ATarget *> myTargetGenerator;
	public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const & targetType);
	ATarget* createTarget(std::string const & targetType);
};