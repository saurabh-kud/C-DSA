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

//search elements 
void search(node* head,int val){
    node *temp = head;
    int count = 1;
    bool isFound = false;
    while(temp!=NULL){
        if(temp->data==val){
         isFound = true;
         cout << "item availble at " << count << " positon" << endl;
         break;
        }
        count++;
        temp = temp->next;
    }
    if(!isFound){
        cout << "item not present into linked list" << endl;
    }
}

//print linked list
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

//insert at specific position
node* insert_at_specific(node* head,int pos,int val){
  node *newNode = new node(val);
  int tempPos = 1;
  if (head == NULL)
  {
    if (pos > 1)
    {
        cout << "list is empty we can't add it on pos 2" << endl;
        return NULL;
         }else{
        head = newNode;
        return head;
         }
  }else{
         node *temp = head;
         if(pos==0){
        newNode->next = head;
        head = newNode;
        return head;
         }
         
           while(temp!=NULL){
             
             if(tempPos<pos-1){
               tempPos++;
               temp = temp->next;
             }else{
               break;
             }
           }
           newNode->next = temp->next;
           temp->next = newNode;
           return head;
  }
}

//print into rev order 
 void printrev(node* head){
  node *temp = head;
    if(head==NULL){
           
           return;
    }

    printrev(head->next);
    cout << head->data << " ";
 }

// delete a node from last 

void delAtLast(node* head){
  if(head==NULL){
           cout << "linked list is empty" << endl;
           return;
  }
  if(head->next){
           delete head;
           head = NULL;
  }
    node *temp = head;
    
    while(temp->next->next){
           
           temp = temp->next;
    }
    
    delete temp->next;
    temp->next = NULL;
}

void delAtSpecific(node* head,int pos){
      if(!head){
           cout << "linked list is empty" << endl;
           return;
      }
      if(!head->next){
           delete head;
           return;
      }
      node *temp = head;
      int tempPos = 1;
      while(temp){
        if(tempPos<pos-1){
             tempPos++;
             temp = temp->next;
        }else{
             break;
        }
      }
      node *tempNode = temp->next;
      temp->next = tempNode->next;
      delete tempNode;
}

int main(){
 
 node* head=takeInput();
 print_li(head);
//  head = insert_at_specific(head, 4, 10);
 search(head, 5);
//  delAtLast(head);
 print_li(head);
 printrev(head);
 delAtSpecific(head, 3);
 print_li(head);

 return 0;
}