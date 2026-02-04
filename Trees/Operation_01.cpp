#include<iostream>
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

int main() {
    // Your code first goes here with the help of Node structure
    Node* root = new Node(10);
    root->left = new Node(20);
}