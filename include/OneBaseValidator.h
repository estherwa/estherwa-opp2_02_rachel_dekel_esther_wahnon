#pragma once
#include <string>

using std::string;


template <class T>
class OneBaseValidator
{
public:
	OneBaseValidator() {};
	virtual string getErrorMessage() = 0;
	virtual bool CheckIfValid(const T & data) = 0;
	~OneBaseValidator() {};
};

