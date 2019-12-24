// ivan22.3.cpp : Даны два текстовых файла. Добавить в начало первого файла содержимое второго файлакт позже, 
// выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file1("file1.txt");
	ifstream file2("file2.txt");
	string info, add;

	while (!file1.eof())
	{
		getline(file1, info);
	}
	file1.close();

	while (!file2.eof())
	{
		getline(file2, add);
	}
	file2.close();

	cout << info;

	ofstream file2o("file2.txt");

	file2o << info << " " << add;

	file2o.close();
	return 0;
}
