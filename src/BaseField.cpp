#include "BaseField.h"


bool BaseField::getFieldState()
{
	return isValid;
}

void BaseField::setFieldState(bool newState)
{
	isValid = newState;
}
