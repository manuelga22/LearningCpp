#include <iostream>

class Node {
    public:
        int value;
        Node* right;
        Node* left;

        Node (int val) {
             right = nullptr;
             left = nullptr;
             value = val;
        }
};

class BST {

    public:
        
        Node* root;

        BST() {
            root = nullptr;
        }

        Node* insert(int val) {

            return new Node(-1);

        }

        static Node* inorder(Node* root) {
            if (root == nullptr) {
                return nullptr;
            }
        
            inorder(root->left);
            std::cout << root->value << "\n";
            inorder(root->right);
        }

        static Node* preorder(Node* root) {
            if (root == nullptr) {
                return nullptr;
            }

            std::cout << root->value << "\n";
            preorder(root->left);
            preorder(root->right);
        }

        static Node* postorder(Node* root) {
            if (root == nullptr) {
                return nullptr;
            }
            postorder(root->left);
            postorder(root->right);
            std::cout << root->value << "\n";
        }
    
};

