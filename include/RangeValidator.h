#pragma once
#include "OneBaseValidator.h"

template < class T>
class RangeValidator :public OneBaseValidator <T>
{
public:
	RangeValidator(T min, T max) {
		m_min_num = min ,  m_max_num = max;};
	

	~RangeValidator() {};

	bool CheckIfValid(const T & data);
	string getErrorMessage() { return "Out of range"; };

private:
	T m_min_num;
	T m_max_num;
};
//.............................................................
template <typename T>
inline bool RangeValidator<T>::CheckIfValid(const T & data)
{
	if (data < m_min_num || data > m_max_num)
		return false;
	return true;
}
//..............................................................
