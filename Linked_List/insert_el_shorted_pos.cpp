//program to insert a element at shorted position in shorted linked list

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
node* insert(node* head,int data){
    node * newNode=new node(data);
    if(head->data>data){
        newNode->next=head;
        head=newNode;
        return head;
    }
    node* p=head;
    node* q=NULL;
    while(p!=NULL&& p->data<data){
        if(p->data<data){
            q=p;
            p=p->next;
        }
        
    }
    q->next=newNode;
    newNode->next=p;
    return head;
}

 
int main(){
  
  node * head=take_input();
  print_li(head);
  int data{};
   cin>>data;
   head=insert(head,data);
   print_li(head);
 return 0;
}