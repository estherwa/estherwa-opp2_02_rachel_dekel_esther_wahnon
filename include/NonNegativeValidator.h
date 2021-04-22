#pragma once
#include "OneBaseValidator.h"

template < class T>
class NonNegativeValidator :public OneBaseValidator <int>
{
public:
	NonNegativeValidator() {};
	~NonNegativeValidator() {};

	bool CheckIfValid(const T & data);
	string getErrorMessage() { return "Can't be negative "; };

private:
	//int m_NonNegativeValidator;

};

//..............................................................
template <typename T>
inline bool NonNegativeValidator<T>::CheckIfValid(const T & data)
{
	if (data < 0)
		return false;
	return true;
}
