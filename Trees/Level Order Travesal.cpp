#include<iostream>
#include<queue>
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
void levelOrderTraversal(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";

        if (current->left != NULL)
            q.push(current->left);
        if (current->right != NULL)
            q.push(current->right);
    }
}
int main() {
    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(12);
    root->left->left = new Node(13);
    root->left->right = new Node(15);
    root->right->left = new Node(16);
    root->right->right = new Node(14);
    root->left->left->left = new Node(17);
    root->left->left->right = new Node(18);
    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    return 0;
}     