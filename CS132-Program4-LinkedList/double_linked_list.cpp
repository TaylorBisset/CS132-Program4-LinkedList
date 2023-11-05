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
	return *this;
}

// Destructor
DoubleLinkedList::~DoubleLinkedList() 
{
	
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
	
}

TBString DoubleLinkedList::next() 
{
	return TBString();
}

bool DoubleLinkedList::hasMore() const 
{
	return false;
}
