// URLify.cpp : This file contains the 'main' function. Program execution begins and ends there.
// replace the given strings spaces with %20
// mr john smith      
//

#include "pch.h"
#include "Converter.h"
#include <iostream>

int main()
{
	Converter con;

	std::string tester = "this is a testing string";
	std::cout << tester << std::endl;
	std::cout << con.ConvertStringToUrl(tester) << std::endl;

	tester = "this   isnt a tes ting      string";
	std::cout << tester << std::endl;
	std::cout << con.ConvertStringToUrl(tester) << std::endl;
}

// n solution is go through it and mark where a space was
// then in another loop recreate it as a string and return it