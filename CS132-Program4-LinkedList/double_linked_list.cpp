// double_linked_list.cpp

#include "double_linked_list.h"

// Default constructor
DoubleLinkedList::DoubleLinkedList()
	:
	head(nullptr), tail(nullptr), it(nullptr), count(0)
{

}

// Copy constructor
DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList& dll)
	:
	head(nullptr), tail(nullptr), it(nullptr), count(0)
{
	Node* current = dll.head;
	while (current)
	{
		insert(current->data);
		current = current->next;
	}
}

// Assignment operator
DoubleLinkedList& DoubleLinkedList::operator=(const DoubleLinkedList& dll)
{
	if (this == &dll)
	{
		return *this;
	}
	while (head != nullptr)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}

	Node* current = dll.head;
	while (current)
	{
		insert(current->data);
		current = current->next;
	}
	return *this;
}

// Destructor
DoubleLinkedList::~DoubleLinkedList()
{
	Node* current = head;
	while (current != nullptr)
	{
		Node* temp = current;
		current = current->next;
		delete temp;
	}
}

// Output operator
std::ostream& operator<<(std::ostream& outputStrm, const DoubleLinkedList& dll)
{
	return outputStrm;
}

// Insert a string into the list
bool DoubleLinkedList::insert(const TBString& str)
{
	return false;
}

// Remove a string from the list
bool DoubleLinkedList::remove(const TBString& str)
{
	return false;
}

// Get the number of strings stored in the list
int DoubleLinkedList::getCount() const
{
	return count;
}

void DoubleLinkedList::resetIteration()
{
	it = head;
}

TBString DoubleLinkedList::next()
{
	TBString str;
	if (it != nullptr) 
	{
		str = it->data;
		it = it->next;
	}
	return str;
}

bool DoubleLinkedList::hasMore() const
{
	return false;
}
