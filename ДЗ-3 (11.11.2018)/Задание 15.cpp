/*�������� ���������, ����������� ���������� ��������� ������ �� ����������. �� �������� ��������� ������ ������ ���������� ��������, �� �������� � ��� - �� ������� �������, � ��� ����� - �� ����, � ������� ������ ������ �������. ������ ��� ������� ������� 5�5:
1  2  3  4  5
2  3  4  5  4
3  4  5  4  3
4  5  4  3  2
5  4  3  2  1
*/

#include <iostream>

using namespace std;

void square(int b)
{
	int F[b][b];
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (j + i - 1 < b)
				cout << j + i - 1 << "  ";
			else
			{
				cout << b << "  ";
				if (j < b)
				{
					for (int k = b - 1; j < b; k--)
					{
						cout << k << "  ";
						j++;
					}
					cout << endl;
				}
				else
					cout << endl;
			}
		}
	}
}
int main()
{
	int b;
	cin >> b;
	square(b);
	return 0;
}