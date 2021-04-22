#pragma once
#include "OneBaseValidator.h"
#include <cstdint>
#include <string>

using std::string;

const int Id_LEN = 9;

class IDValidator :public OneBaseValidator <uint32_t>
{
public:
	IDValidator();
	~IDValidator();

	bool CheckIfValid(const uint32_t & id);

	string getErrorMessage();
};

