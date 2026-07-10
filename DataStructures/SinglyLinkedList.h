#include <iostream>
#include <vector>
using namespace std;


class ListNode {
    private:
        int value;
        ListNode* next;


    public:

        ListNode (int v) {
            value = v;
            next = nullptr;
        }

        ListNode (int v, ListNode* next) {
            value = v;
            next = next;
        }

        int getValue() {
            return value;
        }

        ListNode* getNext() {
            return next;
        }

        void setNext(ListNode* node) {
            next = node;
        }
};

class SinglyLinkedList {
    
    // HEAD TAIL
    private:
        ListNode* head;
        ListNode* tail;

    public:

        SinglyLinkedList() {
            head = new ListNode(-1);
            tail = head;
        }

        int get(int index) {
            ListNode* currentNode = head -> getNext();
            int i = 0;
            while(currentNode != nullptr) {
                if (i == index) {
                    return currentNode -> getValue();
                }
                i++;
                currentNode = currentNode -> getNext();
            }
            return -1;
        }
    
        void insertHead(int val) {
            ListNode* newNode = new ListNode(val);
            ListNode* nextNode = head -> getNext();
            head->setNext(newNode);

            if (nextNode != nullptr) { 
                newNode->setNext(nextNode);
            }
        }
        
        void insertTail(int val) {
            ListNode* newNode = new ListNode(val);   
            tail->setNext(newNode);
            tail = newNode;
        }
    
        bool remove(int index) {
            ListNode* curr = head -> getNext();
            ListNode* prev = new ListNode(-1);
            
            int i = 0;
            while (curr != nullptr && i <= index) {
                if (i == index) {
                   prev -> setNext(curr -> getNext());
                   delete curr;
                   return true;
                }
                prev = curr;
                curr = curr -> getNext();
                i++;
            }
            return false;
        }
    
        vector<int> getValues() {
            vector<int> values;
            
            ListNode* curr = head->getNext(); // Always start after the dummy node
            while (curr != nullptr) {
                values.push_back(curr -> getValue());
                curr = curr -> getNext();
            }
            return values;
        }

        void print() {
            vector<int> values = getValues();
            cout << "Printing values in linked list\n";
            for (int i = 0; i < values.size(); i++) {
                 cout << "Values at pos " << i << " : " << values[i] << "\n";
            }
        }

};