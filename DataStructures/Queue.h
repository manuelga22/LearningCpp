#include <vector>
#include <iostream>
#include <stdexcept>


using std::vector;

class Queue {

    private:
        vector<int> queue;
        size_t size;


    public:

        Queue(size_t size) : size(size) {}

        int deque(){
            if (queue.size() <= 0){
                throw std::out_of_range("Queue is empty");
            }
            int first_num = queue[0];

            queue.erase(queue.begin());

            return first_num;
        }

        void enqueue(int num) {
            if (queue.size() >= size){
                throw std::out_of_range("Queue has reached its limit size");
            }
            queue.push_back(num);
        }

        void print(){
            std::cout << "Printing Queue\n";
            for (size_t i = 0; i < queue.size(); i++) {
                std::cout << "Element at index " << i << ": " <<  queue[i] << "\n"; 
            }
        }

};



    