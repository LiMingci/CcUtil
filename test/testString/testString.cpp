#include <string>
#include <iostream>

#include "CcString/strings.h"

int main(int argc, char* argv[])
{
	float fvalue = 0.12356f;
	
	std::string str_value = util::string::get<float>(fvalue);
	
	std::cout << str_value << std::endl;

	return 0;
}