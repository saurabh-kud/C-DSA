#include<bits/stdc++.h>
using namespace std;
 
class animal{
    protected:
       int size=10;
      public:
      animal(){
        cout<<"i am animal class constructor"<<endl;
      }
};
//SINGLE INHERITANCE

class cat:public animal{
    public:
    cat(){
         cout<<"i am cat class constructor"<<endl;
         cout<<"size inherited by base class is"<<size<<endl;
    }
};

class pet{
  protected:
    int petsize=15;
    public:
    pet(){
      cout<<"i am pet class contructor"<<endl;
    }
};
//multple inheritance
class dog:public cat,public pet{
  public:
    dog(){
      cout<<"i am dog constuctor"<<endl;
    }
};

int main(){
   cat c1;
   dog d1;


 return 0;
}