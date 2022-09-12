
#include<bits/stdc++.h>
using namespace std;

template< typename T>

class stacktemp {
    T* data;
    int top;
    int capacity;

    public:
       //constructor
    stacktemp(){
        capacity=1;
        data= new T [capacity];
        top=0;
    }


    void push(T element){
         if(top-1==capacity){
        capacity*=2;
        T* temp=new T[capacity];
        for(int i{};i<top;i++){
            temp[i]=data[i];
        }
        delete []data;
        data=temp;
        data[top++]=element;
     }else{
        data[top++]=element;
     }
    }


    T pop(){
        if(!isEmpty()){
        return data[--top];
     }else{

        cout<<"stack is empty"<<endl;
        return -1;
      }
    }
    T Peek(){
      if(!isEmpty()){
        return data[top-1];
     }else{
        cout<<"stack is empty"<<endl;
        return -1;
      }
    }

    bool isEmpty(){
         return top==0;
    }
       

};



int main(){

    stacktemp<char> s1;
    s1.push(65);
    cout<<s1.Peek();
    cout<<s1.pop()<<endl;
    cout<<s1.Peek()<<endl;
    cout<<s1.pop()<<endl;
    s1.push('d');
    s1.push('k');
    cout<<s1.Peek()<<endl;
    cout<<s1.isEmpty()<<endl;
}