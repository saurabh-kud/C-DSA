#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
struct node* left;
struct node* right;
};

void create(int item,node* root)
{
struct node* newNode=(struct node*)malloc(sizeof(struct node));
newNode->data = item;
newNode->left = NULL;
newNode->right = NULL;
node *temp = root;

while (true){

    if(item<temp->data){
        while (temp!=NULL)
        {
            temp = temp->left;
        }
        temp = newNode;
        cout << item << "created in left" << endl;
    }else{
        if(item>root->data){
            while(root!=NULL){
                temp = temp->right;
            }
            temp = newNode;
        cout << item << "created in right" << endl;

        }
    }
}

}

void display(node* temp){

 if(temp==NULL){
    return;
 }
 display(temp->left);
 cout << temp->data << " ";
 display(temp->right);

}




int main()
{
struct node* root=(struct node*)malloc(sizeof(struct node*));
root->data=5;
root->left = NULL;
root->right = NULL;

create(6, root);
create(2, root);
create(1, root);
create(4, root);
create(8, root);
create(6, root);
create(9, root);
display(root);

return 0;
}