#include "ATarget.hpp"

ATarget::ATarget()
{

}
ATarget::ATarget(ATarget &object)
{
	*this = object;
}
ATarget &ATarget::operator=(ATarget &object)
{
	if (this != &object)
	{
		_type = object._type;
	}
	return(*this);
}
ATarget::ATarget(const std::string &type):_type(type)
{
}
ATarget::~ATarget()
{
}
const std::string &ATarget::getType()const
{
	return(_type);
}
void ATarget::getHitBySpell(const ASpell &spell)const
{
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}