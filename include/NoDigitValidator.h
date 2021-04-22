#pragma once
#include "OneBaseValidator.h"
#include <string>

class NoDigitValidator :public OneBaseValidator <std::string>
{
public:

	NoDigitValidator() {};
	bool CheckIfValid(const std::string & name);
	~NoDigitValidator() {};
	string getErrorMessage() {return "Can't contain digits";};

private:

};

