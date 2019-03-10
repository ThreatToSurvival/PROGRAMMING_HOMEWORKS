/* Реализуйте класс double_stack -  стек вещественных чисел переменного размера. Класс должен содержать конструктор, деструктор, методы push, pop */

#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next = NULL;
	Node* prev = NULL;
};

class double_stack
{
	Node* head;
    public:
		double_stack(): head(NULL) {}

		void push(int b)
		{
			Node* temp = new Node;
			temp->data = b;
			temp->next = head;
			head = temp;
		}

		int pop()
		{
			if (head == NULL)
			{
				cout << "Empty";
				return 0;
			}
			Node* temp = head;
			head = head->next;
			int b = temp->data;
			delete temp;
			return b;
		}

		~double_stack()
		{
			while (head != NULL)
			{
				Node* temp = head;
				head = head->next;
				delete temp;
			}
		}
};

int main()
{
	double_stack F;
	int >> n, D[n];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> D[i];
		F.push(D[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		cout << F.pop();
	}
	return 0;
}