#include <iostream>
using namespace std;
class Node
{
public:
	Node(int val);
	~Node();
	int value;
	Node* next;
};
Node::Node(int val) : value(val), next(nullptr)
{
	//cout << " add Node" << endl;
}
Node::~Node()
{
	//cout << " delete Node" << endl;
}
class List
{
public:
	List();
	//~List();
	void push_front(int value);
	bool pop_front(int &value);
	int size();
private:
	Node* head;
};
List::List() : head(nullptr)
{
}
int List::size()
{
	Node* curr = head;
	int size = 0;
	while (curr != nullptr)
	{
		size++;
		curr = curr->next;
		
	}
	delete curr;
	return size;
}
void List::push_front(int value)
{
	Node* new_head = new Node(value);
	new_head->next = head;
	head = new_head;
}
bool List::pop_front(int &value)
{
	if (head != nullptr)
	{
		Node* popped = head;
		head = popped->next;
		value = popped->value;
		delete popped;
		return true;
	}
	return false;
}
//List::~List()
//{
//	while (head != nullptr)
//	{
//		Node* deleted = head;
//		head = head->next;
//		delete deleted;
//	}
//}

// ...
int main()
{
	List list;
	for (int i = 0; i <= 5; i++)
	{
		list.push_front(i);
		cout << "pushed  node" << i << ", size  of list" << list.size() << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		int value=0;
		list.pop_front(value);
		cout << "popped node " << value << ", size  of list" << list.size() << endl;
	}
	return 0;
}
