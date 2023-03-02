#include<bits/stdc++.h>
using namespace std;

class node{
      public:
    int data;
    node *next;
    node *revTemp;
    node(int value){
        data = value;
        next=NULL;
        revTemp = NULL;
    }
};

class linkedList
{
private:
    /* data */
    node *head;
    node *tail;
    int nodeCount;
    // function to print ll in reverse
     void revprint_helper(node* current) {
        if (current == nullptr) {
            return;
        }
        revprint_helper(current->next);
        cout << current->data << " ";
    }

public:
    linkedList();
   void takeInput();
   void insert(int pos, int val);
   void print();
   void printrev();
   void deleteAtLast();
   void deleteAtspecific(int pos);
   void search(int val);

   ~linkedList();
};

linkedList::linkedList()
{
    head = NULL;
    tail = NULL;
    nodeCount = 0;
}

//for taking input into linkedList
void linkedList::takeInput(){
     int data;
    cout<<"enter value ";
    cin>>data;
       
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
    
}

//inserting at specific postiong
void linkedList::insert(int pos,int val){
    node *newNode = new node(val);
  int tempPos = 1;
  if (head == NULL)
  {
    if (pos > 1)
    {
        cout << "list is empty we can't add it on pos 2" << endl;
        return;
         }else{
        head = newNode;
        return;
         }
  }else{
         node *temp = head;
         if(pos==0){
        newNode->next = head;
        head = newNode;
        return;
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
           
  }
}

// for printing the linkedlist
void linkedList::print(){
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

// print linkedlist on reverse order
void linkedList::printrev(){
  revprint_helper(head);
  cout << endl;
 }

//delete at last 
void linkedList::deleteAtLast(){
    if(head==NULL){
           cout << "linked list is empty" << endl;
           return;
  }
  if(!head->next){
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


//delete at specific 
void linkedList::deleteAtspecific(int pos){
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

//search elements 
void linkedList::search(int val){
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




linkedList::~linkedList()
{
    // cout << "deconstructor  called" << endl;
    while(head->next){
        node *temp = head;
        delete temp;
        head->next;
    }
}


int main()
{
    linkedList l;
    l.takeInput();
    l.print();
    l.printrev();
    l.insert(2, 3);
    l.print();
    l.deleteAtLast();
    l.print();
    l.deleteAtspecific(4);
    l.print();
    l.search(5);
    return 0;
}
