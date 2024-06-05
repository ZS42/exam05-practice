#include "Polymorph.hpp"

Polymorph::Polymorph():ASpell("Polymorph", "turned into a critter")
{

}
Polymorph::Polymorph(Polymorph const &object)
{
    *this = object;
}
Polymorph &Polymorph::operator=(Polymorph const &object)
{
    (void)object;
    return (*this);

}
Polymorph::~Polymorph()
{
    
}
ASpell *Polymorph::clone()const
{
    return (new Polymorph);
}