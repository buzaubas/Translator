#pragma once
#include <string>
#include <iostream>

class Word
{
private:
	/*char* eng;
	char* rus;*/
	std::string eng;
	std::string rus;
public:
	Word();
	Word(const char* str);
	std::string getEng();
	std::string getRus();
	void showWords();
};

