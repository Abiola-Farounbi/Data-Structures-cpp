//
//  main.cpp
//  Queues
//
//  Created by Abiola Farounbi on 27/11/2023.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#include "queues.hpp"


int main(){
    
    Queue *queue = new Queue(8);
    queue->enqueue(10);
    queue->enqueue(40);
    queue->enqueue(50);
    
    
    for(int i=0; i<3; i++){
        cout << queue->dequeue() << endl;
    }
    
    return 0;
}
