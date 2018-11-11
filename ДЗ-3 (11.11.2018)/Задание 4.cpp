//Напишите программу, находящую сумму простых элементов массива.

#include <iostream>
#include <vector>

using namespace std;

bool prime_detector(int d)
{
	int n = 0;
	for (int m = 1; m <= d; m++)
	{
		if (d % m == 0)
			n++;
	}
	if (n == 2)
		return true;
	else
		return false;
}

int main()
{
	int b, S = 0;
	cin >> b;
	vector <int> F(b);
	for (int i = 1; i <= b; i++)
	{
		cin >> F[i];
		if (prime_detector(F[i]))
			S += F[i];
	}
	cout << S;
	return 0;
}