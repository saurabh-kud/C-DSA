#include<bits/stdc++.h>
using namespace std;

template <typename T>
class queqeusingarray{
    int capicity;
    int front;
    int rear;
    T * arr;

    public:
        queqeusingarray(int cap){
            capicity=cap;
            front=-1;
            rear=-1;
            arr= new T[cap];
        }

       bool isEmpty(){
           if(front==-1 && rear==-1){
               return true;
           }else{
               return false;
           }
       }
       
       void enqueue(T da){
           if((rear+1)%capicity==front){
               cout<<"full"<<endl;
               return;
           }else if(isEmpty()){
               front=rear=0;
           }else{
               rear=(rear+1)%capicity;
           }
           arr[rear]=da;
       }

       void dequeue(){
           if(isEmpty()){
               return;
           }else if(front==rear){
               rear=front=-1;
           }else{
               front= (front+1)%capicity;
           }
       }
       T peek(){
           if(!isEmpty()){
               return arr[front];
           }else{
               cout<<"empty"<<endl;
               return 0;
           }
       }
     
     
};









 
int main(){
  queqeusingarray <char>q(5);
  q.enqueue('b');
  q.enqueue('s');
 
 //   q.enqueue(25);
 //   q.enqueue(40);
 //   q.enqueue(100);
 //   q.enqueue(10);
  cout<<q.peek()<<endl;
  q.dequeue();
  cout<<q.peek()<<endl;
 return 0;
}