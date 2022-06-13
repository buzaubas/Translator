#pragma once
#include <vector>
#include <iostream>
#include "Word.h"
class Dictionary
{
private:
	std::vector<Word> dict;
public:
	Dictionary();
	Dictionary(Word str);
	void add_word(Word buf);
	void search(const char* str);
};

