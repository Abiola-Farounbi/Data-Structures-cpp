//
//  StackLinkedListDemo.cpp
//  Stack-LinkedList
//
//  Created by Abiola Farounbi on 28/02/2024.
//

#include <stdio.h>
#include <iostream>
#include "StackLinkedList.hpp"
using namespace std;

int main(){
    
   StackLinkedList* stack = new StackLinkedList();
   stack->push(10);
   stack->push(20);
   stack->push(30);
   stack->displayNodes();
   cout << stack->pop() << endl;
   delete stack;
}
