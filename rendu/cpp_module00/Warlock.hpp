#pragma once

#include <iostream>

class Warlock
{
    std::string _name;
    std::string _title;
    Warlock();
    Warlock(Warlock const &object);
    Warlock &operator=(Warlock const &object);
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        const std::string &getName()const;
        const std::string &getTitle()const;

        void setTitle(std::string const &title);

        void introduce() const;
};