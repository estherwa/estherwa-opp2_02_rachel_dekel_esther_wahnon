#pragma once
#include "ComplexValidator.h"

class RoomValidator 
{
public:
	RoomValidator(string error, BaseField* field1, BaseField* field2, BaseField* field3) {};

	
	~RoomValidator() {};
private:
	//string m_sentence;
	//BaseField* m_totalPeople;
	//BaseField* m_kidsUnder18;
	//BaseField* m_AdultsAbove18;

};


/*

#pragma once
#include "ComplexValidator.h"

enum FacultyType { COMPUTER_SIENCE = 1 , MEDICINE, LITERATURE };

template < class T1,class T2, class T3>
class RoomValidator : public ComplexValidator
{
public:

	// CHANGEEEE EVERYTHING !!!!!!!!!!!!!!!!!!!!!!
	RoomValidator(T1* facultyField, T2* yearField, T3* addsomething)
		: m_facultyField(facultyField), m_yearField(yearField), m_addsomething(addsomething) {};
	~RoomValidator() {};

	bool checkFormValidator();
	string getErrorMessage();
	void fixFormFields();

private:
	T1 * m_facultyField;
	T2 * m_yearField;
	T2* m_addsomething ;
};


//......................................................................
template <typename T1, typename T2, typename T3>
bool RoomValidator<T1,T2, T3>::checkFormValidator()
{
	int faculty = m_facultyField->getAnswer().getFaculty();
	int year = m_yearField->getAnswer();

	m_valid = true;
	switch (faculty)
	{
	case(COMPUTER_SIENCE):
		if (year > 4)
			m_valid = false;
		break;

	case(LITERATURE):
		if (year > 3)
			m_valid = false;
		break;

	case(MEDICINE):
		if (year > 7)
			m_valid = false;
		break;
	default :
		return false;
	}
	return m_valid;
}
//......................................................................
template <typename T1, typename T2, typename T3>
string RoomValidator<T1, T2, T3>::getErrorMessage()
{
	return "\nFaculty and year don't match\n";
}
//......................................................................
template <typename T1, typename T2, typename T3>
void RoomValidator<T1, T2, T3>::fixFormFields()
{
	std::cout << getErrorMessage();
	m_facultyField->setFieldState(false);
	m_yearField->setFieldState(false);
}
*/