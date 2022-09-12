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
    node* tail=NULL;
    while(data!=-1){
      node* s=new node(data);
      if(head==NULL){
          head=s;
          tail=s;
      }else{
          tail->next=s;
          tail=tail->next;
      }
      cin>>data;

    }
  return head;
}

void print_list(node * head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* merge(node* head,node* head1){
    node* p=head;
    node* q=head1;
    node* finl{NULL};
    node* finlt{NULL};
    
    while(p!=NULL && q!=NULL){
        if(p->data<=q->data){
            node* newNode=new node(p->data);
            if(finl==NULL){
                finl=newNode;
                finlt=newNode;
            }else{
               
               finlt->next=newNode;
               finlt=finlt->next;
            }
           
            p=p->next;
        }else{

            node* newNode=new node(q->data);
          
            if(finl==NULL){
                finl=newNode;
                finlt=newNode;
            }else{
               finlt->next=newNode;
               finlt=finlt->next;
            }
           
         
           q=q->next;
        }
    }
    while(p!=NULL){
        node* newNode=new node(p->data);
           if(finl==NULL){
                finl=newNode;
                finlt=newNode;
            }else{
               finlt->next=newNode;
               finlt=finlt->next;
            }
            p=p->next;
        
        
    }
    while(q!=NULL){
        node* newNode=new node(q->data);

        if(finl==NULL){
                finl=newNode;
                finlt=newNode;
            }else{
               finlt->next=newNode;
               finlt=finlt->next;
            }
        q=q->next;
        
    }

    return finl;
}

 
int main(){
 
 node* head=take_input_list();
 node* head1=take_input_list();
 print_list(head);
 print_list(head1);
 node* merged=merge(head,head1);

 print_list(merged);
 
 return 0;
}