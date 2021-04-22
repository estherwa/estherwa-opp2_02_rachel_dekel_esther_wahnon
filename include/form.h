#pragma once
#include <vector>
#include <memory>
#include "BaseField.h"
#include "ComplexValidator.h"

using std::vector;

class Form
{
public:
	Form() {};
	~Form() {};
	void addField(BaseField * fieldPtr);
	void addValidator(ComplexValidator * val);
	void fillForm();
	bool validateForm();
	void printFields(std::ostream& os) const;

private:
	vector <BaseField *> m_Fields;
	vector <ComplexValidator *> m_FormValidators;
	

};

std::ostream & operator<<(std::ostream & ostr,const Form & form);
