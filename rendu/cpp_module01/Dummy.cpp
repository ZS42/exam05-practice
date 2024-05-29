#include "Dummy.hpp"

Dummy::Dummy():ATarget("Target Practice Dummy")
{

}
Dummy::Dummy(Dummy const &object)
{
    (void)object;
}
Dummy &Dummy::operator=(Dummy const &object)
{
    (void)object;
    return(*this);
}
Dummy::~Dummy()
{

}
ATarget *Dummy::clone()const
{
    return new Dummy();
}
