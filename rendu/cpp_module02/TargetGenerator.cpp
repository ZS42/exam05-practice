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
    for (std::map<std::string, ATarget*>::iterator it = myTargetGenerator.begin(); it != myTargetGenerator.end() ;it++)
        delete it->second;
        // spellCollection.erase(it);
}
void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        myTargetGenerator.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}
void TargetGenerator::forgetTargetType(std::string const &targetType)
{
    std::map<std::string, ATarget *>::iterator it = myTargetGenerator.find(targetType);
    if (it != myTargetGenerator.end())
        myTargetGenerator.erase(targetType);
}
ATarget *TargetGenerator::createTarget(std::string const &targetType)
{
    if (myTargetGenerator.find(targetType) != myTargetGenerator.end())
        return (myTargetGenerator[targetType]);
    else
        return (NULL);
}
// void	TargetGenerator::learnSpell(ASpell* spell)
// {
// 	if (spell)
// 		spellCollection[spell->getName()] = spell->clone();
// }

// void	TargetGenerator::forgetSpell(std::string spell)
// {
// 	std::map<std::string, ASpell*>::iterator delIt = spellCollection.find(spell);
// 	if (delIt != spellCollection.end())
// 	{
// 		delete delIt->second;
// 		spellCollection.erase(delIt);
// 	}
// }
// void	TargetGenerator::launchSpell(std::string spell, const ATarget& target)
// {
// 	if (spellCollection.find(spell) != spellCollection.end())
// 		spellCollection[spell]->launch(target);
// }