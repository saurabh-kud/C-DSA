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
      void insertFirst(int);
      void insertAtSpecific(int, int);
      void deleteLast();
      void deleteFirst();
      voi deleteAtSpecific(int)
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

void doublyList::insertFirst(int data){
     node *newNode = new node(data);

    if(head==NULL){
            head = newNode;
            tail = head;
    }else{
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
    }
}

void doublyList::insertAtSpecific(int pos,int data){
    if(head==NULL){
        if(pos>1|| pos<1){
                cout << "operation can't be perform because invalid position" << endl;
        }else{
                node *newNode = new node(data);
                head = newNode;
                tail = newNode;
        }
    }else{
        if(pos<1){
            cout << "operation can't be perform because invalid position" << endl;
        }else{
            node *newNode = new node(data);
            node *temp = head;
            for (int i = 1; i < pos - 1;i++){
                temp = temp->next;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void doublyList::deleteLast(){
    if(head==NULL){
        cout << "list is empty" << endl;
    }else{
        node *temp = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        delete temp;
    }
}

void doublyList::deleteFirst(){
    if(head==NULL){
        cout << "list is empty" << endl;
        
    }else{
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
}

void doublyList::deleteAtSpecific(int pos){
    if(head==NULL){
        cout << "linkedList is empty" << endl;
    }else if(pos<1){
        cout << "operation can't be perform" << endl;
    }else{
        node *temp = head;
        for (int i = 1; i < pos - 1;i++){
            temp = temp->next;

        }
        node *tempNode = temp->next;
        tempNode->next->prev = temp;
        temp->next = temp->next->prev;
        delete tempNode;
    }
}

int main(){
    doublyList l;
    l.takeInput();
    l.print();
    l.insertLast(150);
    l.print();
    l.insertFirst(36);
    l.print();
    l.insertAtSpecific(2, 1000);
    l.print();
    l.deleteFirst();
    l.print();
    l.deleteLast();
    l.print();
    return 0;
}