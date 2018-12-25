//Напишите программу, находящую k-ую порядковую статистику. Программа должна работать за время O(n) в среднем.

#include <iostream>

using namespace std;

int main()
{
	int n, k, temp, F[n];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> F[i];
	for (int o = 1; o <= n-1; o++)
	{
		for (int i = 2; i <= n; i++)
		{
			if (F[i] > F[i - 1])
			{
				temp = F[i - 1];
				F[i - 1] = F[i];
				F[i] = temp;
			}
		}
	}
	cin >> k;
	if (k <= n)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i == k)
				cout << F[i];
		}
	}
	return 0;
}