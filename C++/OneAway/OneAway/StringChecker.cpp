#include "pch.h"
#include "StringChecker.h"


StringChecker::StringChecker()
{
}


StringChecker::~StringChecker()
{
}

bool StringChecker::CheckOneAway(std::string & root, std::string & str)
{
	// check if they are the same length
	if (root.length() == str.length()) 
	{
		return ReplaceCheck(root, str);
	}
	else if (root.length() + 1 == str.length())
	{
		return EditCheck(root, str);
	}
	else if (root.length() == str.length() + 1)
	{
		return EditCheck(str, root);
	}
	return false;
}

// finds the first offender then if it finds another returns false else true
bool StringChecker::ReplaceCheck(std::string & root, std::string & str)
{
	bool diff = false;
	for (unsigned int i = 0; root[i]; i++)
	{
		if (root[i] != str[i])
		{
			if(diff) return false;
			
			diff = true;
		}
	}
	return true;
}

// go through both strings and find first different element then look for a second
bool StringChecker::EditCheck(std::string & root, std::string & str)
{
	unsigned int index1 = 0;
	unsigned int index2 = 0;

	while (index1 < root.length() && index2 < str.length()) 
	{
		if (root[index1] != str[index2]) {
			// check if its the second time
			if (index1 != index2) return false;
			
			index2++;
		}
		else {
			index1++;
			index2++;
		}
	}
}
