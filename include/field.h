#pragma once
#include "BaseField.h"
#include "OneBaseValidator.h"

template < class T>
class Field : public BaseField
{
public:
	Field(std::string question) :
		m_question(question) {};
	~Field() {};
	void addValidator(OneBaseValidator <T>* val);
	void fillField();
	bool checkField();
	void print(std::ostream & os);
	string getQuestion();
	void setAnswer(const T & newAnswer);
	T getAnswer()const;

private :
	T m_answer;
	std::string m_question;
	std::string m_errorMessage;
	vector <OneBaseValidator <T>*> m_FieldValidators;


};

//.................................................................
template <typename T>
void Field<T>::addValidator(OneBaseValidator <T>* val)
{
	m_FieldValidators.push_back(val);
}
//.................................................................
template <typename T>
void Field<T>::fillField()
{
	std::cout << m_question;
	std::cin >> m_answer;
}
//.................................................................
template <typename T>
bool Field<T>::checkField()
{
	isValid = true;
	for (size_t i = 0; i < m_FieldValidators.size(); i++)
		if (!m_FieldValidators[i]->CheckIfValid(m_answer))
		{
			m_errorMessage = m_FieldValidators[i]->getErrorMessage();
			isValid = false;
			return isValid;
		}
	return isValid;
}
//.................................................................
template <typename T>
void Field<T>::print(std::ostream & os)
{
	os << m_question << " = " << m_answer;
	if (!isValid)
		os << "           " << m_errorMessage;
	os << std::endl;
}
//.................................................................
template <typename T>
std::string Field<T>::getQuestion()
{
	return m_question;
}
//.................................................................
template <typename T>
void Field<T>::setAnswer(const T & newAnswer)
{
	m_answer = newAnswer;
}
//.................................................................
template <typename T>
T Field<T>::getAnswer()const
{
	return m_answer;
}
//-----------------------------------------------------------------