#include <iostream>
#include "SinglyLinkedList.h"

int main() {
    SinglyLinkedList s;

    s.insertTail(1);
    s.insertTail(2);

    s.insertHead(0);
    s.insertHead(0);

    s.remove(3);

    s.print();
}