#include "pch.h"
#include "permchk.h"



// n logn solution
bool permchk::SolutionOne(std::string& str1, std::string& str2)
{
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	return (str1 == str2) ? true : false;
}

/*The idea behind this one is to store the string value as an ascii integer
	then deincrement the second string
	if theres a element thats below zero then they are not a permutation

	goal make it (n) run time
*/
bool permchk::SolutionTwo(std::string & str1, std::string & str2)
{
	int ascii[128];
	for (int i = 0; i < 128; i++) ascii[i] = 0;

	for (unsigned int i = 0; i < str1.length(); i++)
	{
		ascii[str1[i]] ++;
	}
	for (unsigned int i = 0; i < str2.length(); i++)
	{
		ascii[str2[i]] --;

		if (ascii[str2[i]] != 0) return false;
	}
	return true;
}
