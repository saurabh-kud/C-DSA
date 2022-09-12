//program to append last n node to first 
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
int length(node* head){
    int temp{};
    while(head!=NULL){
       temp++;
       head=head->next;
    }
    return temp;
}

node* append(node* head,int n){
    int lenth=length(head)-n;
    if(head==NULL){
        return head;
    }
    node* temp=head;
    node* tail=head;
     for(int i{};i<lenth-1;i++){
         temp=temp->next;
     }
     while(tail->next!=NULL){
         tail=tail->next;
     }
     tail->next=head;
     head=temp->next;
     temp->next=NULL;
     return head;
     
}
 
int main(){
 
 node* head=take_input_list();
 print_list(head);
  int n;
  cin>>n;
  head=append(head,n);
  print_list(head);
 return 0;
}