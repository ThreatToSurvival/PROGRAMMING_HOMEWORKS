//Напишите программу, заменяющую составные числа на их самые большие простые делители

#include <iostream>
#include <vector>

using namespace std;

bool composite_detector(int q)
{
	int z = 0;
	for (int a = 1; a <= q; a++)
	{
		if (q % a == 0)
			z++;
	}
	if (z != 2)
		return true;
	else
		return false;
}

int replacement(int w)
{
	int x;
	for (int s = 1; s <= w; s++)
	{
		if (w % s == 0)
		{
			if (composite_detector(s)) {}
			else
				x = s;
		}
	}
	cout << x << " ";
}

int main()
{
	int b;
	cin >> b;
	vector <int> F(b);
	for (int i = 1; i <= b; i++)
	{
		cin >> F[i];
		if (composite_detector(F[i]))
			replacement(F[i]);
		else
			cout << F[i] << " ";
	}
	return 0;
}