#pragma once
#include <string>
#include <vector>

class Converter
{
public:
	Converter();
	std::string ConvertStringToUrl(const std::string &str);
	~Converter();
};

