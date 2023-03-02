#include<bits/stdc++.h>
using namespace std;
 
class node{
    public:
    int data;
    node *next;
    node(int da){
        data = da;
        next = NULL;
    };
};
node* insertAt(node* head, int data){
    node *newNode =new  node(data);

    if(head==NULL){
        head = newNode;
        return head;
    }else{
       node* temp = head;
        while(temp!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
    return head;
}

void print(node* head){
    node *temp = head;
    if(head!=NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}



int main(){
    node *head = NULL;
    head= insertAt(head,35);
     insertAt(head,30);
    insertAt(head,45);
    insertAt(head,10);
    print(head);

    return 0;
}