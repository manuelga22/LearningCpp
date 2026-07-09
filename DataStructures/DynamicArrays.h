#include <stdexcept>

class DynamicArray {

    private:
        int *data;
        int capacity;
        int length;

        void resize() {
            capacity *= 2;
            int *newData = new int[capacity];
            for (int i = 0; i < length; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }


    public:
        DynamicArray(int capacity) : capacity(capacity), length(0) {
            data = new int[capacity];
        }

        int getLength() {
            return length;
        }

        int get(int index) {
            if (index < 0 || index >= length) {
                throw std::out_of_range("Index out of bounds");
            }
            return data[index];
        }

        void pushBack(int n) {

            if (length >= capacity) {
                resize();
            }
            data[length] = n;
            length++;
        }

};