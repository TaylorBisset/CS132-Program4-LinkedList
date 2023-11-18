// main.cpp

/*
 Name:          Taylor Bisset
 Section:       A
 Program Name:  CS132-Program4-LinkedList

 Description:   Manages sorted doubly linked lists of strings. 
                Reads data from input files, manipulates lists, 
                and writes results to output files. 

Repo:           https://github.com/TaylorBisset/CS132-Program4-LinkedList
*/

#include <iostream>
#include <fstream>
#include "double_linked_list.h"

using namespace std;

void changer(DoubleLinkedList list);

int main()
{
    DoubleLinkedList list1;
    DoubleLinkedList list2;
    DoubleLinkedList modList1;
    DoubleLinkedList modList2;

    // read infile1
    ifstream infile1("infile1.txt");
    if (infile1.is_open()) 
    {
        TBString word;
        while (infile1 >> word) 
        {
            list1.insert(word);
        }
        infile1.close();
    }
    else 
    {
        cout << "Error opening infile1.txt" << endl;
    }

    // read infile2
    ifstream infile2("infile2.txt");
    if (infile2.is_open()) 
    {
        TBString word;
        while (infile2 >> word) 
        {
            list2.insert(word);
        }
        infile2.close();
    }
    else 
    {
        cout << "Error opening infile2.txt" << endl;
    }

    cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << endl << "- v - v - v - v - v - After reading files - v - v - v - v - v -" << endl << endl;
    
    modList1 = list1;
    modList2 = list2;

    // output sizes
    cout << "Size of list1: "    << list1.getCount() << endl;
    cout << "Size of list2: "    << list2.getCount() << endl;
    cout << endl;
    cout << "Size of modList1: " << modList1.getCount() << endl;
    cout << "Size of modList2: " << modList2.getCount() << endl;
    cout << endl;
    cout << "Created Count from TBString: " << TBString::getCreatedCount() << endl;
    cout << "Current Count from TBString: " << TBString::getCurrentCount() << endl;

    cout << endl << "- v - v - v - v - v - After removing from lists - v - v - v - v - v -" << endl << endl;
    // remove list1 strings from modList1
    TBString str1;
    modList1.resetIteration();
    while (modList1.hasMore()) 
    {
        str1 = modList1.next();
        if (list2.remove(str1)) 
        {
            modList1.remove(str1);
        }
    }

    // remove list2 strings from modList2
    TBString str2;
    modList2.resetIteration();
    while (modList2.hasMore()) 
    {
        str2 = modList2.next();
        if (list1.remove(str2)) 
        {
            modList2.remove(str2);
        }
    }

    cout << "Size of list1: "    << list1.getCount() << endl;
    cout << "Size of list2: "    << list2.getCount() << endl;
    cout << endl;
    cout << "Size of modList1: " << modList1.getCount() << endl;
    cout << "Size of modList2: " << modList2.getCount() << endl;
    cout << endl;
    cout << "Created Count from TBString: " << TBString::getCreatedCount() << endl;
    cout << "Current Count from TBString: " << TBString::getCurrentCount() << endl;

    cout << endl << "- v - v - v - v - v - After Changer function - v - v - v - v - v -" << endl << endl;

    changer(modList1);
    cout << "Inside changer function: size of modList1 is " << modList1.getCount() << endl;
    cout << endl;
    changer(modList2);
    cout << "Inside changer function: size of modList2 is " << modList2.getCount() << endl;
    cout << endl;
    cout << "Created Count from TBString: " << TBString::getCreatedCount() << endl;
    cout << "Current Count from TBString: " << TBString::getCurrentCount() << endl;
    
    cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

    ofstream outfile1("outfile1.txt");
    modList1.resetIteration();
    int wordCount = 0;

    while (modList1.hasMore())
    {
        
        outfile1 << modList1.next() << " ";
        wordCount++;

        if (wordCount % 10 == 0)
        {
            outfile1 << endl;
        }
    }
    outfile1.close();

    ofstream outfile2("outfile2.txt");
    modList2.resetIteration();
    wordCount = 0;

    while (modList2.hasMore())
    {
        
        outfile2 << modList2.next() << " ";
        wordCount++;

        if (wordCount % 10 == 0)
        {
            outfile2 << endl;
        }
    }
    outfile2.close();

    return 0;
}

void changer(DoubleLinkedList list)
{
    TBString zip("ZIP");
    TBString zap("ZAP");
    list.insert(zip);
    list.insert(zap);
    cout << "Inside changer function: size of list is " << list.getCount() << endl;
}

/*
OUTPUT:

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

- v - v - v - v - v - After reading files - v - v - v - v - v -

Size of list1: 1087
Size of list2: 1000

Size of modList1: 1087
Size of modList2: 1000

Created Count from TBString: 4176
Current Count from TBString: 4174

- v - v - v - v - v - After removing from lists - v - v - v - v - v -

Size of list1: 740
Size of list2: 653

Size of modList1: 740
Size of modList2: 653

Created Count from TBString: 6265
Current Count from TBString: 2788

- v - v - v - v - v - After Changer function - v - v - v - v - v -

Inside changer function: size of list is 742
Inside changer function: size of modList1 is 740

Inside changer function: size of list is 655
Inside changer function: size of modList2 is 653

Created Count from TBString: 7666
Current Count from TBString: 2788

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

*/

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

/*
Changer Function Requirements:
void changer( DLL list); // prototype for a non-member function (just hanging out with main)....
yes it is passing by value, so it can test your copy constructor
it will insert the words "ZIP" and "ZAP" into the list variable passed into this function
cout the size of the list after the insertions with explaining text
{something like: Inside changer function: size of list is 2345 }

Some numbers to verify your code:
As a guide, when you get done reading from infile1.txt, your list1 variable should contain 1104 MYStrings.
Your modList1 after removing all the strings from list2, should have 759 MYString still left.

Online Turn in:
All the file for the program, (main, list.h, list.cpp, mystring.h
and the part of the mystring.cpp that has the additional 3 functions.
Your output from the program should follow all of the program listings.
For the output, you should have the text that is sent to the screen,
and the text that is written to outfile1.txt and outfile2.txt (in that order)

Ways to lose points:
if your file does not contain the program header with a program description
your .h file should have a class description about what the class does
your code should also be consistently indented as talked about in class, and shown in the book
you can’t use global variables unless it is a const
you should use good variable names (descriptive, and start with lower case letter)
proper placement of { and } ( a } should not be placed at the end of a line of code)
no staple to keep your papers together (folding a corner or using a paper clip are not good enough)
Remember to submit all the needed files: main, .h files, .cpp files,
and then the output (console window, outfile1.txt, and then outfile2.txt).

Information if you are not using MYString (because you weren't able to finish it on program 3).
You need to write code to remove trailing punctuation from the string after it is read in.
The string class has a size function and can use [ ] so you can access the last char,
then you can use the ispunct function found in the cctype library, to test if the char is punctuation,
and if it is, then you can call pop_back member function of the string to remove the last char.

You will also need to modify your compareTo function to work with strings,
and when you are comparing the chars of the strings you should compare the lower case version of the chars
( you can do this with the tolower functions, which is also part of the cctype library).
So you compare a lowercase version of the char but you should leave the actual string unchanged in the comparison.

Does that make sense?   What questions do you have?

Header Comments (Program and Class):
 Comments are a way of documenting a program (explaining who did what and how).
 All programs for the rest of the course are required to have the following program header documentation
 (above main, and in any interface files (.h) ) and inline documentation to explain any tricky pieces of code.
*/
