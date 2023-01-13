#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string words[13];

	for (int i = 0; i < 13; i++)
	{
		cout << "hinOld[a," << i + 1 << ": ";
		cin >> words[i];
	}

	for (int i = 10; i >= 0; i--)
	{
		cout << words[i] << " ";
	}
}