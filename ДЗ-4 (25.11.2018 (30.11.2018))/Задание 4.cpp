/* �������� ��������� ��������� ������ n ��������� �����.
��������� ������ �������� �� ����� ��� �� O(n*log log n) �����. */

#include <iostream>

using namespace std;

bool composite_detector(int c)
{
	int x = 0;
	for (int o = 1; o <= c; o++)
	{
		if (c % o == 0)
			x++;
	}
	if (x >= 3)
		return true;
	else
		return false;
}

int main()
{
	unsigned int n, fever = 0;
	cin >> n;
	for (int i = 1; fever < n; i++)
	{
		if (composite_detector(i))
		{
			cout << i << endl;
			fever++;
		}
	}
	return 0;
}

//��������� ���� �� �������� �� O(n*log log n) ��� ������ �����