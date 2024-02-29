//
//  StackLinkedList.hpp
//  Stack-LinkedList
//
//  Created by Abiola Farounbi on 28/02/2024.
//

#ifndef StackLinkedList_hpp
#define StackLinkedList_hpp

#include <stdio.h>
#include "LinkedList.h"

class StackLinkedList : public LinkedList
{
public:
     StackLinkedList();
     virtual ~StackLinkedList();
     void push(int);
     int pop();
     bool isEmpty();
};

#endif /* StackLinkedList_hpp */
