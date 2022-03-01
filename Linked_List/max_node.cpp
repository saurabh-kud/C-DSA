//program to find maxximum element in  linked list
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

int max_el(node* head){
    int max=-32768;
    while(head!=NULL){
        if(max<head->data){
            max=head->data;
        }
        head=head->next;
    }
    return max;
}
int max_rr(node* head){
    
    if(head==NULL){
        return 0;
    }
    int small=max_rr((head->next));
    return head->data>small?head->data:small;
}


 
int main(){
  
  node * head=take_input();
  print_li(head);
  cout<<max_rr(head);
  
 return 0;
}