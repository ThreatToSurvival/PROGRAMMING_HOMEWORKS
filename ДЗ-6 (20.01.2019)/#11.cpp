/* ��� ������, ���������� N ��������������� ����� �����. �������� �� ����� ��
������ ���������������� ���������, ������� ������� � ���� ������� ����������
���������, �������� ������� ����� ��� � ��� ���� ����������� ��������
��������������� ��������. */#include <iostream>using namespace std;int main(){	int N, c = 0;	cin >> N;	int F[N];	for (int i = 1; i <= N; i++)	{		cin >> F[i];		if (F[i] < 0)		{			break;			cout << "The array must include only non-negative numbers";		}	}	for (int i = 2; i <= N; i++)	{		if (F[i] / F[i - 1] < 2)			c++;	}	cout << c;	return 0;}