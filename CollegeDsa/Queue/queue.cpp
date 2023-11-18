#include<bits/stdc++.h>
using namespace std;

class circularqueur{

    int *arr;
    int front;
    int rear;
    int size;
    circularqueur(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;

     }


    //isEmpty 
    bool isEmpty(){
         return front == -1;
    }
     bool isFull(){
         return (front + 1) % size == rear;
     }

     void enqueue(int value){
        
     }

}

 
int main(){
 
 return 0;
}