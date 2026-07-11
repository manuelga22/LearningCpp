#include <iostream>


class Node {

    public:
        int value;
        Node* left;
        Node* right;
        
        Node(int number) {
            value = number;
            left = nullptr;
            right = nullptr;
        }

};

class Dequeue {

    private:
        Node* start = new Node(-1);
        Node* end = start;

    public:

        Dequeue() { }

        Node* getStart() {
              return start->right; // skip dummy node
        }

        Node* getEnd() {
              return end;
        }
        
        void enqueueEnd(int number){
            Node* newNode = new Node(number);
            newNode->left = end;
            end->right = newNode;
            end = newNode;
        }

        void enqueueStart(int number) {
            Node* newNode = new Node(number);
            newNode->left = start; // set left to the dummy node
            
            Node* actualStart = start -> right; // Skip the dummy node

            if (actualStart == nullptr) {
                start->right = newNode;
                end = newNode;
            } else {
                newNode->right = actualStart;
                start->right = newNode;
            }

        }

        void dequeueEnd() {
           if (end == start) {
               std::cout << "No nodes to dequeue at the end\n";
           } else {
               Node* nodeToDelete = end;
               end = end->left;
               end->right = nullptr;
               delete nodeToDelete;
           }
        }

        void dequeueStart() {
            if (start->right == nullptr) {
                std::cout << "Node nodes at the start of queue";
            }else {
                Node* dummyNode = start;
                Node* nodeToDelete = start->right;
                Node* newStart = start->right->right;

                start->right = newStart;
                if (newStart != nullptr) {
                    newStart->left = start;
                } else {
                    end = start; 
                }

                delete nodeToDelete;
            }
        }

        void print() {
            Node* current = start -> right;  // skip the dummy node
            std::cout << "[ ";
            while (current != nullptr) {
                std::cout << current -> value << " ";
                current = current -> right;
            }
            std::cout << "]" << std::endl;
        }

};