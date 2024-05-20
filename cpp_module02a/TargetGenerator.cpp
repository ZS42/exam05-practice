#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::TargetGenerator (TargetGenerator &object)
{
    *this = object;
}
TargetGenerator &TargetGenerator::operator=(TargetGenerator &object)
{
    (void)object;
    return(*this);
}

TargetGenerator::~TargetGenerator()
{
    

}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
        targets[target->getType()] = target;
}
void TargetGenerator::forgetTargetType(std::string const &type)
{
    targets.erase(type);
}
ATarget* TargetGenerator::createTarget(std::string const &type)
{
    if (targets.find(type) != targets.end())
        return(targets[type]);
    else
        return(NULL);
}