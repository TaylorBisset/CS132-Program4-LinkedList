// main.cpp

/*
 Name:          Taylor Bisset
 Section:       A
 Program Name:  CS132-Program4-LinkedList

 Description:   This program implements a sorted doubly linked list to manage strings from the MYString class. 
                It ensures alphabetical comparisons, and unique words are stored. 
                The program includes a copy constructor, assignment operator, 
                and various member functions to manipulate the linked list. 
                The main program reads data from input files, performs operations on linked lists, 
                and writes results to output files. 
                Additionally, a changer function inserts "ZIP" and "ZAP" into the lists.

Repo:           https://github.com/TaylorBisset/CS132-Program4-LinkedList
*/

#include <iostream>
#include "double_linked_list.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
}

/*
Main Requirements:  (The requirement for your main)
create 4 of objects of your DLL class ( list1, list2, modList1, modList2 ) modList stands for modified list
read all of the data from file1 and insert it into list1 (file1: infile1.txt Download infile1.txt)
read all of the data from file2 and insert it into list2 (file2: infile2.txt Download infile2.txt)
cout the size of the 4 lists with explaining text (what size goes with which list)


modList1 = list1
modList2 = list2
cout the size of the 4 lists with explaining text

remove from modList1 all of the strings stored in list2
remove from modList2 all of the strings stored in list1
cout the size of the 4 lists with explaining text

call changer function passing as an argument modList1
call changer function passing as an argument modList2
cout the size of the 4 lists with explaining text

cout the createdCount from the MYString with describing text
cout the currentCount from the MYString with describing text

output modList1 to outfile1.txt with a space between each string
output modList2 to outfile2.txt with a space between each string
*/

/*
Programing Suggestion:
These are some guidelines on how to start writing your program. write and test it a little bit at a time.

First add and test the new functions for the MYString class
Write the Node class
Start the DLL class with a constructor and the << function (so you can test the contents of your list)
Write and test a simple insert function without worrying about inserting in the right place 
(for example pushBack which always insert at the back of the list).  
This function can be used by your copy constructor and = operator
Add a new insert function so that it now inserts in the right place
And so on.....

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

Table contains the members of the Node class
Node Class:
Member Data:

+ data : MYString
+ next : Node *
+ prev : Node *

Member Functions : return type                      Description

Node( )                                             constructor
Node(MYString str)                                  constructor with initialization data

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Table contains the members of the DoubleLinkedList class
DoubleLinkedList Class:
DoubleLinkedList Class:

Member Data:
head  : Node *
tail  : Node *
it    : mutable Node * { used as the "iterator" to move through the list by using next( ), resetIteration( ), and hasMore( ) }
count : int

DoubleLinkedList( )                                 default constructor

DoubleLinkedList(const DoubleLinkedList& dll)       copy constructor

= operator( const DoubleLinkedList& dll)            assignment operator

~ DoubleLinkedList( )                               destructor

<< operator                                         output the data to the ostream (separate each string with a blank space)

insert( const MYString& str) : bool                 insert the string argument into the list in the proper place (smallest to largest). 
                                                    Do not insert the string if the DLL already has a string of that value. 
                                                    Return true if the string was inserted, otherwise return false

remove( const MYString & str) : bool                if the string argument is found in the DLL remove it from the DLL object. 
                                                    Return true if a string was removed, otherwise return false.

getCount( ) : int                                   returns the number of strings that are stored in the DLL.

These following functions are needed for your main to be able to get the MYStrings from the list 
so that you could remove them from the other list as required.  
They can make moving though your List very easy....and could be used in the << operator, = op, and copy constructor.

Make the it member variable mutable (place key word mutable before the data type in the variable declaration), 
which means it can change, and not effect the const status of an instance or member function.

```
Example using the iterator member functions:
// assuming DoubleLinkedList list has been created and filled with data
list.resetIteration( );     // puts iterator at head of list
while( list.hasMore( ) ){   // is there another word in the list
  cout << list.next( );     // get the word and advance the iterator
}
```

resetIteration( )                                   Internal to your object, 
                                                    points a member pointer to the first node if there is one, 
                                                    otherwise points to nullptr

next( ) : MYString                                  returns the string where your pointer is pointing 
                                                    and then moves it to the next thing (node or nullptr)

hasMore( ) : bool                                   returns true if the it member pointer is pointing to a node, 
                                                    otherwise it returns false

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

Table contains information about members of the MyString class
MYString Class:  Changes
Programming Note: Write and test one or two functions at a time
All of these functions are doing alphabetic comparisons 
(comparing your strings one char at a time based on their alphabetic value by temporarily getting 
and comparing their character in lower (or upper) case). "cat" == "Cat" would be true


Member Functions that potentially need to be changed        Description

= = operator : bool                                         checks to see if the two strings are equal (again “abc” would be equal to “AbC”)

< operator : bool                                           checks to see if the lvalue is less than the rvalue

> operator : bool                                           checks to see if the lvalue is greater than the rvalue

! = operator : bool                                         OPTIONAL: check to see if the two string are not equal

>> operator                                                 Change your >> operator so that it will remove one trailing punctuation mark 
                                                            ( this is the only punctuation that you should remove.  
                                                            Example "plan." would become "plan" ).   
                                                            In cctype library there is a function called ispunct(char ch) 
                                                            that returns 0 if ch is not a punctuation or non-zero if it is a punctuation.

*/
