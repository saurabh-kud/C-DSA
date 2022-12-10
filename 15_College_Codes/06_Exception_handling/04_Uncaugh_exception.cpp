#include <exception>
#include <iostream>
using namespace std;
  
void myhandler()
{
    cout << "Inside new terminate handler\n";
    abort();
}
  
int main()
{
    
    set_terminate(myhandler); 
    
    try {
        cout << "Inside try block\n";
        throw 100;
    }

    catch (char a) 
    {
        cout << "Inside catch block\n";
    }
    return 0;
}