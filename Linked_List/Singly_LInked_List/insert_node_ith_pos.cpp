//program to insert a node at ith position
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node * next;
        node(int da){
            data=da;
            next=NULL;
        }
};

node* take_input(){
    int data{};
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node* newNode=new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}
node* ith_pos(node* head,int index,int data){
    if(index==0){
        node* newNode=new node(data);
        newNode->next=head;
        head=newNode;
        return head;
    }
    node* temp=head;
    int count{};
    while(temp!=NULL && count <index-1 ){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        node* newNode=new node(data);
        newNode->next=temp->next;
        temp->next=newNode;
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


 
int main(){
 node* head= take_input();
 print_li(head);
 int index,data;
 cin>>index>>data;
 head=ith_pos(head,index,data);
 print_li(head);
 return 0;
}