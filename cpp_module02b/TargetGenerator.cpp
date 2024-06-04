#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::TargetGenerator(TargetGenerator const &object)
{
    *this = object;
}
TargetGenerator &TargetGenerator::operator=(TargetGenerator const &object)
{
    (void)object;
    return(*this);
}
TargetGenerator::~TargetGenerator()
{

}
void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        myTargets.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}
void TargetGenerator::forgetTargetType(std::string const &typeName)
{
    std::map<std::string, ATarget *>::iterator it = myTargets.find(typeName);
    if (it != myTargets.end())
    {
        delete myTargets[typeName];
        myTargets.erase(typeName);
    }
}
ATarget *TargetGenerator::createTarget(std::string const &typeName)
{
    if (myTargets[typeName])
        return(myTargets[typeName]);
    else
        return (NULL);
}