#include "DoubleEndedQueue.h"
#include <iostream>

int main() {
    Dequeue dq;

    dq.enqueueEnd(1);
    dq.enqueueEnd(2);
    dq.enqueueStart(0);

    dq.print();

    dq.dequeueStart();
    dq.dequeueEnd();

    dq.print();

    std::cout << "Printing left " << dq.getStart()->value << "\n";
    std::cout << "Printing right " << dq.getEnd()->value << "\n";
}