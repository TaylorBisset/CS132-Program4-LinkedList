// double_linked_list.cpp

#include "double_linked_list.h"

// Default constructor
DoubleLinkedList::DoubleLinkedList()
	:
	head(nullptr), tail(nullptr), it(nullptr), count(0)
{
	// Initialize your members here
}

// Copy constructor
DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList& dll) 
{
	// Implement the copy constructor here
}

// Assignment operator
DoubleLinkedList& DoubleLinkedList::operator=(const DoubleLinkedList& dll) 
{
	// Implement the assignment operator here
	return *this;
}

// Destructor
DoubleLinkedList::~DoubleLinkedList() 
{
	// Implement the destructor here
}

// Output operator
std::ostream& operator<<(std::ostream& outputStrm, const DoubleLinkedList& dll) 
{
	// Implement the output operator here
	return outputStrm;
}

// Insert a string into the list
bool DoubleLinkedList::insert(const TBString& str) 
{
	// Implement the insertion logic here
	return false; // Update this as needed
}

// Remove a string from the list
bool DoubleLinkedList::remove(const TBString& str) 
{
	// Implement the removal logic here
	return false; // Update this as needed
}

// Get the number of strings stored in the list
int DoubleLinkedList::getCount() const 
{
	return count;
}

// Iterator functions

void DoubleLinkedList::resetIteration() 
{
	// Implement the resetIteration function
}

TBString DoubleLinkedList::next() 
{
	// Implement the next function
	return TBString(); // Update this as needed
}

bool DoubleLinkedList::hasMore() const 
{
	// Implement the hasMore function
	return false; // Update this as needed
}
