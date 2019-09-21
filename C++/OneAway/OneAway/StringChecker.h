#pragma once
#include <string>
class StringChecker
{
public:
	StringChecker();
	~StringChecker();

	bool CheckOneAway(std::string& root, std::string& str);

private:
	bool ReplaceCheck(std::string & root, std::string & str);
	bool EditCheck(std::string & root, std::string & str);
};

