//�������� ������� ����������� ���������� �����. ��������� ������ �������� �� ����� ��� �� O(n*log log n) �����.

#include <iostream>

using namespace std;

bool prime_detector(int a)
{
	int m = 0;
	for (int o = 1; o <= a; o++)
	{
		if (a % o == 0)
			m++;
	}
	if (m == 2)
		return true;
	else
		return false;
}

int primorial(int p)
{
	int b = 1;
	for (int i = 1; i <= p; i++)
		if (prime_detector(i))
		{
			b *= i;
		}
	cout << b;
	return 0;
}

int main()
{
	int f;
	cin >> f;
	primorial(f);
	return 0;
}

//��������� ���� �� �������� �� O(n*log log n) ��� ������ �����