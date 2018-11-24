/* Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k.
В комментариях напишите, почему перебор - эффективный */

#include <iostream>

using namespace std;

void IronMaiden (int b, int p)
{
	int y, c = 1;
	y = b;
	while (b > 0)
	{
		if (b % 10 != 0)
		{
			c *= b % 10;
			b /= 10;
		}
		else
			b /= 10;
	}
	if (c > p)
		cout << y << " ";
}

int main()
{
	int n, k;
	int F[n];
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> F[i];
		IronMaiden(F[i], k);
	}
	return 0;
}

//Перебор пока не эффективен