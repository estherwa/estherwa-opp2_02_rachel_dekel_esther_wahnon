#pragma once
#include "OneBaseValidator.h"
#include <cstdint>
#include <string>

template < class T>
class DateValidator :public OneBaseValidator <T>
{
public:
	DateValidator() {};
	~DateValidator() {};
	bool CheckIfValid(const T& data);
	string getErrorMessage() {	return "Out of range";};
	int currentYear();
	int currentMonth();
	int currentDay();
	
private:
	
};

//..............................................................................
template <typename T>
inline bool DateValidator<T>::CheckIfValid(const T& data)
{
	int day = data / 1000000;
	int month =(data / 10000)%100;
	int year = data % 10000;


	if ((day < 1 || day > 31) || (month < 1 || month > 12))
		return false;

	else if (year < currentYear())
		return false;

	else if (year == currentYear())
	{

		if (month < currentMonth())
			return false;
		if (month == currentMonth())
		{
			if (day < currentDay())
				return false;
		}

	}

	return true;



}
//-------------------------------------------------------------------------------
template <typename T>
int DateValidator<T>::currentYear()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	
	return(1900 + ltm->tm_year);
	
}
//-------------------------------------------------------------------------------
template <typename T>
int DateValidator<T>::currentMonth()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	
	return (1 + ltm->tm_mon);

}
//-------------------------------------------------------------------------------
template <typename T>
int DateValidator<T>::currentDay()
{
	time_t now = time(0);

	tm* ltm = localtime(&now);

	return (ltm->tm_mday);
}
