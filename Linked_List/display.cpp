#include<bits/stdc++.h>
using namespace std;
 
 class node{
     public:
         int data{};
         node * next{};
         node(int da){
             data=da;
         }
         node (){
             data=0;
         }
 };

void print_li(node * p){

    while(p!=0){
         cout<<p->data<<endl; 
         p=p->next;
    }
}


void print_list_recursive(node *p){
     if(p==0){
         return;
     }
     cout<<p->data<<endl;
     p=p->next;
     print_list_recursive(p);
}




int main(){

    node * head=new node(5);
    node * first=new node(10);
    node * second=new node(4);
    node * third=new node(69);
    node * four =new node(25);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=four;
    node* linked_list=head;
    node* temp=head;
     print_list_recursive(temp);
    
 
 return 0;
}