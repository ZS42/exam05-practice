#pragma once

#include <iostream>

class Warlock
{
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(Warlock &object);
	Warlock operator=(Warlock &object);
	public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock();
	const std::string &getName()const;
	const std::string &getTitle()const;
	void setTitle(const std::string &title);
	void introduce() const;
};