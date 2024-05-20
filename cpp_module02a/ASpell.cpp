#include "ASpell.hpp"

ASpell::ASpell()
{

}
ASpell::ASpell (ASpell &object)
{
    *this = object;
}
ASpell &ASpell::operator=(ASpell &object)
{
    if (this != &object)
    {
        _name = object._name;
        _effects = object._effects;
    }
    return(*this);
}
ASpell::ASpell(const std::string &name, const std::string &effects):_name(name), _effects(effects)
{

}
ASpell::~ASpell()
{
    

}

const std::string &ASpell::getName()const
{
    return(_name);
}
const std::string &ASpell::getEffects()const
{
    return(_effects);
}
void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}