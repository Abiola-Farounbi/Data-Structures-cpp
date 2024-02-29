//
//  main.cpp
//  LinkedList
//
//  Created by Abiola Farounbi on 11/12/2023.
//

#include <iostream>
#include "LinkedList.hpp"
#include <stack>

int main() {
    
    LinkedList * list = new LinkedList();
    list->appendNode(10);
    list->appendNode(20);
    list->appendNode(30);
    list->displayNodes();
    list->displayNodesReverse();
    
    delete list;

    
    return 0;
}
