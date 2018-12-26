//Реализуйте вычисление значения полинома в точке посредством схемы Горнера

#include <iostream>

using namespace std;

int main()
{
	unsigned long long int d, c;
	long long int* f = new long long int[d + 1];
	cin >> d >> c;
	for (unsigned long long int i = 0; i < d + 1; i++)
		cin >> f[i];
	long long int b = f[d];
	for (unsigned long long int i = d - 1; i >= 1; i--)
		b = f[i] + b * c;
	cout << f[0] + b * c;
	return 0;
}