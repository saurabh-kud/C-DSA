#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data{};
    node* next=NULL;
   
    node(int da){
      data=da;
      next=NULL;
    }
};

class Linked_list{
    private: 
         node* first=NULL;
    public:
    //constructor
    Linked_list(){
        int da;
        cin>>da;
        first=NULL;
        node* temp=NULL;
        while(da!=-1){
            
            if(first==NULL){
                first=new node(da);
                temp=first;
            }else{
                temp->next=new node(da);
                temp=temp->next;
                
            }
            cin>>da;
        }
    }
       
    void display();
    void insert(int index,int da);
    void del(int );
    int length();
};

void Linked_list::display(){
    node* j=first;
    while(j!=NULL){
        cout<<j->data<<" ";
        j=j->next;
    }
    cout<<endl;
}

int Linked_list::length(){
    node* temp=first;
    int count{};
    while(temp!=NULL){
      count++;
      temp=temp->next;
    }
    return count;
}

void Linked_list::insert(int index,int da){
    node* temp=first;
    int count{};
    if(index==count){
        node* newNode=new node(da);
        newNode->next=first;
        first=newNode;
    }else{
        while(temp!=NULL && count<index-1){
            count++;
            temp=temp->next;
        }
        if(temp!=NULL){
            node* newNode=new node(da);
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
}
void Linked_list::del(int index){
   
     if(index==0){
         node* temp= first->next;
         delete first;
         first=temp;
     }else{
         node* temp=first;
         int count{};
         while(temp!=NULL && count<index-1){
             count++;
             temp=temp->next;
         }
         if(temp!=NULL){
             node* t=temp->next;
             temp->next=t->next;
             delete t;
         }

     }
}

