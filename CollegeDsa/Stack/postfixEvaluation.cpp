#include<bits/stdc++.h>
using namespace std;



template<class T> class stacktemp{
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
 stacktemp <int> str;
  string s;
  cout<<"enter your postfix expression ";
    getline(cin,s);
  cout<<s<<endl;
  int i=0;
  
  for( i=0;s[i];i++){
  

  if(s[i]==' '){
  
    continue;
  }else if(isdigit(s[i])){

     int n=0;
     

     while(isdigit(s[i])){
        n=n*10+int(s[i]-'0');
        i++;
     }
     cout<<n<<endl;
     str.push(n);
     i--;
  }else{
     int a=str.pop();
         int b=str.pop();
            cout<<a<<" "<<b<<endl;
          switch(s[i]){
            case '+': str.push(b+a);
                     cout<<str.peek();
                         break;
            case '-': str.push(b-a);
                     cout<<str.peek();

                         break;
            case '*': str.push(b*a);
                     cout<<str.peek();
                        
                  break;
            case '/': str.push(b/a);
                     cout<<str.peek();
                      
                 break;
          }

          
  }
   str.peek();
 
}
}