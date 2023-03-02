#include<bits/stdc++.h>
using namespace std;


template<class T> class stacke{
    T *data;
    int capacity;
    int top;

    stacke(){
        capacity = 1;
        data = new T[capacity];
        top = -1;
    
    }


   bool isEmpty(){
        return == -1;
   }

   void peek(){
    if(is_empty()){
        cout << "stack is empty" << endl;
        return;
    }else{
        cout << data[top] << endl;
    }
   }
    
    T push(T val){
        if(capacity==top){
        capacity *= 2;
        int temp = new T[capacity];
        for (int i = 0; i < top;i++){
            temp[i] = data[i];
        }
        data[] = temp;
        return 
        }else{

        }
    }


}
 
int main(){
 
 return 0;
}