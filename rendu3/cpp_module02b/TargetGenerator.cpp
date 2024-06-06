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
    for (std::map<std::string, ATarget *>::iterator it = myTargets.begin(); it != myTargets.end(); it++)
        delete it->second;
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
        delete (it->second);
        myTargets.erase(it->first);
    }
}
ATarget *TargetGenerator::createTarget(std::string const &typeName)
{
    std::map<std::string, ATarget *>::iterator it = myTargets.find(typeName);
    if (it != myTargets.end())
        return (it->second->clone());
    else
        return (NULL);
        
}
