#include "Dictionary.h"

Dictionary::Dictionary()
{
}

Dictionary::Dictionary(Word buf)
{
	this->dict.push_back(buf);
}

void Dictionary::add_word(Word buf)
{
	this->dict.push_back(buf);
}

void Dictionary::search(const char* str)
{
	/*Word* iter = dict.begin();
	while (iter != dict.end())
	{
		if (*iter.getEng() == str)
		{

		}
		++iter;
	}*/
	std::string word(str);
	for (auto i = 0; i < dict.size(); i++)
	{
		if (dict[i].getEng() == word)
		{
			std::cout << dict[i].getRus() << std::endl;
			break;
		}
	}
}
