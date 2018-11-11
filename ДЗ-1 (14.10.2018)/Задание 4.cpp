/*Напишите программу находящую в массиве сумму элементов делящихся либо
на 72 либо на 27(не вместе).
*/

#include <iostream>
#include <vector>
using namespace std;

int main()

{
	int N, S, i;
	S = 0;
	cin >> N;
	vector <int> a(N);
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
		if ((a[i] % 72 == 0) && (a[i] % 27 != 0))
			S += a[i];
		else
			if ((a[i] % 27 == 0) && (a[i] % 72 != 0))
				S += a[i];
	}
	cout << "Сумма таких элементов - " << S;
	return 0;
}