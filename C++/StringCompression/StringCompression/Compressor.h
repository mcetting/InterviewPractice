#pragma once
#include <string>
#include <unordered_map>
class Compressor
{
public:
	Compressor();
	~Compressor();

	std::string CompressString(const std::string & str, void(*ptr)(std::string & str));
};

