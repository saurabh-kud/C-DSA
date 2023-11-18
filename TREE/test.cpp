#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* left;
struct node* right;
};

void create(struct node* root,int item)
{
struct node* newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=item;
newNode->left=NULL;
newNode->right=NULL;
if(root==NULL)
{
root=newNode;

}
else if(root->data>newNode->data)
{
    while(root!=NULL){
        root = root->left;
    }
root=newNode;
// root=root->left;
}
else
{
     while(root!=NULL){
        root = root->right;
    }
root=newNode;
// root=root->right;
}

}



void inorderTraversal(struct node* temp) {
if (temp == NULL) return;
printf("%d ", temp->data);
inorderTraversal(temp->left);
inorderTraversal(temp->right);
}



int main()
{
struct node* root=(struct node*)malloc(sizeof(struct node*));
root==NULL;
create(root,5);
struct node *temp=root;
create(root,2);
create(root,1);
create(root,4);
create(root,8);
create(root,6);
create(root,9);
inorderTraversal(temp);
printf("BST constructed successfully\n");


return 0;
}