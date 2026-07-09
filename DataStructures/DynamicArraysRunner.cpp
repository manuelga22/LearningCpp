#include <iostream>
#include "DynamicArrays.h"

int main() {
    
    
    DynamicArray arr(2);
    arr.pushBack(10);
    arr.pushBack(20);

    std::cout << "Length: " << arr.getLength() << "\n";
    std::cout << "Element at index 0: " << arr.get(0) << "\n";
    std::cout << "Element at index 1: " << arr.get(1) << "\n";
}