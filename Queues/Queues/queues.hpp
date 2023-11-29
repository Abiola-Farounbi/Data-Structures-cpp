//
//  queue.hpp
//  Queues
//
//  Created by Abiola Farounbi on 27/11/2023.
//

#ifndef queue_hpp
#define queue_hpp

#include <stdio.h>

#define DEFAULT_SIZE 8

class Queue{
private:
    int size;
    int front;
    int back;
    int *values;
    
public:
    Queue(int size = DEFAULT_SIZE);
    virtual ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int);
    int dequeue();
};

#endif /* queue_hpp */

