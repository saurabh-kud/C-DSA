#include<bits/stdc++.h>

using namespace std;

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
cout << "testing" << endl;
// cout << root->data << endl;
cout << item << endl;
if(root==NULL)
{
root=newNode;
cout << "root created" << endl;
}
else if(root->data>newNode->data)
{
cout << "left";
node *temp = root;
  while(temp->data>newNode->data){
      temp = temp->left;
  }

temp=newNode;
cout << "left created" << endl;

// temp=temp->left;
}
else if(root->data<newNode->data)
{
node *temp = root;

while(temp->data<newNode->data){
      temp = temp->right;
}

temp->right=newNode;
cout << "right created" << endl;
// temp=temp->right;
}

}


void inorderTraversal(struct node* temp) {
if (temp == NULL) return;
inorderTraversal(temp->left);
printf("%d ", temp->data);
inorderTraversal(temp->right);
}



int main()
{
struct node* root=(struct node*)malloc(sizeof(struct node*));
// root==NULL;

root->data = 5;
root->left = NULL;
root->right = NULL;
// create(root,5);
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