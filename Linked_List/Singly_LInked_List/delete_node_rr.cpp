//program to delete a node through their index recursive
#include<bits/stdc++.h>
using namespace std;
 
class node{
    public:
        int data{};
        node* next{NULL};
        node(int da){
            data=da;
            next=NULL;
        }
        
};

node* take_input(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node* newNode=new node(data);
        if(head==NULL){
            head=newNode;
            tail=head;
        }else{
            tail->next=newNode;
            tail=newNode;
        }

       cin>>data;
    }
    return head;
}

void print_li(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

node* delete_node(node* head,int index){
    if(head==NULL){
        return head;
    }

    if(index==0){
        node* temp=head->next;
        delete head;
       head=temp;
       
        return head;
    }
    node* small= delete_node(head->next,index-1);
    head->next=small;
    return head;
}






int main(){
 node* head=take_input();
 print_li(head);
 int index{};
 cin>>index;
 head=delete_node(head,index);
 print_li(head);
 return 0;
}