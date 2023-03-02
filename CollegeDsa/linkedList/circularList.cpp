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
      void rev_helper(node* current){
        if(current==head){
            return;
        }
        rev_helper(current->next);
        cout << current->data << "->";
      }

    public:
    circularList(){
        head = NULL;
        tail == NULL;
    }
    void takeInput();
    void print();
    void insertLast(int );
    void insertFirst(int);
    void insert(int, int);
    void deleteAtLast();
    void deleteAtFirst();
    void deleteAtSpecific(int);
    void search(int);
    void printrev();
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


void circularList:: insertLast(int data){
       node *newNode = new node(data);
     if(head==NULL){
       
       newNode->next = newNode;
       head = newNode;
       tail = newNode;
     }else{
       node *temp = head;
       while(temp->next!=head){
            temp = temp->next;
       }
       newNode->next = head;
       temp->next = newNode;
       tail = newNode;
     }
}

void circularList::insertFirst(int data){
     node *newNode = new node(data);
     if (head == NULL)
     {
       newNode->next = newNode;
       head = newNode;
       tail = head;
     }else{
       newNode->next = head;
       head = newNode;
       tail->next = head;
     }
}
void circularList::insert(int pos,int data){
    if(head==NULL){
        if(pos>1){
            cout << "can't insert at pos" << pos << " because list is empty" << endl;
        }else{
            if(pos==1){
                node *newNode = new node(data);
                newNode->next = newNode;
                tail = newNode;
                head = newNode;
            }else{
                cout << "operation can't be perform" << endl;
            }
        }
    }else{
        if(pos<1){
            cout << "operationn can't be perform" << endl;
            return;
        }
        node *newNode = new node(data);
        node *temp = head;
        for (int i = 1; i < pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
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

void circularList::deleteAtFirst(){
    if(head==NULL){
        cout << "linked list is empty" << endl;
    }else{
        node *tempNode = head;
        node *temp = head;
       

        while (temp->next != head){
            temp = temp->next;
        }
        temp->next = head->next;
        head = head -> next;
        delete tempNode;
    }
}

void circularList::deleteAtSpecific(int pos){
    if(head==NULL){
        cout << "linked list is empty" << endl;
    }else{
        node *temp = head;
        for (int i = 1; i < pos - 1;i++){
            temp = temp->next;
        }
        node *tempNode = temp->next;
        temp->next = tempNode->next;
        delete tempNode;
    }
}

void circularList::search(int data){
    if(head==NULL){
        cout << "linkedlist is empty" << endl;
    }else{
        node *temp = head;
        int count = 1;
        if(temp->data==data){
            cout << "item found at 1 location" << endl;
            return;
        }
        while(temp->next!=head){
            temp = temp->next;
            count++;
            if(temp->data==data){
                cout << "element found at " << count << " location" << endl;
                return;
            }
        }
        cout << "element is not availble in linkedlist" << endl;
    }
}

void circularList::printrev(){
    rev_helper(head->next);
    cout << head->data << "->NULL" << endl;
}

int main()
{
    circularList l;
    l.takeInput();
    l.print();
    l.insertLast(10);
    l.print();
    l.insertFirst(15);
    l.print();
    l.insert(6, 100);
    l.print();
    l.insertLast(1000);
    l.print();
    l.deleteAtLast();
    l.print();
    l.deleteAtFirst();
    l.print();
    l.deleteAtSpecific(4);
    l.print();
    l.search(11);
    l.printrev();

    return 0;
}