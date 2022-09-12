//program to insert node recursive

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
node* insert(node* head,int index,int data){
    if(head==NULL){
        return head;
    }
    if(index==0){
      node* newNode=new node(data);
      newNode->next=head;
      head=newNode;
      return head;
    }
    node* temp= insert(head->next,index-1,data);
    head->next=temp;
    return head;
}

 
int main(){
  
  node * head=take_input();
  print_li(head);
  int index;
  cin>>index;
  int data;
  cin>>data;
  head=insert(head,index,data);
  print_li(head);
 return 0;
}