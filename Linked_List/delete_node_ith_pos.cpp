//program to delete ith node from linked list
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

void print_li(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
node* delete_node(node* head,int index){
    if(index==0){
        head=head->next;
        return head;
    }

    node* temp=head;
    int count{};
    while(temp!=NULL && count< index-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        node* it= temp->next;
        temp->next=it->next;
    }
   return head;
}

int length(node* head){
    node* temp=head;
    int count{};
    while(temp!=NULL){
        ++count;
        temp=temp->next;
    }
    return count;
}
 
int main(){
  
  node * head=take_input();
  print_li(head);
  int index;
  cin>>index;
  head=delete_node(head,index);
  print_li(head);
  
 return 0;
}