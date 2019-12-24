// ivan22.4.cpp : Дан текстовый файл. Заменить в нем все подряд идущие пробелы на один пробел.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fromFile("file.txt");

	string text;

	while (!fromFile.eof())
	{
		getline(fromFile, text);
	}
	fromFile.close();

	ofstream toFile("file.txt");

	for (int i = 0; i < text.size(); i++) 
	{
		if (text[i] != ' ' || text[i] == ' ' && text[i - 1] != ' ') 
		{
			toFile << text[i];
		}
	}

	return 0;
}