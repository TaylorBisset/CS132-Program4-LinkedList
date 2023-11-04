// main.cpp

#include <iostream>
#include "TBString.h"

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
