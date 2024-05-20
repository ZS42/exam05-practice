#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator
{
    std::map<std::string, ATarget *> targets;
    TargetGenerator (TargetGenerator &object);
    TargetGenerator &operator=(TargetGenerator &object); 
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);

};