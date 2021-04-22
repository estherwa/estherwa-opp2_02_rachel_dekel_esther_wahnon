
#pragma once
#include "ComplexValidator.h"

class SumValidator
{
public:

	SumValidator(string sentence, BaseField* totalPeople, BaseField* kidsUnder18, BaseField* adultsAbove18) {};

	//bool CheckIfValid(const std::string& name);
	//string getErrorMessage();
	~SumValidator() {};
private:
	//string m_sentence;
	//BaseField* m_totalPeople;
	//BaseField* m_kidsUnder18;
	//BaseField* m_AdultsAbove18;

};
/*
//..............................................................
bool SumValidator::CheckIfValid(const std::string& name)
{
	for (size_t i = 0; i < name.size(); i++)
		if (isdigit(name[i]))
			return false;

	return true;
}


string SumValidator::getErrorMessage()
{
	return "Can't contain digits";
}



#pragma once
#include "ComplexValidator.h"
#include "Field.h"



template <class T, class T1,class T2, class T3 >
class SumValidator : public ComplexValidator
{
public:

	SumValidator(T*  sentence, T1* totalPeople, T2* kidsUnder18, T3* AdultsAbove18)
		: m_sentence(sentence), m_totalPeople(totalPeople), m_kidsUnder18(kidsUnder18), m_AdultsAbove18(AdultsAbove18) {};
	~SumValidator() {};

	bool checkFormValidator();
	string getErrorMessage();
	void fixFormFields();

private:
	T* m_sentence;
	T1 * m_totalPeople;
	T2 * m_kidsUnder18;
	T3* m_AdultsAbove18;
};

//......................................................................
*/