#include <stdexcept>

class Stack {
   
    private:
        int top;
        int capacity;
        int length;
        int* array;

    public:

        Stack(int size) {
            capacity = size;
            length = 0;
        }

        int getTop() {
            return top;
        }

        int pop() {
            int num = array[length];
            length--;
            return num;
        }

        void pushTop(int num) {
             if (length == capacity) {
                throw std::out_of_range("Stack Overflow");
             }
             array[length] = num;
             length++;
        }




};