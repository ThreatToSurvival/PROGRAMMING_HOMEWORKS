//Напишите программу, выписывающую все элементы последовательности, имеющие ровно семь делителей

#include <iostream>

using namespace std;

int main()
{
	int b, a, d = 0;
	cin >> b;
	for (int i = 1; i <= b; i++)
	{
		cin >> a;
		for (int m = 1; m <= a; m++)
		{
			if (a % m == 0)
				d++;

		}
		if (d == 7)
			cout << a << " ";
		d = 0;
	}
	return 0;
}