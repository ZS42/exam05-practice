#include "Warlock.hpp"

Warlock::Warlock()
{

}
Warlock::Warlock(Warlock const &object)
{
    *this = object;
}
Warlock &Warlock::operator=(Warlock const &object)
{
    if (this != &object)
    {
        _name = object._name;
        _title = object._title;
    }
    return(*this);
}
Warlock::Warlock(std::string const &name, std::string const &title):_name(name),_title(title)
{
    std::cout << _name << ": This looks like another boring day.\n";
}
Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!\n";
}
const std::string &Warlock::getName()const
{
    return(_name);
}
const std::string &Warlock::getTitle()const
{
    return(_title);
}
void Warlock::setTitle(std::string const &title)
{
    _title = title;
}
void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name <<", " << _title << "!\n";
}