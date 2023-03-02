#include<bits/stdc++.h>
using namespace std;



template<class T> 
class stacktemp{
    T* data;
    int capacity;
    int top;
    public:
     stacktemp(){
        capacity=1;
        data=new T [capacity];
        top=-1;
     }

    void push(T element){
         if(top==capacity-1){
            capacity*=2;
            T* temp=new T[capacity];
            for(int i=0;i<=top;i++){
                temp[i]=data[i];
            }
            delete data;
            temp[++top]=element;
            data=temp;
         }else{
            data[++top]=element;
         }
    }
    T pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
            return data[top--];
        
    }
    T peek(){
         if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
            return data[top];
        
    }
   

    bool isEmpty(){
        return top==-1;
    }
    void display(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
        }else{
            cout<<endl<<endl;
            for(int i=top;i>=0;i--){
                cout<<"| "<<data[i]<<" |"<<endl;
            }
            cout<<" ----"<<endl;
        }
    }
};



 
int main(){
 stacktemp <int> s;
 cout<< s.isEmpty()<<endl;
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 s.push(10);
 s.push(15);
 s.display();
 cout<<s.peek()<<endl;
 cout<<s.pop()<<endl;
 cout<<s.peek()<<endl;

 s.pop();

 cout<<s.peek()<<endl;
 
 return 0;
}