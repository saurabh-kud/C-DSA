#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node* next;
};

void insertAtLast(Node* headRef, int data) {
    // create a new node
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    
    // if the linked list is empty, make the new node the head of the list
    if (headRef == NULL) {
        headRef = newNode;
        return;
    }
    
    // traverse the list to find the last node
    Node* lastNode = headRef;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    
    // set the next pointer of the last node to the new node
    lastNode->next = newNode;
}

void print_li(Node* head){
  if(!head){
       cout << "list is empty" << endl;
  }else{
    Node* temp=head;
   
    while(temp!=NULL){
         cout << temp->data << "-->";
         temp = temp->next;
    }
    cout << "NULL" << endl;
  }
    
}
 
int main(){
    Node *head = NULL;
    insertAtLast(head, 35);
    insertAtLast(head, 30);
    insertAtLast(head, 10);
    insertAtLast(head, 40);
    print_li       (head);
    return 0;
}