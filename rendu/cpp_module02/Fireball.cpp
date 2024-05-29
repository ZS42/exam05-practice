#include "Fireball.hpp"

Fireball::Fireball():ASpell("Fireball", "burnt to a crisp")
{

}
Fireball::Fireball(Fireball const &object)
{
    (void)object;
}
Fireball &Fireball::operator=(Fireball const &object)
{
    (void)object;
    return(*this);
}
Fireball::~Fireball()
{

}
ASpell *Fireball::clone()const
{
    return new Fireball();
}
