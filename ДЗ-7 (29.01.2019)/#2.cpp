/* –еализуйте структуру данных циклический массив пар целых чисел.
÷иклический массив размера N - массив, в котором за последним элементом (N-1) снова идет первый (0) и так далее. ¬ этой задаче необходимо использовать структуру pair из STL (http://www.cplusplus.com/reference/utility/pair/pair/).
15 баллов
—тандартные дл€ массива (array) пол€ и методы. 
15 баллов
—двиг всех элементов массива на k позиций влево по циклу, работающий за O(1). 
k - целое число.
ѕример сдвига на 3 позиции влево
(1,2,3,4,5,6,7,8,9) -> (4,5,6,7,8,9,1,2,3)
 омментарий: в задаче должны быть реализованы стандартные пол€ и методы, но никто не запрещает добавл€ть другие или как-то преобразовывать данные. */

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