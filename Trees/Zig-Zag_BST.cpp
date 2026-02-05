#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

void zigZagTraversal(Node* root) {
    if (!root) return;

    stack<Node*> curr, next;
    bool leftToRight = true;

    curr.push(root);

    while (!curr.empty()) {
        Node* node = curr.top();
        curr.pop();

        if (node) {
            cout << node->data << " ";

            if (leftToRight) {
                if (node->left)  next.push(node->left);
                if (node->right) next.push(node->right);
            } else {
                if (node->right) next.push(node->right);
                if (node->left)  next.push(node->left);
            }
        }

        if (curr.empty()) {
            leftToRight = !leftToRight;
            swap(curr, next);
        }
    }
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Zig-Zag Traversal: ";
    zigZagTraversal(root);

    return 0;
}
