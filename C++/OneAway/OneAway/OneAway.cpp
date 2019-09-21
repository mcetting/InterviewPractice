// OneAway.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
There are three types of edits that can be done to a string insert, remove, replace. given two strings tell if its 1 edit away from the other.
*/

// adding a file like this makes that files classes part of this files scope
#include "pch.h"
#include "StringChecker.h"

// adds functions that are from outside of scope
#include <iostream>

void TestProgram(std::string & root_str, std::string & str) {
	StringChecker checker;
	if (checker.CheckOneAway(root_str, str)) {
		std::cout << "Its one edit away: " << root_str << " -> " << str << std::endl;
	}
	else {
		std::cout << "Its not one edit away: " << root_str << " -> " << str << std::endl;
	}
}

int main()
{
	std::string root_str = "pale";
	std::string str2     = "ple";
	std::string str3     = "pales";
	std::string str4     = "pole";
	std::string str5     = "pale";

	std::string str6 = "job";
	std::string str7 = "paleeee";
	std::string str8 = "asfadg";

	TestProgram(root_str, str2);
	TestProgram(root_str, str3);
	TestProgram(root_str, str4);
	TestProgram(root_str, str5);

	TestProgram(root_str, str6);
	TestProgram(root_str, str7);
	TestProgram(root_str, str8);
}

// check the size of the strings then replace or change
// remember we are only checking and dont actually have to change anything
