//
//  LinkedList.hpp
//  LinkedList
//
//  Created by Abiola Farounbi on 13/12/2023.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>


//typedef struct Node
//{
//
//    struct Node(int data)
//    {
//       this->data = data;
//       previous = NULL;
//       next = NULL;
//    };
//    
//   int data;
//   struct Node* previous;
//   struct Node* next;
//    
//
//} NODE;





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
   private:
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

#endif /* LinkedList_hpp */
