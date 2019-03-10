/* ���������� ��������� ������ ����������� ������ ��� ����� �����.
����������� ������ ������� N - ������, � ������� �� ��������� ��������� (N-1) ����� ���� ������ (0) � ��� �����. � ���� ������ ���������� ������������ ��������� pair �� STL (http://www.cplusplus.com/reference/utility/pair/pair/).
15 ������
����������� ��� ������� (array) ���� � ������. 
15 ������
����� ���� ��������� ������� �� k ������� ����� �� �����, ���������� �� O(1). 
k - ����� �����.
������ ������ �� 3 ������� �����
(1,2,3,4,5,6,7,8,9) -> (4,5,6,7,8,9,1,2,3)
�����������: � ������ ������ ���� ����������� ����������� ���� � ������, �� ����� �� ��������� ��������� ������ ��� ���-�� ��������������� ������. */

#include <iostream>
#include <utility>

using namespace std;

class Cycle
{
public:
	pair <int, int>* data;
	int B = 0;
	int arraySize;
	Cycle(int N)
	{
		arraySize = N;
		data = new pair <int, int>[N];
	};
	Cycle(Cycle& A)
	{
		arraySize = A.arraySize;
		data = A.data;
	};
	~Cycle()
	{
		delete[] data;
	};
	pair <int, int> &operator[](int i)
	{
		while (i >= arraySize)
		{
			i -= arraySize;
		}
		return data[i];
	};
	void input()
	{
		int j, a, b;
		for (int i = B; i < arraySize + B; i++)
		{
			j = i;
			while (j >= arraySize)
				j -= arraySize;
			cin >> a >> b;
			data[j] = make_pair(a, b);
		}
	};
	void output()
	{
		int j;
		for (int i = B; i < arraySize + B; i++)
		{
			j = i;
			while (j >= arraySize)
				j -= arraySize;
			cout << data[j].first << " " << data[j].second;
		}
	};
	Move(int n)
	{
		I += n;
	}
};

int main()
{
	int D, E;
	cin >> D;
	Cycle A(D);
	A.input();
	A.output();
	cin >> E;
	A.Move(E);
	A.output();
}