#include "pch.h"
#include "Converter.h"


Converter::Converter()
{
}

std::string Converter::ConvertStringToUrl(const std::string &str)
{
	std::vector<char> vec;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ') {
			vec.push_back(str[i]);
		}
		else {
			if (str[i - 1] != ' ') {
				vec.push_back('*');
			}
		}
	}
	std::string retstr;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] != '*') {
			retstr += vec[i];
		}
		else{
			retstr += "%20";
		}

	}
	return retstr;
}


Converter::~Converter()
{
}
