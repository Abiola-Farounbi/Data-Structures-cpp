//
//  stack.hpp
//  Stacks
//
//  Created by Abiola Farounbi on 11/12/2023.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>

#define DEFAULT_SIZE 10
class Stack
{
  private:
     int size;
int top;
     int* values;
  public:
     Stack(int size = DEFAULT_SIZE);
     virtual ~Stack();
     bool isFull();
     bool isEmpty();
     void push(int);
     int pop();
};

#endif /* stack_hpp */
