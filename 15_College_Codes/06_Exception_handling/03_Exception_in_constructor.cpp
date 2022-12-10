#include <iostream>
using namespace std;
 
class Test1 {
public:
   
    Test1()
    {
        cout << "Constructing an Object of class Test1"
             << endl;
    }
  
  
    ~Test1()
    {
        cout << "Destructing an Object the class Test1"
             << endl;
    }
};
 
class Test2 {
public:
    
    
    Test2() 
    {
        cout << "Constructing an Object of class Test2"
             << endl;
        throw 20;
    }
  
  
    ~Test2()
    {
        cout << "Destructing the Object of class Test2"
             << endl;
    }
};
 
int main()
{
    try {
        
        Test1 t1;
 
       
        Test2 t2;
 
       
        Test1 t3; 
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }
}