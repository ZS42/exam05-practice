#pragma once

#include <iostream>
#include "ASpell.hpp"

// all public show inheritance above and below
class Fwoosh:public ASpell
{
	public:
// show inherits from ASPell and put name and effect in inverted commas
	Fwoosh();
	~Fwoosh();
	// no need for =0 in child or virtual in cpp or hpp. Remember clone must use new bc it is kept seperately
	Fwoosh *clone() const;
};
