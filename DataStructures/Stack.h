#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;

class Stack {

    private:
        vector<int> _stack;
        int capacity;

    public:

        Stack(int size) {
            capacity = size;
        }

        int getTop() {
            if (_stack.empty()) {
                cout << "Stack is empty, can't getTop";
                return -1;
            }
            return _stack.back();
        }

        int pop() {
            int top = _stack.back();
            _stack.pop_back();
            return top;
        }

        void push(int num) {
             if (_stack.size() >= capacity) {
                cout << "Stack is at max capacity, can not push";
             } else {
                _stack.push_back(num);
             }
        }

        void print() {
            cout << "Printing Stack\n";
            for (int i = 0; i < _stack.size(); i++) {
                cout << "Element at index " << i << ": " << _stack[i] << "\n";
            }
        }

};