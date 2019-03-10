/* Реализуйте класс string_queue -  очередь строк. Класс должен содержать конструктор, деструктор, методы push, pop. */

#include <iostream>
#include <string>

using namespace std;

struct Node
{
	int data;
	Node* next = NULL;
	Node* prev = NULL;
};

class string_queue
{
	Node* head;
    public:
		string_queue(): head(NULL) {}

		void push(string b)
		{
			if (head == NULL)
			{
				head = new Node;
				head->data = b;
			}
			Node* temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new Node;
			temp->next->data = b;
		}

		string pop()
		{
			if (head == NULL)
			{
				cout << "Empty";
				return 0;
			}
			Node* temp = head;
			head = head->next;
			string b = head->data;
			delete temp;
			return b;
		}

		~string_queue()
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
	string_queue F;
	int >> n;
	string D[n];
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