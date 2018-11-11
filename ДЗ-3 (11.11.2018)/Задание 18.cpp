//Напишите логическую функцию, проверяющую, является строка палиндромом.Можно считать, что строка состоит только из букв латиницы.

#include <iostream>
#include <string.h>

using namespace std;

bool palindrome(string line)
{
	int b;
	b = line.length();
	for (int i = 0; i < b / 2; i++)
	{
		if (line[i] != line[b - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string line;
	cin >> line;
	if (palindrome(line))
		cout << "Palindrome";
	else
		cout << "Not a palindrome";
	return 0;
}