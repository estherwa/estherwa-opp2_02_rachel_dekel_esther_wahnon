
#pragma once
#include "OneBaseValidator.h"


template < class T>
class NotGreaterThanValidator:public OneBaseValidator <int>
{
public:
	NotGreaterThanValidator(T rooms) :
		m_NotGreaterThanValidator(rooms) {};
	~NotGreaterThanValidator() {};

	bool CheckIfValid(const T& data);
	string getErrorMessage();

private:
	T m_NotGreaterThanValidator;

};

//..............................................................
template <typename T>
inline bool NotGreaterThanValidator<T>::CheckIfValid(const T& data)
{
	if (data > m_NotGreaterThanValidator)
		return false;
	return true;


}
//..............................................................
template <typename T>
string NotGreaterThanValidator<T>::getErrorMessage()
{
	return "The maximum is 10 rooms";
}