/* 

class A
{
// data members and member functions()
}:

class B: public A  // single inheritance
{
// data members and member functions();
};

class C
{
// data members and member functions();
};

class D: public B, public C   // multiple inheritance
{
// data members and member functions();
};

*/

#include <iostream>
using namespace std;

class Animal {
  public:
    Animal() {
      cout << "This is an Animal ";
    }
};

//single inheritance
class cat: public Animal {
  public: 
   cat() {
    cout << "that is cat ";
  }
};

class pet {
  public:
    pet() {
      cout << "and pet";
    }
};

//Multiple Inheritance
class kitty: public cat, public pet {
  public: 
    kitty() {
      cout << "\nName of the cat is kitty! \n";
  }
};

int main() {
  kitty mycat;
  return 0;
}
