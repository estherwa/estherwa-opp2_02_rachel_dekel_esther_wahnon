#pragma once
#include <iostream>

class BaseField
{
public:
	BaseField() {};
	~BaseField() {};
	virtual bool checkField()=0;
	virtual void fillField() = 0;
		
	virtual void print(std::ostream & os) = 0;

	bool getFieldState();
	void setFieldState(bool newState);

protected:
	bool isValid = false;
};

