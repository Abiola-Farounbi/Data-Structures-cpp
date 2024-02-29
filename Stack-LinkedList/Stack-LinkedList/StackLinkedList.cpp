//
//  StackLinkedList.cpp
//  Stack-LinkedList
//
//  Created by Abiola Farounbi on 28/02/2024.
//

#include "StackLinkedList.hpp"

//They are empty because it has already been declared in the LinkedList class
StackLinkedList::StackLinkedList()
{
}
StackLinkedList::~StackLinkedList()
{
}


void StackLinkedList::push(int x)
{
   appendNode(x);
}

// The back of the linkedList is the top of the stack.
int StackLinkedList::pop()
{
   if(isEmpty())
   {
       return -1;
   }
   int retVal = back->data;
   NODE* temp = back;
   if(back->previous == NULL)
   {
back = NULL;
     front = NULL;
   }
else {
      back = back->previous;
     back->next = NULL;
   }
   delete temp;
   return retVal;
}


bool StackLinkedList::isEmpty()
{
   if(front == NULL)
   {
      return true;
   }
else {
      return false;
   }
}

