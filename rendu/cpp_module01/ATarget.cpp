#include "ATarget.hpp"

ATarget::ATarget()
{

}
ATarget::ATarget(ATarget const &object)
{
    *this = object;
}
ATarget &ATarget::operator=(ATarget const &object)
{
    if (this != &object)
    {
        _type = object._type;
    }
    return(*this);
}
ATarget::ATarget(std::string const &type):_type(type)
{
    
}
ATarget::~ATarget()
{

}
std::string const &ATarget::getType()const
{
    return(_type);
}
void    ATarget::getHitBySpell(ASpell const &spell)const
{
    std::cout << _type << " has been " << spell.getEffects() << "!\n";
}
