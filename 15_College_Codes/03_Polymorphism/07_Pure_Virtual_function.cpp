#include<iostream>
using namespace std;
//abstaract class
class B {
   public:
      virtual void s() = 0; // Pure Virtual Function
};

class D:public B {
   public:
      void s() {
         cout << "Virtual Function in Derived class";
         cout<<"can do anything"<<endl;
      }
};

int main() {
   B *b;
  
   D dobj;
   b = &dobj;
   b->s();
}