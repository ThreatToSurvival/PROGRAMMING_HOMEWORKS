//Реализуйте решение дискретной задачи о рюкзаке

#include <iostream>

using namespace std;

int main()
{
	int n, W, w = 0;
	int c[n], m[n];
	double b[n];
	cin >> W >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i] >> c[i];
		b[i] = c[i] / m[i];
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (b[j] < b[j + 1])
			{
				int temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
				temp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = temp;
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
	for (int i = 0; w <= W; i++)
	{
		w += b[i];
		cout << "Предмет " << i + 1 << ": масса - " << m[i] << ", стоимость - " << c[i] << endl;
	}
	cout << "Суммарная масса предметов в рюкзаке - " << w;
	return 0;
}