#include "Stack.h"
#include <iostream>
using namespace std;

int main() {

    Stack s(5);

    s.push(1);
    s.push(2);


    int num = s.pop();

    cout << "num popped " << num << "\n";

    s.push(3);

    s.print(); // This should print a stack with elements 1 and 3


}

