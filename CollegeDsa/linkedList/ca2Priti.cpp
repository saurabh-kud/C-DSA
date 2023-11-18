#include<bits/stdc++.h>
using namespace std;
 
struct node{
    int data;
    node *next;
};

node *head = NULL;

void takeInput(){
    int n;
    cout << "enter value ";
    cin >> n;
    while(n!=-1){
    node *newNode;
    newNode->data = n;
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
        head->next = head;
    }else{
        node *temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    cin >> n;
    }
}

void print(){
    if(head==NULL){
    cout << "linked list is empty" << endl;
    }else{
    node *temp = head;
    cout << temp->data << "->";
    while (temp->next!=head){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    }

}

int main(){

    takeInput();
    print();

    return 0;
}