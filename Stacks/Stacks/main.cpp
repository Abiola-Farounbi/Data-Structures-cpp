//
//  main.cpp
//  Stacks
//
//  Created by Abiola Farounbi on 10/12/2023.
//

#include <stdio.h>
#include <iostream>
#include "stack.hpp"

using namespace std;

int main() {

    Stack *stack = new Stack(10);
    stack->push(10);
    stack->push(20);
    stack->push(30);
    for(int i=0; i<3; i++){
        cout << stack->pop() << endl;
    }
    cout << stack->sizeLength() << endl;
    return 0;
}
