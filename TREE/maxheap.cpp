#include<bits/stdc++.h>
using namespace std;
 
class node{
    public:
    int data;
    node *left;
    node *right;
     
     node(int val){
         data = val;
     }
};

class binaryTree{
     node *root;

     binaryTree(){
         root = NULL;
     }

     void insert(int val);
};

void binaryTree::insert(int val){
     node *newNode = new node(val);
   
     if(root==NULL){
         root = newNode;
         return;
         
     }
     node *temp = root;

     while(temp->left!=NULL){
        
     }

     if(temp->left==NULL){
         temp->left = newNode;
     }

}

int main(){
 
 return 0;
}