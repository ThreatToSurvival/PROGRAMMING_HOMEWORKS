/* »меетс€ набор данных, состо€щий из пар положительных целых чисел.
Ќеобходимо выбрать из каждой пары ровно одно число так, чтобы сумма всех
выбранных чисел не делилась на 3 и при этом была максимально возможной.
≈сли получить требуемую сумму невозможно, в качестве ответа нужно выдать 0.
Ќапишите программу дл€ решени€ этой задачи. */

#include <iostream>

using namespace std;

void vicarious(int n)
{
	cout << n;
}

int main()
{
	int N, S = 0;
	cin >> N;
	int F[N], B[N];
	for (int i = 1; i <= N; i++)
	{
		cin >> F[i] >> B[i];
		if ((F[i] < 0) || (B[i] < 0))
		{
			break;
			cout << "All numbers must be positive";
		}
	}
	for (int i = 1; i <= N; i++)
	{
		if (F[i] > B[i])
			S += F[i];
		else
			S += B[i];
	}
	if (S / 3 != 0)
	{
		for (int i = 1; i <= N; i++)
		{
			if F[i] > B[i]
				cout << F[i] << endl;
			else
				cout << B[i] << endl;
		}
	}
	else
		vicarious(N);
	return 0;
}