// program to check element avilable or not if avilable then return position
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
int searching(node* head,int data){
    int count{};
    
    while(head!=NULL){
        if(head->data==data){
            return count;
        }
        count++;
        head=head->next;
    }
    return -1;
    
}
int searching_rr(node* head,int data){
    
    if(head==NULL){
        return -1;
    }
    if(head->data==data){
        return 0;
    }
    int small=searching_rr(head->next,data);
    if(small==-1){
        return -1;
    }else{
    return 1+small;
    }
}
int main(){
  
  node * head=take_input();
  print_li(head);
  int data;
  cin>>data;
  cout<<searching_rr(head,data);
 return 0;
}