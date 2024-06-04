#include "ASpell.hpp"

ASpell::ASpell()
{

}
ASpell::ASpell(ASpell const &object)
{
    *this = object;
}
ASpell &ASpell::operator=(ASpell const &object)
{
    if (this != &object)
    {
        _name = object._name;
        _effects =object._effects;
    }
    return(*this);
}
ASpell::ASpell(std::string const &name, std::string const &effects):_name(name), _effects(effects)
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
void ASpell::launch(ATarget const &target)const
{
    target.getHitBySpell(*this);
}