#include "pch.h"
#include <iostream>
#include <unordered_map>

bool CheckMap(std::unordered_map<char, int> map, char key) {
	// Key is not present 
	if (map.find(key) == map.end())
		return false;

	return true;
}

int main(int argc, char* args[])
{
	std::cout << "Program checks for unique characters in a string!" << std::endl;
	if (argc < 2) {
		std::cout << "No command line argument!" << std::endl;
		return 0;
	}
	std::cout << "Checking: "<< args[1] << std::endl;

	std::unordered_map<char, int> map;
	char* p = args[1];

	// up till here its (1)

	for (unsigned int i = 0; i < strlen(args[1]); ++i) {
		if (CheckMap(map, *(p + i)) == false) {
			std::pair<int, char> new_pair(*(p + i), 0);
			map.insert(new_pair);
		}
		else {
			// it was already in the dictionary
			std::cout << "Non unique letter detected!" << std::endl;
			return 0;
		}
	}
	std::cout << "The string has all unique elements!";

	return 0;
}
// worst case is (n)
// best case is  (2)
// all data allocated on the stack

// without an additional data structure i would have probably been around the same

// book solution uses an ascii table and a boolean array to check if its already taken