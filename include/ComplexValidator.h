#pragma once

class ComplexValidator
{
public:
	ComplexValidator() {};
	~ComplexValidator() {};

	virtual bool checkFormValidator() = 0;
	virtual void fixFormFields() = 0;
	bool getFormValidState();

protected:
	bool m_valid;
};

