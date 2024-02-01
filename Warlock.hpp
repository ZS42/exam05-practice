#pragma once

# include <iostream>

class Warlock
{
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(const Warlock &object);
	Warlock &operator=(const Warlock & object);
	public:
	// must be const & otherwise doesnt compile
	Warlock(const std::string& name, const std::string& title);
	~Warlock();
	const std::string &getName()const;
	const std::string &getTitle()const;
	void setTitle(const std::string &title);
	void introduce()const;
};
