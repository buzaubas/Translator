#include "Word.h"
#include <string>
#include <iostream>

Word::Word()
{
}

Word::Word(const char* str)
{
	/*size_t z{ 0 };
	size_t size1{ 0 };
	while (str[z] != '\t')
	{
		size1++;
		z++;
	}
	z++;
	size_t size2{ 0 };
	while (str[z] != '\n')
	{
		size2++;
		z++;
	}




	this->eng = new char[size1];
	this->rus = new char[size2];
	z = 0;
	for (auto i = 0; i < size1; i++)
	{
		if (str[z] == '\t')
		{
			break;
		}
		else
		{
			this->eng[i] = str[z];
			z++;
		}
	}
	z++;
	for (auto i = 0; i < size2; i++)
	{
		if (str[z] == '\n')
		{
			break;
		}
		else
		{
			this->rus[i] = str[z];
			z++;
		}
	}*/

	std::string word(str);
	auto len = word.find_first_of('\t');
	this->eng = word.substr(0, len);
	this->rus = word.substr(len + 1);
}

std::string Word::getEng()
{
	return this->eng;
}

std::string Word::getRus()
{
	return this->rus;
}

void Word::showWords()
{
	std::cout << this->eng << std::endl;
	std::cout << this->rus << std::endl;
}
