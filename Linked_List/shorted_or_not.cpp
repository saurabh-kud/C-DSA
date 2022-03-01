//program to check linked list shorted or not
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

int shorted(node* head){
    if(head==NULL){
        return -1;
    }
    node* q=head->next;
    while(head!=NULL && q!=NULL){
      
        if( head->data<=q->data){
            head=q;
            q=q->next;
        }else{
            return -1;
        }
       
    }
 return 1;
}


 
int main(){
  
  node * head=take_input();
  print_li(head);
  int ans= shorted(head);

  cout<<ans<<endl;
  
  
 return 0;
}