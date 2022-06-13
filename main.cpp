#include <iostream>
#include <fstream>
#include <string>
#include "Word.h"
#include "Dictionary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Word one("Dimash	Димаш");
	one.showWords();

	Dictionary mine(one);

	mine.search("Dimash");

	Dictionary book;
	ifstream ifs("dict.txt", ios::in);
	if (!ifs.bad())
	{
		char buffer[255];
		while (!ifs.eof())
		{
			ifs.getline(buffer, 255);
			book.add_word(Word(buffer));
		}
		ifs.close();
	}

	mine.search("'cause");

	system("pause");

	return 0;
}
