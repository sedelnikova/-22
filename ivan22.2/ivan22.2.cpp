// ivan22.2.cpp : 2. Дано имя файла и целые положительные числа N и K. 
// Создать текстовый файл с указанным именем и записать в него N строк, каждая из которых состоит из K символов «*» (звездочка).

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите, пожалуйста, название файла и положительные числа N и K ...";

	string path;
	int n, k, i, j;

	cin >> path >> n >> k;

	ofstream file(path);

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < k; j++) 
		{
			file << "*";
		}

		file << endl;
	}

	file.close();
	return 0;
}