#include<iostream>
#include<fstream>
using namespace std;


class student{
    public:

    student(){
        cout<<"Base class constructor"<<endl;
    }

    ~student(){
        cout<<"Base class destructor"<<endl;
    }
};

class faculty:public student{

    public:
    faculty(){
        cout<<"Derived class constructor"<<endl;
    }

    ~faculty(){
        cout<<"Derived class destructor"<<endl;
    }

};
                    
int main(){

faculty f;
  
return 0;
}