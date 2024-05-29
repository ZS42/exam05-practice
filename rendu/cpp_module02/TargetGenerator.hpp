#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    TargetGenerator(TargetGenerator const &object);
    TargetGenerator &operator=(TargetGenerator const &object);
    std::map<std::string, ATarget *> myTargetGenerator;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &targetType);
        ATarget *createTarget(std::string const &targetType);
};