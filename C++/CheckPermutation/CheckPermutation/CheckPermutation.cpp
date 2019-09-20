// given two strings write a method to devide if one is a permutation of the other

// two solutions
// first sort both and compare they should be equal

// second make array of ascii values from one string and subtract the other
// if its not all 0000000 and it goes negative then your not equal



#include "pch.h"
#include "permchk.h"
#include <iostream>


int main(int argc, char* args[])
{
	if (argc < 3) {
		std::cout << "Not enough command line arguments" << std::endl;
		return 0;
	}

	// store the strings
	std::string str1 = args[1];
	std::string str2 = args[2];

	if (str1.length() != str2.length()) {
		std::cout << "Strings are not equal, cannot compare." << std::endl;
		return 0;
	}

	// make the checker object
	permchk checker;

	if (checker.SolutionOne(str1, str2)) {
		std::cout << "Solution one: permutation of the other" << std::endl;
	}
	if (checker.SolutionTwo(str1, str2)) {
		std::cout << "Solution two: permutation of the other" << std::endl;
	}
}
// this ones in the book
/*
The idea for the second one is to make an array of size 128 for all ascii values assolsiated with the characters
the iterate on the index ascii

go through the second string deiterate
if anything is less than zero then they are not permutations
*/