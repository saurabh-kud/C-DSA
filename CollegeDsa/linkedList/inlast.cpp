#include<bits/stdc++.h>
using namespace std;
 


 class node{
    public:
    int data;
    node* next;
    
      node( int value){
        data=value;
        next=NULL;
      }
};


//take input 
node* takeInput(){
    int data;
    cout<<"enter value ";
    cin>>data;
       node* head=NULL;
       node* tail=NULL;
       
    while(data!=-1){
     node* newNode= new node(data);
      
       if(head==NULL){
        head=newNode;
        tail=newNode;
        
       }else{
         tail->next=newNode;
         tail=tail->next;

       }
       cout<<"enter value "<<endl;
       cin>>data;
    }
    return head;
}

void insertAtLast(node* head,int data){
    node *temp = head;
    node *newNode=new node(data);
    while(temp->next!=NULL){
       temp = temp->next;
    }
    temp->next = newNode;
   
}
void print_li(node* head){
  if(!head){
       cout << "list is empty" << endl;
  }else{
    node* temp=head;
   
    while(temp!=NULL){
         cout << temp->data << "-->";
         temp = temp->next;
    }
    cout << "NULL" << endl;
  }
    
}

int main(){
 
 node* head=takeInput();
 print_li(head);
 insertAtLast(head,35);
 print_li(head);

 return 0;
}
