#include <iostream>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        value = val;
        left = NULL;
        right = NULL;
    }
};

class MaxHeap {
private:
    TreeNode* root;

    void insertHelper(TreeNode* node, int val) {
        if (node == NULL) {
            root = new TreeNode(val);
            return;
        }

        if (node->left == NULL) {
            node->left = new TreeNode(val);
            return;
        }

        if (node->right == NULL) {
            node->right = new TreeNode(val);
            return;
        }

        // recursively insert into the left or right subtree
        if (node->left != NULL && node->right != NULL) {
            if (node->left->left == NULL || node->left->right == NULL) {
                insertHelper(node->left, val);
            } else {
                insertHelper(node->right, val);
            }
        }
    }

    bool isMaxHeapHelper(TreeNode* node) {
        if (node == NULL) {
            return true;
        }

        if (node->left != NULL && node->left->value > node->value) {
            return false;
        }

        if (node->right != NULL && node->right->value > node->value) {
            return false;
        }

        return isMaxHeapHelper(node->left) && isMaxHeapHelper(node->right);
    }

     void printHelper(TreeNode* node) {
        if (node == NULL) {
            return;
        }

        cout << node->value << " ";
        printHelper(node->left);
        printHelper(node->right);
    }

public:
    MaxHeap() {
        root = NULL;
    }

    void insert(int val) {
        insertHelper(root, val);
    }

    bool isMaxHeap() {
        return isMaxHeapHelper(root);
    }

    void print(){
        printHelper(root);
    }
};

int main() {
    MaxHeap h;
   h.insert(7);
h.insert(6);
h.insert(5);
h.insert(4);
h.insert(3);
h.insert(2);
h.insert(1);

    h.print();
    cout << endl;
    if (h.isMaxHeap()) {
        cout << "The tree is a max heap" << endl;
    } else {
        cout << "The tree is not a max heap" << endl;
    }

    return 0;
}
