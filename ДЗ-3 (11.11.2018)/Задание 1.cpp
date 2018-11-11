//Напишите программу, вычисляющую сумму нечетных цифр целого числа.

#include <iostream>

using namespace std;

int main()
{
	int b, S = 0;
	cin >> b;
	b = abs(b);
	while (b > 0)
	{
		if ((b % 10) % 2 != 0)
			S += b % 10;
		b /= 10;
	}
	cout << S;
	return 0;
}