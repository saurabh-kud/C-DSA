#include<bits/stdc++.h>
using namespace std;

class base{
    public:
      virtual void funct(){
           cout<<"i am from base class"<<endl;

       }
};

class derived :public base{
    public:
    void funct(){
        cout<<"i am from derived class"<<endl;
    }
};


int main(){
    base *ptr=new derived();
    ptr->funct();
}