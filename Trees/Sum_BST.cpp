#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int sumOfTree(Node* root) {
    if (root == NULL)
        return 0;

    return root->data
           + sumOfTree(root->left)
           + sumOfTree(root->right);
}

int main() {

    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    cout << "Sum of BST = " << sumOfTree(root);
}
