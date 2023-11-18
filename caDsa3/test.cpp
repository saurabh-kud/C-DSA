#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node* root;

public:
    BST() {
        root = nullptr;
    }

    void insert(int val) {
        Node* node = new Node(val);
        
        if (root == nullptr) {
            root = node;
            return;
        }
        
        Node* curr = root;
        
        while (true) {
            if (val < curr->data) {
                if (curr->left == nullptr) {
                    curr->left = node;
                    return;
                }
                curr = curr->left;
            }
            else {
                if (curr->right == nullptr) {
                    curr->right = node;
                    return;
                }
                curr = curr->right;
            }
        }
    }

    bool search(int val) {
        Node* curr = root;
        
        while (curr != nullptr) {
            if (val == curr->data) {
                return true;
            }
            else if (val < curr->data) {
                curr = curr->left;
            }
            else {
                curr = curr->right;
            }
        }
        
        return false;
    }

    void display() {
        displayHelper(root);
    }
    
private:
   //INORDER TRAVERSAL
    void displayHelper(Node* node) {
        if (node == nullptr) {
            return;
        }
        
        displayHelper(node->left);
        cout << node->data << " ";
        displayHelper(node->right);
    }
};

int main() {
    BST bst;
    bst.display();
    

    cout << "how many element do you want to insert :";
    int n;
    cin >> n;
    

    for (int i = 0; i < n; i++) {
        int val;
        cout << "enter " << i + 1 << "value: ";
        cin >> val;
        bst.insert(val);
    }
    
    


    bst.display();
    cout << endl;

    int searchVal;
    cout << "enter value to find in bst: ";
    cin >> searchVal;

    if (bst.search(searchVal)) {
        cout << "Found " << searchVal << " in the BST" << endl;
    }
    else {
        cout << searchVal << " not found in the BST" << endl;
    }
    bst.display();
    
    return 0;
}
