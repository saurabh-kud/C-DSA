#include<iostream>
using namespace std;

class stackArray{

   int* arr;
   int upper;
   int max;
   
  public:

   stackArray(int da){
     max=da;
     arr=new int[max];
     upper=0;
   }
    void  push(int element);
    int   pop();
    int size();
    bool isEmpty();
    bool isFull();
    int top();
    
};

void stackArray::push(int element){
    if(upper>=max){
        cout<<"stack is full"<<endl;
    }else{
        arr[upper++]=element;
    }
}
int stackArray::pop(){
    if(upper<=0){
        cout<<"stack is empty";
        return -1;
    }else{
        return arr[--upper];
    }
}


int stackArray::top(){
    if(upper==0){
        cout<<"stack is empty";
        return -1;
    }else{
        return arr[upper-1];
    }
}
bool stackArray::isEmpty(){
    return upper==0;
}

bool stackArray::isFull(){
     return upper>=max;
}

int stackArray::size(){
    return upper;
}