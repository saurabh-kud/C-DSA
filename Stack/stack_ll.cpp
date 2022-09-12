
#include<bits/stdc++.h>
using namespace std;


template <typename T> 
class node {
   public:
    T data;
    node<T> * next;

    node(T da){
        data=da;
        next=NULL;
    }
};
template <typename T>

class stackll{
   node<T>* head;
   int size;
   public:
      
       stackll(){
           head=NULL;
           size=0;
       }

       void push(T da){
           node<T>* newNode=new node<T>(da);
           if(head==NULL){
               head=newNode;
               size++;
           }else{
               newNode->next=head;
               head=newNode;
               size++;
           }
       }


    T pop(){
        if(!isEmpty()){
            T result=head->data;
            node<T>* temp=head->next;
            delete head;
            head=temp;
            size--;
            return result;
        }else{
            cout<<"empty"<<endl;
            return -1;
        }
    }

    T peek(){
        if(!isEmpty()){
        return head->data;

        }else{
            cout<<"empty"<<endl;
            return -1;
        }
    }
   bool isEmpty(){
       return size==0;
   }

   int getSize(){
       return size;
   }

};


 
int main(){
  stackll<int> s;
  s.push(10);
  s.push(20);
  s.pop();
  s.pop();
  cout<<s.peek()<<endl;
  cout<<s.getSize()<<endl;
 return 0;
}