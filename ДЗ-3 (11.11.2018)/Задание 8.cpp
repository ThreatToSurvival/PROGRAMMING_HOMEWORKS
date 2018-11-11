//Напишите две функции, находящие приближенное значение квадратного и кубического корня. В программе не должны использоваться математические библиотеки.

#include <iostream>

using namespace std;

int sqrt(double a)
{
	double b;
	for (double i = 0.000001; i <= a; i += 0.000001)
	{
		if (i*i == a);
		b = i;
		break;
	}
	cout << b << endl;
	return 0;
}
int cbrt(double c)
{
	double f;
	for (double n = 0.000001; n <= c; n += 0.000001)
	{
		if (n*n*n == c);
		f = n;
		break;
	}
	cout << f;
	return 0;
}
int main()
{
	int d, square, cube;
	cin >> d;
	square = d;
	cube = d;
	sqrt(square);
	cbrt(cube);
	return 0;
}