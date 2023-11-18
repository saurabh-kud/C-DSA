//this is code for all operation perform on circular linked list

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
    }
};

class circularList{
    node *head;
    node *tail;
     
    public:
    circularList(){
        head = NULL;
        tail == NULL;
    }
    void takeInput();
    void print();
 
    void deleteAtLast();
    
    
};


void circularList::takeInput(){
    int n;
    cout << "enter value: ";
    cin >> n;
    while (n!=-1)
    {
        node *newNode = new node(n);
        if (head == NULL)
        {
            head = newNode;
            head->next = head;
            tail = head;
       }else{
            tail->next = newNode;
            tail = tail->next;
            tail->next = head;
       }
       cout << "enter value :";
       cin >> n;
    }
    
} 

void circularList::print(){
   if(head==NULL){
       cout << "linked list is empty" << endl;
   } else{
       node *temp = head;
       cout << temp->data << "->";
       while(temp->next!=head){
            temp = temp->next;
            cout << temp->data << "->";
       }
       cout << "NULL" << endl;
   }
}


void circularList::deleteAtLast(){
    if(head==NULL){
        cout << "linkedlist is empty" << endl;
    }else{
        
        node *temp = head;
        while(temp->next->next!=head){
            temp = temp->next;
        }
        node *tempNode = temp->next;
        temp->next = head;
        delete tempNode;
    }
}


int main()
{
    circularList l;
    l.takeInput();
    l.print();
    l.deleteAtLast();
    l.print();
    return 0;
}