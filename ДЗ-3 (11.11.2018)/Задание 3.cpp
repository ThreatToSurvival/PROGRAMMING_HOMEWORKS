#include <iostream>
using namespace std;

int main()
{
	int n, k, C, i, B;
	//B = n - k
	int N = 1;
	int K = 1;
	cin >> n;
	cin >> k;
	if (k < n)
	{
		for (i = 1; i <= n; i++)
		{
			N *= i;
		}
		for (i = 1; i <= k; i++)
		{
			K *= i;
		}
		for (i = 1; i <= n - k; i++0)
		{
			B *= i;
		}
		C = N / (K * B);
		cout << C;
	}
	else
		cout << "Впрограмме нельзя использовать числа, превышающие итоговое значение";
	return 0;
}