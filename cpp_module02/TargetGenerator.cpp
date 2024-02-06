#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator()
{

}
TargetGenerator::TargetGenerator(const TargetGenerator &object)
{
	*this = object;
}
TargetGenerator &TargetGenerator::operator=(const TargetGenerator &object)
{
	(void)object;
	return(*this);
}
TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget *>::iterator it = myTargetGenerator.begin();
	while (it != myTargetGenerator.end())
		delete it->second;
	myTargetGenerator.clear();
}
void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		myTargetGenerator.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}
void TargetGenerator::forgetTargetType(std::string const & targetType)
{
	if (myTargetGenerator[targetType])
		delete(myTargetGenerator[targetType]);
	myTargetGenerator.erase(targetType);
}
ATarget* TargetGenerator::createTarget(std::string const & targetType)
{
	std::map<std::string, ATarget *>::iterator it = myTargetGenerator.find(targetType);
	if (it != myTargetGenerator.end())
		return(myTargetGenerator[targetType]);
	return (NULL);
}