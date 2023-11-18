#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* createBinaryTree() {
    int val;
    std::cout << "Enter node value (or -1 for NULL): ";
    std::cin >> val;

    if (val == -1) {
        return nullptr; // Return NULL for empty node
    }

    Node* newNode = new Node(val);

    // Recursively create left and right subtrees
    newNode->left = createBinaryTree();
    newNode->right = createBinaryTree();

    return newNode;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    std::cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    // Create binary tree
    std::cout << "Enter the root node value: ";
    root = createBinaryTree();

    // Inorder traversal of the constructed binary tree
    std::cout << "Inorder traversal of the constructed binary tree: ";
    inorderTraversal(root);

    return 0;
}
