/* �������� ���������� ���������, ��������� ��� �������� ������������������
����� N ����� ����� ������������ ������������ ���� �
���������, ������ ������� ����������� �� ����� ��� �� 5. ��������� �����
���� ������������� */

#include <iostream>

using namespace std;

int main()
{
	int N, x;
	cin >> N;
	int F[N];
	for (int i = 1; i <= N; i++)
	{
		cin >> F[i];
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 7; j <= N; j++)
		{
			if (F[j] - F[i] >= 5)
			{
				if ((F[i] * F[j - 1]) > (F[i] * F[j]))
					x = F[i] + F[j - 1];
				else
					x = F[i] + F[j];
			}
		}
	}
	cout << x;
	return 0;
}