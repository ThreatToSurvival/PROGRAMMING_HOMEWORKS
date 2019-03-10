/* Реализуйте класс char_deque -  дек символов чисел переменного размера. Класс должен содержать конструктор, деструктор, методы push_front, push_back, pop_front, pop_back */

#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next = NULL;
	Node* prev = NULL;
};

class char_deque
{
	Node* head;
	Node* tail;
    public:
		char_deque(): head(NULL) {}

		void push_front(char b)
		{
			if (head == NULL)
			{
				head = new Node;
				tail = head;
				head->data = b;
			}
			head->prev = new Node;
			head->prev->next = head;
			head = head->prev;
			head->data = b;
		}

		void push_back(char b)
		{
			if (head == NULL)
			{
				head = new Node;
				tail = head;
				head->data = b;
			}
			tail->next = new Node;
			tail->next->prev = tail;
			tail = tail->next;
			tail->data = b;
		}

		char pop_front()
		{
			if (head == NULL)
			{
				cout << "Empty";
				return 0;
			}
			Node* temp = head;
			head = head->next;
			char b = temp->data;
			delete temp;
			return b;
		}

		char pop_back()
		{
			if (head == NULL)
			{
				cout << "Empty";
				return 0;
			}
			Node* temp = tail;
			tail = tail->prev;
			char b = temp->data;
			delete temp;
			return b;
		}

		~char_deque()
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
	char_deque F;
	char z, x
	cin >> z, x;
	F.push_front(z);
	cout << F.pop_front();
	F.push_back(x);
	cout << F.pop_back();
	return 0;
}