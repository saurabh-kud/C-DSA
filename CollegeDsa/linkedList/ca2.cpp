#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
    
    node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class doublyList{
    node *head;
    node *tail;
    public:
      doublyList(){
        head = NULL;
        tail = NULL;
      }

      void takeInput();
      void print();
      void insertLast(int);
      
};

void doublyList::takeInput(){
        int n;
        cout << "enter value: ";
        cin >> n;
        while(n!=-1){
            node *newNode = new node(n);
            if(head==NULL){
                head = newNode;
                tail = newNode;
            }else{
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
                        }
            cout << "enter value: ";
            cin >> n;
        }
} 

void doublyList::print(){
    if(head==NULL){
            cout << "linked list is empty (:" << endl;
            
    }else{
            node *temp = head;
            while(temp!=NULL){
                cout << temp->data << "<->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
    }
}

void doublyList::insertLast(int data){
     node *newNode = new node(data);
    if(head==NULL){
            head = newNode;
    }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
    }
}


int main(){
    doublyList l;
    l.takeInput();
    l.print();
    l.insertLast(10);
    l.print();

    return 0;
}