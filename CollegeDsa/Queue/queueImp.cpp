#include<bits/stdc++.h>
using namespace std;

class queueimp{
    int *arr;
    int front, rear, size, capacity;
    public:
    queueimp(int capacity){
        front = -1, rear = -1, size = 0, this->capacity=capacity;
        arr = new int[capacity];
    }

    bool isEmpty(){
       return  front == -1 && rear == -1 ? true : false;
    }
    bool isFull(){
        return (rear + 1) % capacity == front ? true : false;
    }
    
    void enqueue(int value){
      
        if (isFull())
        {
            cout << "Queue is full " << endl;
            return;
       }
       if(isEmpty()){
           front = rear = 0;
       }else{
           rear = (rear + 1) % capacity;
       }
       arr[rear] = value;
      
    }
 
    void dequeue(){
         if(isEmpty()){
           cout << "queue is empty operation can't be perform" << endl;
         }
         cout << "dequeing..." << endl;
         cout << arr[front++] << endl;
    }

   void display()
	{
		// Finding number of elements in queue  
		int count = (rear+capacity-front)%capacity + 1;
		cout<<"Queue       : ";
		for(int i = 0; i <count; i++)
		{
			int index = (front+i) % capacity; // Index of element while travesing circularly from front
			cout<<arr[index]<<" ";
		}
		cout<<"\n\n";
	}
};

int main(){
    queueimp q1(2);
    // q1.display();
    q1.enqueue(15);
    q1.enqueue(20);
    q1.display();
    q1.enqueue(25);
    q1.enqueue(40);
    q1.enqueue(40);
    q1.enqueue(40);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    return 0;
}