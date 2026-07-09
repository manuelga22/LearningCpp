#include <iostream>
#include "Queue.h"


int main() {

    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.deque();

    q.print();

    // this line should reach the limit size of the queue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print();

}