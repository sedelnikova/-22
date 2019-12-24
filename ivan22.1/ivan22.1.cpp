// ivan22.1.cpp : 1. Дан символьный файл, содержащий по крайней мере один символ пробела. 
// Удалить все его элементы, расположенные перед первым символом пробела, включая и этот пробел.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fromFile("labrab.txt");

	string text;

	while (!fromFile.eof()) 
	{
		getline(fromFile, text);
	}

	fromFile.close();

	ofstream toFile("labrab.txt");

	for (int i = text.find(' ') + 1; i < text.size(); i++) 
	{
		toFile << text[i];
	}

	return 0;
}