// node.h

#ifndef NODE_H
#define NODE_H

#include "TBString.h"

class Node 
{
public:
    Node() 
        : 
        next(nullptr), prev(nullptr) {}

    Node(const TBString& data) 
        : 
        data(data), next(nullptr), prev(nullptr) {}
    
    TBString data;
    Node* next;
    Node* prev;
};

#endif // !NODE_H
