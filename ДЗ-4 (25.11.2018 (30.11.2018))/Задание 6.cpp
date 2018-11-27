//Напишите программу, находящую все простые числа Ченя, не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.

#include <iostream>

using namespace std;

bool prime(int p)
{
	int pp = 0;
	for (int ppp = 1; ppp <= p; ppp++)
	{
		if (p % ppp == 0)
			pp++;
	}
	if (pp == 2)
		return true;
	else
		return false;
}

bool composition(int l)
{
	for (int o = 2; o < l; o++)
	{
		for (int j = 2; j < l; j++)
		{
			if (((prime(o)) && (prime(j))) && (o * j == l))
				return true;
			else
				return false;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (prime(i))
		{
			if ((prime(i + 2)) || (composition(i + 2)))
				cout << i << endl;
		}
	}
	return 0;
}