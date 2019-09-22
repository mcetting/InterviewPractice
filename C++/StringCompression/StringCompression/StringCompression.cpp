// StringCompression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Compressor.h"
#include <iostream>

void PrintString(std::string & str) {
	std::cout << str << std::endl;
}

int main()
{
	Compressor comp;

	std::string str = "aabbbccccddddd";

	// callback function pointer
	void(*ptr)(std::string & str) = &PrintString;

	comp.CompressString(str, ptr);
}
