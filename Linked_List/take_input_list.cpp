//program to take input linked list
#include<bits/stdc++.h>
using namespace std;




class node{
   public:
      int data{};
      node * next;

     node(int da){
         data=da;
         next=NULL;
     }
};

node* take_input_list(){
    int data;
    cin>>data;
    node* head=NULL;
    while(data!=-1){
      node* s=new node(data);
      if(head==NULL){
          head=s;
      }else{
          node* temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=s;
      }
      cin>>data;

    }
  return head;
}

void print_list(node * head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


 
int main(){
 
 node* head=take_input_list();
 print_list(head);
 return 0;
}