//Напишите программу, вычисляющую произведение цифр целого числа, чётность которых совпадает с чётностью последней цифры.

#include <iostream>

using namespace std;

int S = 1;

int even(int q)
{
	for (int i = 1; q > 0; q /= 10)
	{
		if (q % 10 % 2 == 0)
			S *= q % 10;
	}
	cout << S;
	return 0;
}

int odd(int w)
{
	for (int i = 1; w > 0; w /= 10)
	{
		if (w % 10 % 2 != 0)
			S *= w % 10;
	}
	cout << S;
	return 0;
}

int main()
{
	int b;
	cin >> b;
	if (b % 10 % 2 == 0)
		even(b);
	else
		odd(b);
	return 0;
}