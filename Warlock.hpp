#pragma once

#include <iostream>

class Warlock{
	Warlock();
	Warlock(const Warlock &object);
	Warlock & operator=(const Warlock &object);
	std::string _name;
	std::string _title;
	public:
	Warlock(std::string name, std::string title);
	~Warlock();
	std::string const & getName()const;
	std::string const & getTitle()const;
	// void setName(std::string name);
	void setTitle(std::string const &title);
	void introduce() const;
};