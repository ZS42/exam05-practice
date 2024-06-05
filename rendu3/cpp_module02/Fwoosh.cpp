#include "Fwoosh.hpp"

Fwoosh::Fwoosh():ASpell("Fwoosh", "fwooshed")
{

}
Fwoosh::Fwoosh(Fwoosh const &object)
{
    *this = object;
}
Fwoosh &Fwoosh::operator=(Fwoosh const &object)
{
    (void)object;
    return (*this);

}
Fwoosh::~Fwoosh()
{
    
}
ASpell *Fwoosh::clone()const
{
    return (new Fwoosh);
}