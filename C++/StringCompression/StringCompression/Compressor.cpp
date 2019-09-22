#include "pch.h"
#include "Compressor.h"


Compressor::Compressor()
{
}


Compressor::~Compressor()
{
}

std::string Compressor::CompressString(const std::string & str, void(*ptr)(std::string & str))
{
	std::string final_str = "";

	int ascii[128] = {0};

	for (unsigned int i = 0; str[i]; i++)
	{
		ascii[str[i]] ++;
		if (ascii[str[i]] == 1) {
			//check previous and put number
			if (i > 0) {
				if (ascii[str[i - 1]] != 0) {
					final_str += std::to_string(ascii[str[i - 1]]);
				}
			}
			final_str += str[i];
		}
	}
	final_str += std::to_string(ascii[str[str.length() - 1]]);
	// c++ callback function
	(*ptr)(final_str);

	return final_str;
}
