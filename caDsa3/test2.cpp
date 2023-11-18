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

    

    void display() {
        displayHelper(root);
    }
    void displaypost(){
        displayhelp(root);
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

    void displayhelp(Node* node){
        if(node==NULL){
            return;
        }

        displayhelp(node->left);
        displayhelp(node->right);
        cout << node->data << " ";
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
        cout << "enter " << i + 1 << " value: ";
        cin >> val;
        bst.insert(val);
    }
   cout << endl
         << "Inorder traveral: " << endl;
    bst.display();
    cout << endl;

    int value;
    cout << "enter elemenet which you want to insert :";
    cin >> value;
    bst.insert(value);
    cout << endl
         << "Inorder traveral: " << endl;
    bst.display();
    cout << endl;
  

    return 0;
}
