// PalindromePermutation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// find outif the input is a permutation of a palindrome
// so for even letters we check if every letter is a even number
// for odd do the same but 1 letter should be left as 1 for center
// ignore whitespace and capitalization
#include "pch.h"
#include <iostream>
#include <string>
#include <unordered_map>

bool IsPermPal(std::string &str);

void TestProgram(std::string &str) {
	if (IsPermPal(str)) {
		std::cout << "This is a permutation of a palindrome!" << std::endl;
	}
	else {
		std::cout << "This is not a permutation of a palindrome!" << std::endl;
	}
}

int main()
{
	std::string teststr = "Tact Coa";
	std::cout << teststr << std::endl;

	TestProgram(teststr);

	teststr = "asds sdg";
	std::cout << teststr << std::endl;

	TestProgram(teststr);
}

// returns true if its a permutation of a palindrome
bool IsPermPal(std::string &str) {
	std::unordered_map<char, int> map;
	for (unsigned int i = 0; str[i]; i++)
	{
		std::unordered_map<char, int>::iterator itor = map.find(tolower(str[i]));
		if (itor == map.end()) 
		{
			if (str[i] != ' ')
			{
				std::pair<char, int> new_pair(tolower(str[i]), 1);
				map.insert(new_pair);
			}
		}
		else {
			map[tolower(str[i])]++; // might be making new pairs
		}
	}

	int odd_index = 0;
	for (std::pair<char, int> element : map)
	{
		if (element.second & 1) {
			odd_index++;
		}
		if (odd_index > 1) return false;
	}
	return true;
}