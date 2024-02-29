//
//  LinkedList.h
//  Stack-LinkedList
//
//  Created by Abiola Farounbi on 28/02/2024.
//

#ifndef LinkedList_h
#define LinkedList_h



class NODE
{
    public:
        NODE* previous;
        NODE* next;
        int data;
        NODE(int data)
        {
           this->data = data;
           previous = NULL;
           next = NULL;
        }
};

class LinkedList
{
   protected:
      NODE* front;
      NODE* back;
   public:
      LinkedList();
      ~LinkedList();
      void appendNode(int);
      void displayNodes();
      void displayNodesReverse();
      void destroyList();
};


#endif /* LinkedList_h */
