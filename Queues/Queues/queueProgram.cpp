//
//  queueProgram.cpp
//  Queues
//
//  Created by Abiola Farounbi on 29/11/2023.
//

#include <stdio.h>

#include "queues.hpp"

Queue::Queue(int size){
    this->size = size;
    values = new int[size];
    front = 0;
    back = 0;
}

Queue::~Queue(){
    delete [] values;
}

bool Queue::isFull(){
    if((back+1)%size == front){
        return true;
    }
    else{
        return false;
    }
}

bool Queue::isEmpty(){
    if (back == front ) {
        return true;
    } else {
        return false;
    }
}

void Queue::enqueue(int x){
    if(!isFull()){
        back = (back +1) % size;
        values[back] = x;
    }
}



int Queue::dequeue(){
    if(!isEmpty()){
        front = (front+1)%size;
        return values[front];
    }
    return 0;
}
