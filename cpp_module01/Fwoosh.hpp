#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh:public ASpell
{
	public:
	Fwoosh();
	~Fwoosh();
	// no need for =0 in child or virtual in cpp. Remember clone must use new bc it is kept seperately
	virtual Fwoosh *clone() const;
};
