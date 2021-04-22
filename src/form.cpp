#include "form.h"


void Form::addField(BaseField * fieldPtr)
{
	m_Fields.push_back(fieldPtr);
}
//
void Form::addValidator(ComplexValidator * val)
{
	m_FormValidators.push_back(val);
}

void Form::fillForm()
{
	for (size_t i = 0; i < m_Fields.size(); i++)
		if (m_Fields[i]->getFieldState())
			continue;
		else
			m_Fields[i]->fillField();
}

bool Form::validateForm()
{
	bool FormState = true;
	for (size_t i = 0; i < m_Fields.size(); i++)
		if (!m_Fields[i]->checkField())
			FormState = false;

	if (FormState)
		for (size_t i = 0; i < m_FormValidators.size(); i++)
			if (!m_FormValidators[i]->checkFormValidator())
				FormState = false;

	return FormState;
}

void Form::printFields(std::ostream & os) const
{
	for (size_t i = 0; i < m_Fields.size(); i++)
		m_Fields[i]->print(os);

	for (size_t i = 0; i < m_FormValidators.size(); i++)
		if (!m_FormValidators[i]->getFormValidState())
			m_FormValidators[i]->fixFormFields();
}

std::ostream & operator<<(std::ostream & ostr, const Form & form)
{
	form.printFields(ostr);
	return ostr;
}
