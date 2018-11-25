//Напишите программу, находящую все простые числа Софи Жермен, не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.

#include <iostream>

using namespace std;

bool prime_detector(unsigned int a)
{
	int m = 0;
	for (int o = 1; o <= a; o++)
	{
		if (a % o == 0)
			m++;
	}
	if (m == 2)
		return true;
	else
		return false;
}

int main()
{
	unsigned int n, metallica;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		metallica = 2 * i + 1;
		if (prime_detector(i) && prime_detector(metallica))
			cout << i << endl;
	}
	return 0;
}

//Программа пока не работает за O(n*log log n) шагов