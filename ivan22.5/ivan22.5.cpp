// ivan22.5.cpp : 5. Дан текстовый файл. Найти количество абзацев в тексте, 
// если первая строка каждого абзаца начинается с 5 пробелов («красная строка»). Пустые строки между абзацами не учитывать.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fromFile("file.txt");

	string text;
	int k = 0;

	while (!fromFile.eof()) 
	{
		getline(fromFile, text);
		if (text.substr(0, 5) == "     ") 
		{
			k++;
		}
	}
	fromFile.close();

	cout << k << endl;

	return 0;
}