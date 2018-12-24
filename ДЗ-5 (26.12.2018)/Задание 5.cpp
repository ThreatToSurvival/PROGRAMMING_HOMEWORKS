//Реализуйте решение непрерывной задачи о рюкзаке

#include <iostream>

using namespace std;

int main()
{
	double n, f, c, x[f], m[f], M, s = 0;               /*m - масса предмета, c - стоимость предмета, M - макс. масса, удерживающаяся в рюкзаке, s - сумма масс уже положенных предметов;
									                 x[f] - отношение стоимости предмета к его массе (приоритетные предметы - с наибольшим значением данного отношения) */
	cin >> n >> M;
	for (f = 0; f < n; f++)
	{
		cin >> m[f];
		cin >> c;
		x[f] = c / m;
	}
	for (int i = 0; i < n; i++)
	{
		int max = i;
		for (int j = i; j < n; j++)
		{
			if (x[j] > x[max])
				max = j;
		}
		int temp;
		temp = x[i];
		x[i] = x[max];
		x[max] = temp;
		if (s <= M)
		{
			s += m[max];
			cout << temp;
		}
		for (double o = max; o < n; o++)
			x[o] = x[o + 1];
		n--;
	}
	return 0;
}